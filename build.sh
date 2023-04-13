#!/usr/bin/bash
g++ -c main_with.cpp main_without.cpp lib.cpp
ar crs lib.a lib.o
g++ -o main_with main_with.o lib.a
g++ -o main_without main_without.o lib.a
