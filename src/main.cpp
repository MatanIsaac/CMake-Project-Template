#include "Utility/Log.hpp"
#include "App.hpp"

int main()
{
    Log::Init();
    LOG_INFO("Running App");
    App app;
    app.Run();
    return 0;
}   