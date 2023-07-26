#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
    grid (list of list of integers): The 2D grid representing the island.

    Returns:
    int: The perimeter of the island.
    """

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Start with all four sides of the cell

                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract two sides (left and right) since they are adjacent

                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract two sides (top and bottom) since they are adjacent

    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
