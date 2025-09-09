# Text-\_To_Handwritten

# Roadmap: C++ Text-to-Handwriting Generator

This document outlines the development plan for creating a C++ application that converts text files into images that mimic handwriting.

## STEP 0 : DONE(1/1) =>

- Create Roadmap Document For the Project

## STEP 1 : DONE(2/2) =>

- **CMake:** Install CMake for cross-platform project building.
- **vcpkg:** Install the vcpkg package manager to handle third-party libraries.

## STEP 2: DONE(3/3) =>

Verify the toolchain by creating a minimal, compilable project.

- Write a `main.cpp` file for a "Hello, All" program.
- Create a `CMakeLists.txt` to define the project build configuration.
- Successfully compile and run the initial program using CMake.

## STEP 3 : PENDING(0/3) =>

Incorporate the necessary libraries and font files for the core functionality.

- **SMFL Library:** SFML for handling fonts, text rendering, and image creation.
- **Integrate SFML:** Create a `vcpkg.json` manifest file to declare SFML as a dependency. Let CMake and vcpkg handle the installation.
- **Acquire Font:** Download a suitable handwriting `.ttf` font file and add it to the project repository.

## STEP 4 : PENDING(0/3) =>

Write the C++ code to perform the text-to-image conversion.

- **File Input:** Implement logic to read text from a specified input file.
- **Resource Loading:** Load the `.ttf` font file using SFML.
- **Canvas Creation:** Generate a blank white in-memory image to serve as a writing canvas.

## STEP 5 : PENDING(0/4) =>

Text Rendering :

-     Process the input text word-by-word.
-     Track the current (x, y) drawing position.
-     Implement line-breaking logic to wrap text that exceeds the canvas width.
-     Draw each word onto the canvas at the correct position.

## STEP 6 : PENDING(0/1) =>

- **File Output:** Save the final canvas to an image file (e.g., `handwriting.png`).

# Features To Add After This

- Turn The Blank White Canvas To Look Like Writing Paper
- Update The Render To Work With The New Canvas
- Add Feature To Allow User To Use Different Ink Colours In the Same Canvas
