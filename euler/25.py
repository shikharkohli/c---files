i = 2 
first = 1
second = 1
while len(str(second)) < 1000:
    temp = second
    second += first
    first = temp
    i += 1
    #print second
print i
