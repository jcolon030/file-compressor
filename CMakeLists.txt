cmake_minimum_required(VERSION 3.16)

project(file_compressor
    VERSION 0.1.0
    LANGUAGES C
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(compressor
    src/main.c
    src/huffman.c
)

target_include_directories(compressor PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)

if(MSVC)
    target_compile_options(compressor PRIVATE /W4)
else()
    target_compile_options(compressor PRIVATE
        -Wall -Wextra -Wpedantic
    )
endif()