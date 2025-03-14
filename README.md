# Cpp-y Bird

Cpp-y-Bird is a simple clone of Flappy Bird written in C++ (hence the Cpp name) using SDL2, this game was mainly made as a coding exercise.
Assets are from my previous other Flappy Bird clone named Happy Bird which was written in Java.

## Requirements
To build the game, you need to have the following development libraries installed:

- **SDL2**
- **SDL2_image**

## Building the Game
1. Clone the repository:
   ```sh
   git clone https://github.com/HenryNordin/Cpp-y-Bird.git
   cd Cpp-y-Bird
   ```
2. Create a build directory and navigate into it:
   ```sh
   mkdir build && cd build
   ```
3. Run CMake to generate the build files:
   ```sh
   cmake ..
   ```
4. Compile the game using `make`:
   ```sh
   make
   ```

## Running the Game
After a successful build, go into the bin folder and run the game with:
```sh
cd bin
./Cpp-y-Bird
```

## Controls
- Press **Spacebar** or **Up-arrow** to make the bird fly(flap).
