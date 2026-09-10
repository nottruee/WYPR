#!/usr/bin/env bash

set -e

mkdir -p build

x86_64-w64-mingw32-g++ \
    -shared \
    -o build/WYPR.dll \
    src/main.cpp
