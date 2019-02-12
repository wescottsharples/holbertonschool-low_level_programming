#!/usr/bin/python3
"""
Contains function to count perimeter of an island
1 represents land
0 represents water
"""


def island_perimeter(grid):
    """ Returns the island's perimeter """
    perimeter = 0
    if len(grid) - 1 == 0 or len(grid[0]) - 1 == 0:
        return 0
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    perimeter += 1
                if x == len(grid[0]) - 1 or grid[y][x + 1] == 0:
                    perimeter += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    perimeter += 1
                if x == 0 or grid[y][x - 1] == 0:
                    perimeter += 1
    return perimeter
