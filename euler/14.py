count = 0
maxcount = 0
num = 2
for i in range(1,1000001):
    temp = i
    count = 0
    while temp!=1:
        if temp&1 == 0:
            temp /= 2
        else:
            temp = 3*temp + 1
        count += 1
    if count > maxcount:
        maxcount = count
        num = i
        #print num
        #print ","
print num
