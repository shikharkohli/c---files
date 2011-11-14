def findSumOfFactors(n):
    i = 1
    sum_ = 0
    while i*i <= n:
        if n%i == 0:
            sum_ += i + n/i
        if i*i == n:
            sum_ -= i
        i += 1
    return sum_-n

sumMap = {}
for i in range(1,10001):
    sumMap[i] = findSumOfFactors(i)

print sumMap[220]
totsum= 0
for k in sumMap.keys():
    temp = sumMap[k]
    try:
        if sumMap[k] == temp and sumMap[temp] == k and temp!=k:
            totsum += k + sumMap[k]
            print  "" + str(k) + "===>" + str(sumMap[k])
    except:
        pass
print totsum 
