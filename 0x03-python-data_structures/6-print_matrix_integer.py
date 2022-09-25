#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for row in matrix:
        i = 0
        for col in row:
            if i == len(row) - 1:
                print("{:d}".format(col))
            else:
                print("{:d}".format(col), end=" ")
            i += 1
