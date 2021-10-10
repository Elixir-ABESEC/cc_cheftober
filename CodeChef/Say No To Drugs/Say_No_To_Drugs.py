#Question Link
#https://www.codechef.com/CDMN21B/problems/NODRUGS

t = int(input())
for i in range(t):
    n,k,l = map(int,input().split())
    arr = list(map(int,input().split()))
    frndSpeed = arr[n-1]
    maxSpeed = 0
    i = 0
    while i < n-1:
        if maxSpeed < arr[i]:
            maxSpeed = arr[i]
        i+=1
    if frndSpeed > maxSpeed:
        print("Yes")
    else:
        frndSpeed += (l-1)*k
        if maxSpeed >= frndSpeed:
            print("No")
        else:
            print("Yes")