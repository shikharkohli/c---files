#Can be made much more efficient by using hash table/dict to flag the rotated 
#primes and then count them instead of rotating each prime
prime = [2]
def rotate(num,by):
    digits = len(str(num))
    if by >= digits:
        by %= digits

    while by:
        temp = num % 10
        num /= 10
        num = temp*(10**(digits-1)) + num
        by -= 1
    return num

def primefinder():
    for i in range(3,1000000,2):
        k = 3
        isprime = True
        while k*k <= i and prime:
            if i%k == 0:
                isprime = False
            k += 1
        if isprime==True:
            #print i
            prime.append(i)
    return prime

#prime = primefinder()
#f = file("primes.txt","w")
#f.write(str(prime))
#f.close()
f = file("primes.txt")
prime = eval(f.read())
circularprime = 0
for i in prime:
    count = 0
    for k in range(1,len(str(i))):
        if rotate(i,k) in prime:
            count += 1
    if count == len(str(i))-1:
        circularprime += 1
        print str(i) + "==>" + str(circularprime)

print circularprime
