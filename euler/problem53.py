import math

count = 0
i=j=1
while i<=100:
    j = 0
    while j<=i:
        if (math.factorial(i)/(math.factorial(j)*math.factorial(i-j)))>1000000:
            count += 1
        j += 1
    i += 1
print count
