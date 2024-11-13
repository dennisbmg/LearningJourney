import itertools
import sys
import os

with open("/home/dbaumgaertner/Projekte/Advent of Code 2018/input.txt", 'r') as f:
    nums = [int(l) for l in f.readlines()]

    print(f"Part 1: {sum(nums)}")

    freqs ={0}

    for f in itertools.accumulate(itertools.cycle(nums)):
        if f in freqs:
            print(f"Part 2: {f}")
            break
        freqs.add(f)


