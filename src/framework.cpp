// File: `framework.cpp`
// Date: `2024-07-03`

#include "framework.hpp"

Framework::Framework(const int width, const int height, const char *windowTitle)
{

    // Initializing GLFW
    if(!glfwInit())
    {
        cerr << "Failed attempt to load app.\n";
    }

    if(!glfwVulkanSupported())
    {
        cerr << "Vulkan not supported.\n";
        glfwTerminate();
    }

    // Creating window
    window = glfwCreateWindow(width, height, windowTitle, NULL, NULL);

    // If window wasn't created created, do something
    if(!window)
    {
        cerr << "Failed  to load screen.\n";
        glfwTerminate();
    }

    // Adding context to window. Specifying another window whose context the new one should share its objects (textures, vertex and element buffers, etc.) with.
    glfwMakeContextCurrent(window);
};

void Framework::Render()
{
    // Cleaning scene
    glClear(GL_COLOR_BUFFER_BIT);

    // Swapping frames
    glfwSwapBuffers(window);

    // Detecting controllers
    glfwPollEvents();
}

void Framework::Update()
{
    // If window doesn't close, do something
    while(!glfwWindowShouldClose(window))
    {
        Render();
    }
}

Framework::~Framework()
{
    // Destroying everything
    glfwTerminate();
};