import sys


num = int(input())
for x in range(num):
    value = int(input())
    sum_multiple = 0
    if value < 3 :
        break
    else:
        for i in range(3,value):
            if (i%3==0) | (i%5==0):
                sum_multiple += i
        print(sum_multiple)
