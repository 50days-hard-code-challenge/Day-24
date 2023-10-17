import math
## Read input as specified in the question.
## Print output as specified in the question.
n=int(input())
f=0
for i in range(2,int(math.sqrt(n))+1):
    if n%i==0:
        f=1
        break
if n==1:
    f=1
if f==0:
    print("YES")
else:
    print("NO")
