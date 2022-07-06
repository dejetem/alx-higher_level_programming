#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    lastest = a_dictionary.copy()
    for a, b in lastest.items():
        if b == value:
            del a_dictionary[k]
    return a_dictionary
