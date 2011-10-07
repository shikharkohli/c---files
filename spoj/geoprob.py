t = int(raw_input(""))
while t>0:
    string = raw_input("")
    b,c,d = string.split(" ")
    b = int(b)
    c = int(c)
    d = int(d)
    print 2*c-b-d
    t -= 1
