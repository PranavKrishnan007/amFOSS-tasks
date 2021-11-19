import sys


num = int(input()) 
for x in range(num):
    value = int(input())
    v1 = 3
    v2 = 5
    next_num = 0
    sum = 2
    while(next_num < value):
        if next_num%2 == 0:
            sum += next_num
        next_num = v1 + v2
        v1, v2 = v2, next_num
    print(sum)
