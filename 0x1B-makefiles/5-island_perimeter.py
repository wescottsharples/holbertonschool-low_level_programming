#!/usr/bin/python3
"""
Contains function to count perimeter of an island
1 represents land
0 represents water
"""


def check_cell(x, y, matrix):
    """ Checks if a cell is water or land """
    try:
        if matrix[y][x] == 0:
            return 1
        else:
            return 0
    except IndexError:
        print("Out of range")
        return 0


def count_water(x, y, matrix):
    """ Counts adjacent cells if water """
    count = 0
    """ Check northern cell """
    count += check_cell(x, y - 1, matrix)
    """ Check eastern cell """
    count += check_cell(x + 1, y, matrix)
    """ Check southern cell """
    count += check_cell(x, y + 1, matrix)
    """ Check western cell """
    count += check_cell(x - 1, y, matrix)
    print("Count: {}".format(count))
    return count


def island_perimeter(grid):
    """ Returns the island's perimeter """
    perimeter = 0
    matrix = grid.copy()
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                perimeter += count_water(x, y, matrix)
    return perimeter
