#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): List of lists representing the grid.

    Returns:
        int: Perimeter of the island.

    """
    num_rows = len(grid)
    num_cols = len(grid[0])
    perimeter = 0

    for row in range(num_rows):
        for col in range(num_cols):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
