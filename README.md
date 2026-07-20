# Introduction
SurveyorBot is a drone that autonomously surveys a designated area, creating a detailed, semantically-labelled 3-d map.  It can provide 3d landscapes to realtors, allow remote inspection of properties, and document scenes.

# Table of Contents
-   [Introduction](#introduction)
-   [Table of Contents](#table-of-contents)
-   [Philosophies and Methods](#philosophies-and-methods)
-   [Installation](#installation)
-   [Run Software](#run-software)
-   [Tooling](#tooling)

# Philosophies and Methods
These are the guiding principles of the project
- Production Level Code: Code development will be high quality, ready to be released and sold
- Google Style Guide: The [Google Style Guide](https://google.github.io/styleguide/) will be adhered to
- Holistic, Forward-Facing Architecture: The software architecture will support functionality expansions, algorithm replacements, etc
- From Scratch Algorithms: Algorithms will be implemented from scratch, with any associated resources identified
- Multi-Level Testing: Code will be linted for consistency, unit tested for debugging, simulated for verification, run on real hardware for validation, and merged through a CI/CD pipeline
- Agile Development Concepts: Project elements will be developed so that verifiable success can be demonstrated early
- Proper Branching: Good git etiquette will be adhered to
- Support Sensor Replay: As applicable, components will support sensor replay for advanced debugging and algorithm comparison
- Modern Language Versions: The current latest, verified version of each language will be used

# Installation
1) Install git on Windows
2) Run `wsl.exe --install Ubuntu-26.04`
3) Run
```
git clone https://github.com/jlordfon/SurveyorBot.git
sudo bash ./SurveyorBot/requirements.sh
git config --global user.name "YourName"
git config --global user.email "YouEmail"
git config --global --type bool push.autoSetupRemote true
git config --global credential.helper "/mnt/c/Program\ Files/Git/mingw64/bin/git-credential-manager.exe"
```
4) Install vcpkg by running the following commands from [these instructions](https://github.com/MicrosoftDocs/vcpkg-docs/blob/main/vcpkg/get_started/includes/setup-vcpkg.md)
```
git clone https://github.com/microsoft/vcpkg.git
cd vcpkg
./bootstrap-vcpkg.sh
./vcpkg integrate install
./vcpkg integrate bash
./vcpkg install gtest
sudo vim ~/.bashrc
```
5) Scroll to the bottom and add the following lines
```
export VCPKG_ROOT="~/vcpkg/"
export PATH="$PATH:$VCPKG_ROOT"
```
6) Save and quit
7) Run the following command
```
source ~/.bashrc
```
8) Clone into the SurveyorBot repo
9) Run
```
cd SurveyorBot
code .
```
10) Install the following VSCode extensions in WSL: C/C++, Clang-Format
11) Right click on a cpp file and select Format Document, choosing Clang-Format
12) Under File->Preferences->Settings, check "Format On Save" and set the "Default Formatter" to "Clang-Format"
# TODO: Software distribution packaging system (CPack)
# TODO: Set up CI/CD (Github or Jenkins or CDash?)

# Run Software
1) Run 
```
cd build
cmake .. -G Ninja -D CMAKE_C_COMPILER=clang -D CMAKE_CXX_COMPILER=clang++
ninja
./hello_world
```

# Tooling
Github, git, C++23, gcc, g++, CMake, Ninja, clang, clang-format, clang-tidy, GitHub Actions