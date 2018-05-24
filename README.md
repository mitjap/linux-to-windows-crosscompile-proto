Crosscompilation using toolchain file is very simillar to regular building flow with CMake.

```
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=<path_to_repo>/Toolchain.windows.cmake <path_to_repo>
cmake --build .

```

This same toolchain file can be used with pretty much any project.
