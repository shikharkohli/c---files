def func():    
    while (1):
        try:
            num= raw_input("")
            num = int(num)
            if num == 0:
                print 0
                continue
            if num == 1:
                print 1
                continue
        except:
            return 0
            break
        print 2+(num-2)*2
func()
