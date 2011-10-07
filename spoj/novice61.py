def fac(n):
    prod = 1
    while n>0:
        prod *= n
        n -= 1
    return prod


t = int(raw_input(""))
case = t
while t>0:
    word = str(raw_input(""))
    chars = {}
    for k in word:
        if k in chars.keys():
            chars[k] += 1
        else:
            chars[k] = 1 
    #    print k, chars[k]
    sumof = fac(len(word))
    for k in chars.values():
        sumof /= fac(k)
    print "Case %d: %d" %( case -t +1,sumof)
    t -= 1
    
