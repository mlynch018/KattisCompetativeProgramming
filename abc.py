#https://open.kattis.com/problems/abc
nums = list(map(int,input().split()))
chars = input()
one = chars[0]
two = chars[1]
three = chars[2]
nums.sort()

valA=nums[0]
valB=nums[1]
valC=nums[2]

if one == 'A':
    if two == 'B': #ABC
        print(valA,valB,valC)
    else: #ACB
        print(valA,valC,valB)
elif one == 'B':
    if two == 'A': #BAC
        print(valB,valA,valC)
    else: #BCA
        print(valB,valC,valA)
else: 
    if two == 'A': #CAB
        print(valC,valA,valB)
    else:
        print(valC,valB,valA)      
