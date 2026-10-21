cmake_minimum_required(VERSION 3.18)
project(libtorch_test)

list(APPEND CMAKE_PREFIX_PATH "C:/Libraries/libtorch")
find_package(Torch REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main "${TORCH_LIBRARIES}")
set_property(TARGET main PROPERTY CXX_STANDARD 20)

# Copy the LibTorch DLLs next to main.exe so it can run
file(GLOB TORCH_DLLS "C:/Libraries/libtorch/lib/*.dll")
add_custom_command(TARGET main POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different ${TORCH_DLLS} $<TARGET_FILE_DIR:main>)