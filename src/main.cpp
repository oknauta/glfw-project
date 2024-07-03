// File: `main.cpp`
// Date: `2024-07-03`

#include "framework.hpp"

int main()
{
    Framework *framework = new Framework(800, 600, "Window Template");

    framework->Render();
    framework->Update();
    framework->~Framework();

    delete framework;
    return 0;
}
