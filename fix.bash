#!/bin/bash

find ./sources -regex '.*\.\(cpp\|hpp\|cc\|cxx\)' -exec clang-format -style=GNU -i {} \;
find ./tests -regex '.*\.\(cpp\|hpp\|cc\|cxx\)' -exec clang-format -style=GNU -i {} \;