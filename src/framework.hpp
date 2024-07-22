// File: `framework.hpp`
// Date: `2024-07-03 | 2024-07-22`

#ifndef FRAMEWORK_HPP
#define FRAMEWORK_HPP

#include <GLFW/glfw3.h>
#include <iostream>
#include <string>
using std::string, std::cout, std::cerr;

typedef struct
{
    float x;
    float y;
}vector2;

class Framework
{
    private:
        GLFWwindow *window;
    public:
        Framework(const int width, const int height, const char *windowTitle);
        
        void Render();
        
        ~Framework();
};

#endif