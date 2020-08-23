n,m,k=map(int,input().split())
A=list(map(int,input().split()))
B=list(map(int,input().split()))
a,b=[0],[0]
for i in range(n):
  a.append(a[i]+A[i])
for i in range(m):
  b.append(b[i]+B[i])
a.pop(0)
b.pop(0)
x=0
for i in range(n-1,-1,-1):
  if a[i]>k:
    continue
  j=m-1
  while j>=0 and b[j]>k-a[i]:
    j-=1
  x=max(x,i+j+2)
print(x)
