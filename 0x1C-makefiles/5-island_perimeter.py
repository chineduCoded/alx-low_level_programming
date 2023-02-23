#!/usr/bin/python3
"""Defines an Island perimeter measuring function."""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.
    :param grid: a list of list of integers \
    where 0 represents a water zone and 1 represents a land zone.
    :return: an integer representing the perimeter of the island.
    """
    height = len(grid)
    width = len(grid[0])
    perimeter = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                # Check left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right
                if j == width-1 or grid[i][j+1] == 0:
                    perimeter += 1
                # Check top
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check bottom
                if i == height-1 or grid[i+1][j] == 0:
                    perimeter += 1
    return perimeter
