# FirstCPP

![CI](https://github.com/TusharKarsan/FirstCPP/actions/workflows/ci.yml/badge.svg)

This badge shows the status of the `CI` workflow in `TusharKarsan/FirstCPP`.

Minimal C++ project scaffolded with CMake.

This repository contains a small example program and a simple smoke test.

It has been almost twenty years since the author last wrote C++. This project is a return to the language using modern tools such as CMake.

## Requirements

- CMake >= 3.10
- A C++17-capable compiler (MSVC, clang, or gcc)
- (Optional) Visual Studio Code for the included debug/task helpers

## Build (PowerShell)

Open a PowerShell prompt and run:

```powershell
mkdir build
cd build
cmake ..
cmake --build . --config Debug
```

Notes:

- On multi-configuration generators (Visual Studio), pass `--config Debug` to the build and `ctest` commands.

## Run the program

From the `build` directory execute the built binary (Debug config on Windows):

```powershell
.\Debug\FirstCPP.exe
```

Or from the workspace root:

```powershell
.\build\Debug\FirstCPP.exe
```

## Tests

A small test executable `test_example` was added under `tests/` and wired into CMake/CTest.

To run tests from the build directory:

```powershell
cd build
ctest --output-on-failure -C Debug -V
```

If you add or change tests, re-run `cmake ..` in the `build` directory to regenerate test rules.

## VS Code

This project includes `/.vscode/launch.json` and `/.vscode/tasks.json` to make it easier to build and debug from VS Code. Those files are intentionally tracked. The default `tasks.json` uses `clang++` for the single-file build task; update it if you need a different toolchain.

To debug the project in VS Code:

- Open the project folder in VS Code
- Run the `CMake: build` task (Tasks > Run Build Task or use the task in the status bar)
- Press F5 or use the Debug view to start `Launch FirstCPP (Debug)`

## Contributing

- Add tests under `tests/` and update `CMakeLists.txt` if you add additional test targets. Run CMake from `build/` to update the project files.

---

If you'd like, I can add a CI workflow (GitHub Actions) to build and run the tests automatically on push.

## Platform notes

- On Linux/macOS use a system clang/gcc and the `cmake`/`ctest` commands as shown above.
- On Windows prefer using the Visual Studio generator (the default when running `cmake` from a Visual Studio command prompt). The README's commands use `--config Debug` for multi-config generators.

## Troubleshooting

- "CMake Error: Could not find a package" — ensure required toolchain and CMake are installed and in PATH.
- Linker errors on Windows — check that you used the correct generator (Visual Studio) or toolchain. For clang on Windows, ensure the MSVC toolchain is available.
- Tests not discovered by CTest — if you modify CMake targets, rerun `cmake ..` in `build/` and rebuild.

---

## Repository rename

This repository was renamed from `FristCPP` to `FirstCPP`. If you have a local clone that still points to the old remote, update it with the following commands:

```powershell
# Set the origin to the new repository URL (adjust if you use SSH)
git remote set-url origin https://github.com/TusharKarsan/FirstCPP.git

# Push your current branch and set the upstream
git push -u origin main
```

If you use CI badges or other external links that referenced the old name, update them to point to `TusharKarsan/FirstCPP` (the CI badge at the top of this README has been updated).

