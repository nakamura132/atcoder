H,W=map(int,input().split())
S=[]
for i in range(H):
  S.append([a for a in input().split()])
print(S)

for x in range(H):
  for y in range(W):
    i,j=x,y
    chk = []
    stack = []
    for k in range(W):
      chk.append([0 for _ in range(W)])
    chk[i][j] = 1

    mx = 1
    while 1:
      # North
      ii = i-1
      jj = j
      if not ii < 0 or jj < 0 or ii >= H or jj >= W or S[ii,jj] == '#' or chk[ii,jj] > 0:
        chk[ii][jj] = chk[i][j] + 1
        if mx < chk[ii][jj]:
          mx = chk[ii][jj]
        stack.append((ii,jj))
      # East
      ii = i
      jj = j+1
      if not ii < 0 or jj < 0 or ii >= H or jj >= W or S[ii,jj] == '#' or chk[ii,jj] > 0:
        chk[ii][jj] = chk[i][j] + 1
        if mx < chk[ii][jj]:
          mx = chk[ii][jj]
        stack.append((ii,jj))
      # South
      ii = i+1
      jj = j
      if not ii < 0 or jj < 0 or ii >= H or jj >= W or S[ii,jj] == '#' or chk[ii,jj] > 0:
        chk[ii][jj] = chk[i][j] + 1
        if mx < chk[ii][jj]:
          mx = chk[ii][jj]
        stack.append((ii,jj))
      # West
      ii = i
      jj = j-1
      if not ii < 0 or jj < 0 or ii >= H or jj >= W or S[ii,jj] == '#' or chk[ii,jj] > 0:
        chk[ii][jj] = chk[i][j] + 1
        if mx < chk[ii][jj]:
          mx = chk[ii][jj]
        stack.append((ii,jj))
      
      if stack.len() > 0:
        i,j = stack.pop()
      else:
        break
      print(i,j,mx)
      



'''
chk = []
chk2 = []
stack = []
for i in range(H):
  chk.append([0 for a in range(W)])
  chk2.append([False for a in range(W)]
for i in range(H):
  for j in range(W):
    if S[i][j] == '#':
      continue
    # North
    px = i-1
    py = j
    if px < 0 or px >= H or py < 0 or py >= W or (chk2[px][py] == True) or S[px][py] == '#':
      continue
    chk[px][py] = chk[i][j] + 1
    chk2[px][py] = True
    stack.append((px,py))
    # East
    px = i
    py = j+1
    if px < 0 or px >= H or py < 0 or py >= W or (chk2[px][py] == True) or S[px][py] == '#':
      continue
    chk[px][py] = chk[i][j] + 1
    chk2[px][py] = True
    stack.append((px,py))
    # South
    px = i+1
    py = j
    if px < 0 or px >= H or py < 0 or py >= W or (chk2[px][py] == True) or S[px][py] == '#':
      continue
    chk[px][py] = chk[i][j] + 1
    chk2[px][py] = True
    stack.append((px,py))
    # West
    px = i
    py = j-1
    if px < 0 or px >= H or py < 0 or py >= W or (chk2[px][py] == True) or S[px][py] == '#':
      continue
    chk[px][py] = chk[i][j] + 1
    chk2[px][py] = True
    stack.append((px,py))
    '''