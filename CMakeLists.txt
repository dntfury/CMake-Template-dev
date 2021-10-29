cmake_minimum_required(VERSION 3.16.3)

project(PROJECT_TEMPLATE)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Factorial)
add_subdirectory(external/gtest)
 
# In target_link_libraries(${PROJECT_NAME} Factorial)
# Factorial is <name> from add_library

target_include_directories(${PROJECT_NAME} 
    PUBLIC external/gtest/googletest/include
)

target_link_directories(${PROJECT_NAME}
    PRIVATE external/gtest/lib

)

target_link_libraries(${PROJECT_NAME} Factorial gtest)


