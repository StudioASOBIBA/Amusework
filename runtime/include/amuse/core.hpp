#ifndef AMUSE_INCLUDE_CORE_HPP
#define AMUSE_INCLUDE_CORE_HPP

#if defined(AMUSE_PLATFORM_WINDOWS)
    #if defined(AMUSE_BUILD_SHARED)
        #define AMUSE_API __declspec(dllexport)
    #else
        #define AMUSE_API // __declspec(dllimport)
    #endif
#else
    #define AMUSE_API __attribute__((visibility("default")))
#endif

namespace amuse::core
{
    /**
     * @bried Amuse 런타임 라이브러리를 초기화합니다.
     *
     * @return bool 초기화 성공 여부
     */
    AMUSE_API bool Init();

    /**
     * @bried Amuse 런타임 라이브러리를 종료합니다.
     */
    AMUSE_API void Shutdown();
} // namespace amuse::core

#endif // AMUSE_INCLUDE_CORE_H
