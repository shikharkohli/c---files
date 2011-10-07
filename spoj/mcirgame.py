from math import *
def fac(n):
    prod = 1
    while n>0:
        prod *= n
        n -= 1
    return prod

k = 1
while k<301:
    #try:
    #    k = int(raw_input(""))
    #except:
    #    continue
    #if k==-1:
    #    quit()
    temp = fac(2*k)
    temp /= fac(k+1)*fac(k)
    #temp /= k+1
    print temp
    k += 1
