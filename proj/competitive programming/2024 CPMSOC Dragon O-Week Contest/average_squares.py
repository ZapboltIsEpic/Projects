import math

for i in range(1, 101):
    for j in range(i + 2, 101):
        if (math.pow(i, 2) + math.pow(j, 2)) / 2 == math.pow(int(math.sqrt((math.pow(i, 2) + math.pow(j, 2)) / 2)), 2):
            print(i, j)
            break
