#!/usr/bin/env bash
ghc -g main.hs -o main && rm -f main.{hi,o} && ./main > main.txt && rm -f main
