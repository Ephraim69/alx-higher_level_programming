#!/usr/bin/python3
def weight_average(my_list=[]):
    if my_list is None:
        return 0

    prod = 0
    denom = 0

    for i, j in my_list:
        prod += (i * j)
        denom += j

    avg = prod / denom
    return avg
