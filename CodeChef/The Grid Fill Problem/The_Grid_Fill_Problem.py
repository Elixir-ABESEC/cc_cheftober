# Question Link
#https://www.codechef.com/START11B/problems/FILLGRID

t = int(input()) #For test case 
while t > 0:     #iterarte to each test cases
    n = int(input())  #Take input or sides of the matrix
    if n%2 == 0:    #CASE EVEN for more see the editorial.md
        i = n
        j = n
        while i >= 1:
            arr = []
            j = n
            while j >= 1:
                arr.append(-1)
                j-=1
            print(*arr)   #printing the MATRIX
            i-=1
    else:        #CASE ODD for more see the editorial.md
        i = n
        j = n
        while i >= 1:
            arr = []
            j = n
            while j >= 1:
                if i == j:
                    arr.append(-1)
                else:
                    arr.append(1)
                j-=1
            print(*arr)     #printing the MATRIX
            i-=1
    t-=1

