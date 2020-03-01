cmake_minimum_required(VERSION 3.15)
project(ChartCore)

set(CMAKE_CXX_STANDARD 17)
set(CHARTS DataEngine PresentationEngine)

find_package(Vulkan REQUIRED)
include_directories("$ENV{VULKAN_SDK}/include")

find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})

find_package(glfw3 3.3 REQUIRED)
include_directories(${GLFW_INCLUDE_DIRS})

find_package(glm REQUIRED)
include_directories(${GLM_INCLUDE_DIRS})

#foreach(_dir IN ITEMS ${PATTERNS})
#    file(GLOB _files "${_dir}/*.cpp")
#    message(STATUS "Pattern `${_dir}':")
#
#    foreach(_file IN ITEMS ${_files})
#
#        get_filename_component(_file_name
#                ${_file} NAME
#                )
#
#        set(_project_name "${_file_name}")
#        message(STATUS "  ${_dir}/${_file_name} is going to be built")
#
#        add_executable(${_project_name} "${_dir}/${_file_name}")
#
#        target_link_libraries(ChartCore ${GLEW_LIBRARIES} ${GLFW_LIBRARIES} ${GLM_LIBRARIES} Vulkan::Vulkan)
#    endforeach()
#endforeach()

file(GLOB PresentationEngine "*.hpp" "*.cpp")
file(GLOB DataEngine "*.hpp" "*.cpp")

add_executable(ChartCore main.cpp PresentationEngine DataEngine)

target_link_libraries(ChartCore ${GLEW_LIBRARIES} ${GLFW_LIBRARIES} ${GLM_LIBRARIES} Vulkan::Vulkan)
