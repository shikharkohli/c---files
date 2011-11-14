number = 11
while number:
    temp = sorted(str(number))
    if temp == sorted(str(2*number)) and temp == sorted(str(3*number)) and temp == sorted(str(4*number)) and temp == sorted(str(5*number)) and temp == sorted(str(6*number)):
        print number
        break
    else:
        number += 1

