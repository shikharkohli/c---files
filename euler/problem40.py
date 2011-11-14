numberstring = ""
i = 1
while len(numberstring) <= 1000000:
    numberstring += str(i)
    i += 1

temp = 1
answer = 1
while temp <= 1000000:
    print numberstring[temp-1],
    answer *= int(numberstring[temp-1])
    temp *= 10

#answer = int(numberstring[1]) * int(numberstring[10]) * int(numberstring[100]) * int(numberstring[1000]) * int(numberstring[10000]) * int(numberstring[100000]) * int(numberstring[1000000])
print answer
print "====="
