#!/usr/bin/python3
"""
Module: 5-island_perimeter.py

Function (int): island_perimeter(grid)
    Calculates and return the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ Calculate the parimeter based on 0s that wrap around the 1s taking
    only horizontal and verictal 0s into account.

    Arg:
       grid (list of list) - The grid representing the island.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(i + 1):
            if grid[i][j]:
                # Calculate water (0s) horizontally
                if grid[i][j + 1] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                # Calculate water (0s) vertically
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i - 1][j] == 0:
                    perimeter += 1
    return perimeter
