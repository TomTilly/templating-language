#!/bin/bash

# Exit early if any commands fail
set -e
set -x

# Compile program
clang *.c -Wall -Wextra -Werror -o tl
