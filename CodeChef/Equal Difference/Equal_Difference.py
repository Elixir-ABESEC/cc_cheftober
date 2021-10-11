# Question Link
# https://www.codechef.com/problems/EQDIFFER

t = int(input()) #test cases input
while t > 0:
    n = int(input()) #size of the array input
    arr = list(map(int,input().split())) #array input
    if n == 1 or n == 2: #initial case see editorial for more..
        print("0")
        t-=1
        continue
    d = {}            #empty dictionary
    for i in arr:     #count frequency of the particular number in the array
        if i not in d:
            d[i] = 1
        else:
            d[i] += 1  
    maxi = 0
    for i in d.values():       #finding maximum frequency
        maxi = max(maxi,i)
    if maxi == 1:
        print(n-2)
    else:
        print(n - maxi)
    t-=1       