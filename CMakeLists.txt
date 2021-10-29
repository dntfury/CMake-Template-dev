cmake_minimum_required(VERSION 3.16.3)

project(PROJECT_TEMPLATE)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Factorial)

 
# In target_link_libraries(${PROJECT_NAME} Factorial)
# Factorial is <name> from add_library

target_link_libraries(${PROJECT_NAME} Factorial)


