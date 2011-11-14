#TODO
def reverse(num):
    temp = 0
    while num > 0:
        temp *= 10
        temp += num%10
        num /= 10
    return temp

    
i = 1
number = 0
counter = 0
while i < 10000:
    counter = 0
    temp = i
    flag = False
    while counter < 50 and flag == False:
        temp = reverse(temp) + temp
        if reverse(temp) == temp:
            flag = True
            print i
        counter += 1
    if flag == False:
        number += 1
    i += 1

print number

