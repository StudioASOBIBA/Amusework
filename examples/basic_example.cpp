#include <amuse/core.hpp>
#include <amuse/graphics.hpp>

#include <iostream>

using namespace amuse;

int main(int argc_, char* argv_[])
{
    if (!core::Init())
    {
        std::cerr << "Failed to initialize!" << std::endl;
        return -1;
    }

    if (!graphics::Init())
    {
        std::cerr << "Failed to initialize!" << std::endl;
        core::Shutdown();
        return -1;
    }

    constexpr int frameCount = 10;
    for (int count = 0; count < frameCount; count++)
    {
        std::cout << "Frame " << (count + 1) << "/" << frameCount << std::endl;

        graphics::CleanUp();
        graphics::Present();
    }

    graphics::Shutdown();
    core::Shutdown();

    return 0;
}
