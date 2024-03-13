add_library(
    GFMUL_LIB
    hpp/mul.hpp
    cpp/mul.cpp
)

target_include_directories(GFMUL_LIB PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")