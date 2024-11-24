#include "App.hpp"
#include "Log.hpp"

void App::Run()
{
    if(!Init("App Title", DEFAULT_WIDTH, DEFAULT_HEIGHT))
    {
        
    }
    while(!glfwWindowShouldClose(m_Window.get()))
    {
        Update(0.0f);
        ProcessInput();
        Render();
    }
    Clean();
}

bool App::Init(const char* title, int width, int height)
{
    Log::Init();
    
    if(!glfwInit())
    {
        LOG_ERROR("Failed to initialize glfw!..");
        glfwTerminate();
        return false;    
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
 

    m_Window.reset(glfwCreateWindow(width,height,title,nullptr,nullptr));
    if(!m_Window)
    {
        LOG_ERROR("Failed to create glfw window!..");
        glfwTerminate();
        return false;    
    }
    glfwMakeContextCurrent(m_Window.get());
    glfwSwapInterval(1); // Enable vsync

    glfwSetFramebufferSizeCallback(m_Window.get(), framebuffer_size_callback);  
    glfwSetInputMode(m_Window.get(), GLFW_CURSOR, GLFW_CURSOR_NORMAL);

    // Initialize glad
    //----------------------------------------------------------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        LOG_ERROR("Failed to load OpenGL!");
        glfwTerminate();
        return false;
    }
    //----------------------------------------------------------------------------------------

    glEnable(GL_DEPTH_TEST);
    // Enable blending to allow for transparent textures and effects.
    glEnable(GL_BLEND);
    // Set the blending function to use source alpha and one minus source alpha blending mode.
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);


    return true;
}

void App::Update(float deltaTime)
{

}

void App::ProcessInput()
{
    if(glfwGetKey(m_Window.get(), GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(m_Window.get(), true);
}

void App::Render()
{
    glClearColor(0.6f, 0.6f, 0.6f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(m_Window.get());
    glfwPollEvents();       
}

void App::Clean()
{
    glfwTerminate();
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}