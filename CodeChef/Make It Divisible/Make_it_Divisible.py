t = int(input())
while t > 0:
    n = int(input())
    if int(n) == 1:
        print(3)
        t-=1
        continue
    num = 10**(int(n)-1)
    num += 1
    print(num*3)
    t-=1