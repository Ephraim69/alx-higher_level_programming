#!/usr/bin/python3
def weight_average(my_list=[]):
    if my_list is None:
        return 0

    prod = []
    denom = 0

    for i, j in my_list:
        prod.append(i * j)
        denom += j

    avg = sum(prod) / denom
    return avg
