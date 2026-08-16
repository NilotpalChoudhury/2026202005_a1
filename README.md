# Student Portal

This project is a small student portal application developed as part of 
the Git version control lab.

The project is used to demonstrate software development using Git, 
including commits, branching, merging, file operations, conflict resolution,
and recovery techniques.

## Setup

### Prerequisites

- Git
- A C++ compiler such as g++
- Linux/Unix environment

Clone the repository and enter the project directory before compiling the program.

## Utils Module
Provides username validation used across the portal. It checks for whitespaces and
username length

Also User Input is set for username and for the addition of  two numbers inside the 
main program

## Project Structure

The `data/` directory contains supporting modules. Files in this project
have been renamed and reorganized over time using `git mv` to preserve
history — see `git log --follow` on any moved file for full lineage.

## Login Module
Handles username and password validation for user login.

## Profile Module
Displays student name and roll number.

## Dashboard Module
Calculates and displays a student's average grade and gives him a grading
