string1 = raw_input("")
k,l,m = string1.split(" ")
k = int(k)
l = int(l)
m = int(m)
#l = int(raw_input(""))
#m = int(raw_input(""))
towers = [ 0 for x in range(0,m) ]
i = 0
string1 = raw_input("")
towers = string1.split(" ")
while i < m:
    towers[i] = int(towers[i])
    i += 1
winpos = [0 for x in range(0,max(towers)+2) ]
i = 1 
total = max(towers)
while i < total+2:
    if winpos[i-1] is 0 or ((i-k)>=0 and winpos[i-k] is 0) or ((i-l)>=0 and winpos[i-l] is 0):
        winpos[i] = 1
    i += 1
i = 0
#print " \b",
while i < m:
    if winpos[towers[i]] == 0:
        print "\bB",
    else:
        print "\bA",
    i += 1
