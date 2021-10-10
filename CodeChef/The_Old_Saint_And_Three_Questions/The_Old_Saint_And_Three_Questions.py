# Question Link
# https://www.codechef.com/CDMN21B/problems/THREEQ/


t = int(input()) #Input for the number of test cases
for i in range(t): 
    a = list(map(int,input().split())) #Input the saint question string
    b = list(map(int,input().split())) #Input the hero answers string
    count1a = a.count(1)   #Count the number of 1 in saint questions
    count1b = b.count(1)   #Count the number of 1 in hero answers
    if count1a == count1b: #Check if number of 1 is equal in both the string
        print("Pass")
    else:
        print("Fail")
    t-=1