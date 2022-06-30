#!/usr/bin/python3
import hidden_4
if __name__ == "__main__":
    for l in dir(hidden_4):
        if l[0:2] != "__":
            print(l)
