#!/usr/bin/python3
def square_matrix_map(matrix=[]):
    return list(map(lambda mat: list(map(lambda a: a**2, submat)), matrix))
