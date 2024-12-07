# Simple Build Env For Nuvoton 8051 with free compiler SDCC using CMake & OpenNuvoton Drivers

## Usage

- Clone the repo
- Download [CMake V3.19+](https://cmake.org/) , [Small Device C Compiler](https://sdcc.sourceforge.net/index.php#Download) and [Nuvoton Command Line Tools](https://www.nuvoton.com/tool-and-software/software-tool/programmer-tool/) linux users can use OpenOCD customized for nuvoton8051 -- u need to make changes on CMake
- Add these to your system env. vars.(optional)
- Copy folder tamplate
- Edit your CMakePresets.json for target chip and ur directories
- To Build first run 
    ```bash
    cmake --preset SDCC_BUILD
    ```
    then
    ```bash
    cmake  --build --preset  Build
     ```
- To upload to the target
    ```bash
    cmake --build --preset Run
    ```

For The ones who dont like command line to use VS Code and CMakeTools extention can be configured