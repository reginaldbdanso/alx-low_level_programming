#!/usr/bin/python3
"""
Island perimeter calc module
"""


def is_rectangular(grid):
    """
    Returns true if island is rectangular
    and false if otherwise
    """

    height = len(grid)
    width = len(grid[0])
    if width == height or width > 100 or height > 100:
        return False
    return True


def is_island_one_piece(grid):
    """
    Returns true if island is one piece
    and false if otherwise
    """

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:

                # check if there exists a cell to the right
                if j+1 < len(grid[i]):
                    # check value of the cell to the right
                    if grid[i][j+1] == 1:
                        to_right = True
                    else:
                        to_right = False

                # check if there exists a cell below
                if i+1 < len(grid):
                    # check value of the cell below
                    if grid[i+1][j] == 1:
                        below = True
                    else:
                        below = False

                if to_right is False and below is False:
                    # check if we're on the penultimate row
                    if i+2 < len(grid):
                        return False

    return True


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    if is_island_one_piece(grid) and is_rectangular(grid):
        perimeter = 0
        for ingrid in grid:
            i = 0
            # j = i + 1
            while (i < len(ingrid)):
                if ingrid[i] == 0 and i+1 != len(ingrid):
                    if ingrid[i+1] == 1:
                        perimeter += 1
                        i += 1
                        continue
                    else:
                        i += 1
                        continue

                if ingrid[i] == 1 and i+1 != len(ingrid):
                    if ingrid[i+1] == 0:
                        perimeter += 1

                i += 1
        perimeter *= 2
        return perimeter
    else:
        return
