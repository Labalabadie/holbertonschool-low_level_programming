#!/usr/bin/python3
"""Another commentary for pepocho"""


def island_perimeter(grid):
    """This is a function that calculates per on an island a virtual map"""
    perimeter = 0
    i = 0
    j = 0
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == 1:
                if i <= 0 or not grid[i - 1][j]:
                    perimeter += 1
                if j <= 0 or not grid[i][j - 1]:
                    perimeter += 1
                if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
                    perimeter += 1
                if i >= len(grid) - 1 or not grid[i + 1][j]:
                    perimeter += 1
    return perimeter
