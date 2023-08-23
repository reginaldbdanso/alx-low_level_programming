#!/usr/bin/python3
"""
Island perimeter calc module
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
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
