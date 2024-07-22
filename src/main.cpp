// File: `main.cpp`
// Date: `2024-07-03 | 2024-07-22`

#include "framework.hpp"

int main()
{
    // Starting
    Framework *framework = new Framework(800, 600, "Window Template");

    // Rendering
    framework->Render();

    // Quitting
    framework->~Framework();
    delete framework;
    return 0;
}
