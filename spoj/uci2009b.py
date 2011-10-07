def fac(n):
    if n==0:
        return 1
    prod = 1
    while n > 1:
        prod *= n
        n -= 1
    return prod

t = int(raw_input(""))
while t>0:
    n = int(raw_input(""))
    if n == 0:
        print 1
        continue
    if n==1:
        print "A+B"
    print "A^".n
    i = 1
    while i < n:
        print "+%dxA^%dB^%d" % (fac(n)/(fac(i)*fac(n-i)),n-i,i)
        if 
