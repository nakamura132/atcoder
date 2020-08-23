K = int(input())
n = 7
c = 0
while c <= K:
  n %= K
  c += 1
  if n == 0:
    print(c)
    exit()
  n = n * 10 + 7
print(-1)
