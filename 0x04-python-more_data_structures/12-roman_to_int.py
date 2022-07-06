#!/usr/bin/python3
def roman_to_int(roman_string):
    if isinstance(roman_string, str):
        return 0
    a = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    b = 0
    c = 0
    for i in reversed(roman_string):
        b = a[i]
        c += b if c < b * 5 else - b
    return c
