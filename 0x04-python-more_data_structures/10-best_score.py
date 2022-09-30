#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary is None:
        return None

    max = list(a_dictionary.values())[0]
    for value in a_dictionary.values():
        if value >= max:
            max = value

    for key, value in a_dictionary.items():
        if value == max:
            return key
