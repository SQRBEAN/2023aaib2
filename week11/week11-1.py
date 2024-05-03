def isprime(n):
  for i in range(2,n):
    if n%i==0:return 0
  return 1

bound=500000
ans=0
for i in range(2,bound):
  if isprime(i):
    print(i,end=' ')
    ans+=1
print()
print("質數有",ans,"個")