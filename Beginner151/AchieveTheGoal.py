N,K,M=map(int,input().split())
l=list(map(int,input().split()))
a=N*M-sum(l)
if a < 0:
  print(0)
elif a > K:
  print(-1)
else:
  print(a)