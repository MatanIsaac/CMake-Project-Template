#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <memory>

struct GLFWwindowDeleter
{
    void operator()(GLFWwindow* ptr)
    {
         glfwDestroyWindow(ptr);
    }
};

class App 
{
public:
    App() = default;
    ~App() = default;

    void Run();
    bool Init(const char* title, int width, int height);
    void Update(float deltaTime);
    void ProcessInput();
    void Render();
    void Clean();

private:
    std::unique_ptr<GLFWwindow, GLFWwindowDeleter> m_Window;      

    const int DEFAULT_WIDTH = 800;
    const int DEFAULT_HEIGHT = 600;
}; 

void framebuffer_size_callback(GLFWwindow* window, int width, int height);  