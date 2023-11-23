#!/usr/bin/python3
"""
returns the perimeter of
the island described in grid:
"""


def island_perimeter(grid):
    """The function
    """
    baseline = []
    for i, row in enumerate(grid):
        if i in range(1, len(grid)-1):
            for j, cell in enumerate(row):
                # if i == 1 and cell == 1:
                #    baseline.append(j)

                if ((i == 1) or j in baseline or
                        (j-1 in baseline and row[j-1])) and cell == 1:
                    baseline.append(j)

    return (2 * len(baseline) + 2)
