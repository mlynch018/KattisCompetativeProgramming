#Problem-https://open.kattis.com/problems/qaly

#I remembered that input().split() is important when multiple 
# numbers are on the same line seperated by a space

years=int(input())
sum=0.0
for i in range(years):
    num1, num2 = map(float,(input().split()))
    sum+=(num1*num2)
print(sum)
