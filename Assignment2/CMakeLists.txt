cmake_minimum_required(VERSION 3.13)
project(Assignment2 C)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(Assignment2 main.c vc_pt.h vc_pt.c vc_ultimate_pt.h vc_ultimate_pt.c vc_swap.h vc_swap.c vc_div_mod.h vc_div_mod.c vc_ultimate_div_mod.h vc_ultimate_div_mod.c vc_putstr.h vc_putstr.c vc_strlen.h vc_strlen.c vc_strrev.h vc_strrev.c vc_atoi.h vc_atoi.c)