#!/usr/bin/python3
"""Another commentary for pepocho"""


def island_perimeter(grid):
    """This is a function that calculates per on an island a virtual map"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == 1:
                if grid[i - 1][j] != 1:
                    perimeter += 1
                if grid[i + 1][j] != 1:
                    perimeter += 1
                if grid[i][j - 1] != 1:
                    perimeter += 1
                if grid[i][j + 1] != 1:
                    perimeter += 1
    return perimeter
