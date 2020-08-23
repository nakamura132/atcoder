N,M=map(int,input().split())
ll = []
for i in range(M):
  a,b = input().split()
  ll.append((int(a),b))
chk = [False for i in range(N+1)]
ac_cnt = 0
pn_cnt = 0

for i in range(M):
  if not chk[ll[i][0]]:
    if ll[i][1]=='WA':
      pn_cnt += 1
    elif ll[i][1]=='AC':
      ac_cnt += 1
      chk[ll[i][0]] = True
print(ac_cnt, pn_cnt)