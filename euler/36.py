def palin(number):
    number = str(number)
    i = 0
    j = len(number) - 1
    while i <= j:
        if number[i] != number[j]:
            return False
        i += 1
        j -= 1
    return True

sumofnum = 0
for i in range(1,1000001):
    if palin(i) and palin(str(bin(i))[2:]):
        sumofnum += i

print sumofnum 
