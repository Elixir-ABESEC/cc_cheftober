#https://www.codechef.com/SEPT21C/problems/AIRLINE/

t = int(input())
for i in range(t):
    a,b,c,d,e = map(int,input().split())
    n=0
    if (a+b) <= d :
        if c<=e :
            n+=1
    if (b+c) <=d :
        if a<=e:
            n+=1
    if (a+c) <= d :
        if b<=e:
            n+=1
    if n==0:
        print("No")
    else:
        print("Yes")
 
