N = int(input("請輸入n:"))

def func(n):
  if n==1:return 1 #終止條件
  return n *func(n-1)
ans= func(N)
print(ans)  
