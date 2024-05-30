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
    rows = len(grid)
    cols = len(grid[0])
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check all four directions (up, down, left, right)
                if i == 0 or grid[i - 1][j] == 0:  # Top
                    perimeter += 1
                if i == rows - 1 or grid[i + 1][j] == 0:  # Bottom
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:  # Left
                    perimeter += 1
                # Check right edge or right neighbor
                if j == cols - 1 or grid[i][j + 1] == 0:  # Right
                    perimeter += 1
    return perimeter
