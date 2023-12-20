#!/usr/bin/python3
"""illustrate an island_perimeters measuring functions."""


def island_perimeter(grid):
    """Result the perimiter of an island.
    The grid reps water by_0 and land by_1.
    Args:
        grid (list): A list of list of int rep an island.
    Returns:
        The perimeter of the island illustrated in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2
