#include "amuse/core.hpp"

#include <iostream>

namespace amuse::core
{
    bool Init()
    {
    	std::cout << "Amuse core initialized." << std::endl;
    	return true;
    }
    void Shutdown()
    {
    	std::cout << "Amuse core shutdown." << std::endl;
    }
} // namespace amuse::core
