t = int(raw_input(""))
while t>0:
    n = int(raw_input(""))
    if n==1:
        print 0
        t -= 1
        continue 
    if n%2 == 0:
        print (n-1)%1000000007
    else:
        print (n-2)%1000000007
    t -= 1
