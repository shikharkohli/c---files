def findnumfactors(n):
    i = 1
    count = 0
    while i * i <= n:
        if n%i == 0:
            count += 1
            #print i
        i += 1
    if (i-1)*(i-1)==n:
        return 2*count - 1
    else:
        return 2*count

trinum = 28
i = 7
while findnumfactors(trinum) < 500:
    i += 1
    trinum += i

print trinum
print findnumfactors(253)
