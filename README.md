# Deep-Learning-CPP
Working through the textbook "Deep Learning with C++: Design and deploy neural networks using CUDA for high-performance AI in C++" and building deep learning models in C++ with LibTorch (PyTorch's C++ API).

The book uses CUDA, but my laptop doesn't have an NVIDIA GPU, so I'm running everything on the CPU build of LibTorch for now. The code should still work with the CUDA version if you have a GPU.

## What I'm using
- Windows 11
- Visual Studio 2026 (MSVC compiler, C++20)
- LibTorch 2.14.1 (CPU, Release)
- CMake (the one that comes with Visual Studio)

## Setup
1. Download LibTorch from https://pytorch.org/get-started/locally/ — pick LibTorch, C++, Windows, CPU, and grab the Release version.
2. Unzip it to `C:\Libraries\libtorch` (so you have `C:\Libraries\libtorch\include`, `lib`, `share`, etc.). If you put it somewhere else, change the two paths in `CMakeLists.txt`.
3. Open the project folder in Visual Studio (File > Open > Folder).
4. Switch the configuration at the top to **x64-Release**. Debug won't work since the LibTorch download is a Release build.
5. Run with Ctrl+F5.

## Notes
- LibTorch 2.14 needs C++20, it won't compile with C++17.
- The `kineto not found` warning when CMake configures is fine, it's just a profiler that doesn't ship with the Windows build.
- The LibTorch DLLs get copied next to `main.exe` after building, which is why the `out/` folder is so big (and why it's in `.gitignore`).
