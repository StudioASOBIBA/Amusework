#include "amuse/graphics.hpp"

#include <iostream>

namespace amuse::graphics
{
    bool Init()
    {
    	std::cout << "Amuse graphics initialized." << std::endl;
    	return true;
    }

    void Present()
    {
    	std::cout << "Presenting frame." << std::endl;
    }

    void CleanUp()
    {
    	std::cout << "Cleaning up graphics." << std::endl;
    }

    void Shutdown()
    {
    	std::cout << "Amuse Graphics shutdown." << std::endl;
    }
}
