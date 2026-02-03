#ifndef AMUSE_INCLUDE_GRAPHICS_HPP
#define AMUSE_INCLUDE_GRAPHICS_HPP

#include "core.hpp"

namespace amuse::graphics
{
    /**
     * @brief 그래픽스 API를 초기화합니다.
     */
    AMUSE_API bool Init();

    /**
     * @brief 화면에 렌더링된 내용을 표시합니다.
     */
    AMUSE_API void Present();

    /**
     * @brief 화면을 지정된 색상으로 지웁니다.
     */
    AMUSE_API void CleanUp();

    /**
     * @brief 그래픽스 API를 종료합니다.
     */
		AMUSE_API void Shutdown();
} // namespace amuse::graphics

#endif // AMUSE_INCLUDE_GRAPHICS_HPP
