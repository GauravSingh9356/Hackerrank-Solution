import math
import os
import random
import re
import sys

# Complete the pangrams function below.


def pangrams(s):
    pass


if __name__ == '__main__':
    s = input().lower()
    s = set(s)
    s.discard(" ")
    if(len(s) == 26):
        print('pangram')
    else:
        print("not pangram")
