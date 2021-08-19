#!/usr/bin/env bash
rm -f main && ghc -g main.hs -o main && rm -f main.{hi,o} && ./main
