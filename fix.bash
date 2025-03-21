#!/bin/bash

find ./sources -regex '.*\.\(cpp\|hpp\|cc\|cxx\)' -exec clang-format -style=Google -i {} \;
find ./tests -regex '.*\.\(cpp\|hpp\|cc\|cxx\)' -exec clang-format -style=Google -i {} \;