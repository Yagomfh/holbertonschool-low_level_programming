#!/usr/bin/python3
"""Module to calculate the perimeter of an island"""


def island_perimeter(grid):
    island_beaches = 0
    for y in range(1, len(grid) - 1):
        for x in range(1, len(grid[0])):
            if grid[y][x] == 1:
                if grid[y - 1][x] == 0:
                    island_beaches += 1
                if grid[y + 1][x] == 0:
                    island_beaches += 1
                if grid[y][x - 1] == 0:
                    island_beaches += 1
                if grid[y][x + 1] == 0:
                    island_beaches += 1
    return island_beaches
