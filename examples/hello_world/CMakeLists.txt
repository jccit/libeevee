cmake_minimum_required(VERSION 3.0.0)
project(hello_world VERSION 0.1.0)

include(CTest)
enable_testing()

if (WIN32)
    add_executable(hello_world WIN32 main.cpp)
else()
    add_executable(hello_world main.cpp)
endif()

target_include_directories(hello_world PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(hello_world eevee)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
