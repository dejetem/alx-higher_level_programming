#!/usr/bin/python3
'''Module for BaseGeometry class.'''


class BaseGeometry:
    '''BaseGeometry class.'''
    def area(self):
        '''Method to be compute in this area.'''
        raise Exception('area() has not been implemented')

    def integer_validator(self, name, value):
        '''Method for validating the value.'''
        if type(value) != int:
            raise TypeError("{} must be an integer".format(name))
        if value <= 0:
            raise ValueError("{} must be greater than 0".format(name))
