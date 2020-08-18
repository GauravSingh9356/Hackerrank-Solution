import math
import os
import random
import re
import sys

# Complete the marsExploration function below.


if __name__ == '__main__':
    s=input()
    count=0
    for i in range(len(s)):
        if s[i]!="SOS"[i%3]:
            count+=1
            
    print(count)
            



