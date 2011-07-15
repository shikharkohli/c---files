def fac(n):
    if n==0:
        return 1
    prod = 1
    while n>0:
        prod *= n
        n -= 1
    return prod

powernums = {}
i = 3
powernums[0] = 0
powernums[1] = 1 
powernums[2] = 0
while i <= 60:
    if i%2 == 1:
        powernums[i] = 0 #powernums[i-1]
        i += 1
        continue
    else:
        powernums[i] = fac(i-1)
        powernums[i] /= fac((i-1)/2)
        powernums[i] /= fac((i-1)-(i-1)/2)
        i += 1

t = int(raw_input(""))
while t>0:
    num = int(raw_input(""))
    sumof = 0
    power = 0
    while num!=1 :
        num = num >> 1
        power += 1
    #print power
    k = 1
    while k<=power:
        sumof += powernums[k]
        k += 1
    print sumof 
    t -= 1
