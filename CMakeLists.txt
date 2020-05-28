cmake_minimum_required(VERSION 3.0.0)
project(eevee VERSION 0.1.0)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(CTest)
enable_testing()

if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set(MACOS TRUE)
endif()

if (WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

file(GLOB SRC_FILES
    ${PROJECT_SOURCE_DIR}/src/*.cpp
    ${PROJECT_SOURCE_DIR}/src/**/*.cpp
)

if (MACOS)
    file(GLOB MAC_SRC_FILES
        ${PROJECT_SOURCE_DIR}/src/Mac/*.m
        ${PROJECT_SOURCE_DIR}/src/Mac/*.mm
    )
    set(SRC_FILES ${SRC_FILES} ${MAC_SRC_FILES})
endif()

add_library(eevee SHARED ${SRC_FILES})

target_include_directories(eevee PUBLIC ${PROJECT_SOURCE_DIR}/include)

if (MACOS)
    target_link_libraries(eevee "-framework AppKit")
endif()

add_subdirectory(examples/hello_world)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
