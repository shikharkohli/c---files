def fac(n):
    if n==0 or n==1:
        return 1
    temp=1
    while n>0:
        temp *= n
        n -= 1
    return temp

n=int(raw_input(""))
n=fac(n)
num = 0
x,y=1,1
while x<=2*n:
    y = 1
    while y<=2*n:
        if ((x*y)/(x+y))==n:
            num += 1
        y += 1
    x += 1

print num
