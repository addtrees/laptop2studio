cmake_minimum_required(VERSION 3.12)
project(learnOpenCV)

find_package(OpenCV REQUIRED)
set(CMAKE_CXX_STANDARD 14)

if(CMAKE_VERSION VERSION_LESS "2.8.11")
    include_directories(${OPENCV_INCLUDE_DIRS})
endif()

add_executable(learnOpenCV main.cpp resource/FirstTest/erode.hpp resource/FirstTest/blur.hpp resource/FirstTest/canny.hpp resource/FirstTest/ReadAndVideo.hpp HighGui/HighGui.cpp HighGui/HighGui.hpp resource/sliderbar/sliderbar.cpp resource/mouseoperation/mouseoperation.cpp)

target_link_libraries(learnOpenCV ${OpenCV_LIBS})