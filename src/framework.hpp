// File: `framework.hpp`
// Date: `2024-07-03`

#include <GLFW/glfw3.h>
#include <iostream>
#include <string>
using std::string, std::cout, std::cerr;

class Framework
{
    private:
        GLFWwindow *window;
    public:
        Framework(const int width, const int height, const char *windowTitle);
        
        void Render();
        void Update();
        
        ~Framework();
};