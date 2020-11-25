cmake_minimum_required(VERSION 3.10)
project(SiliconSM8 VERSION "1.0.0")

add_executable(SiliconSM8 strops.cpp ai_main.cpp main.cpp)
target_include_directories(SiliconSM8 PUBLIC "${PROJECT_BINARY_DIR}/src")
