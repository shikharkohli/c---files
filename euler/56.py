#Can be made more efficient?
def sumnum(number):
    temp = 0
    while number!=0:
        temp += number%10
        number /= 10
    return temp

maxsum = 0

for i in range(1,101):
    for j in range(1,101):
        if sumnum(i ** j) > maxsum:
            maxsum = sumnum(i ** j)

print maxsum
