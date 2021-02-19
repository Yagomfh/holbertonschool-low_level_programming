#!/usr/bin/python3
"""Module to calculate the perimeter of an island"""


def island_perimeter(grid):
    """Calculates the perimeter of an island"""
    island_beaches = 0
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            count = 0
            if grid[y][x] == 1:
                if y > 0:
                    count += grid[i - 1][j]
                if y < (len(grid) - 1):
                    count += grid[i + 1][j]
                if x > 0:
                    count += grid[i][j - 1]
                if x < (len(grid[0]) - 1):
                    count += grid[i][j + 1]
                island_beaches += 4 - count
    return island_beaches
