def gcd(a,b):
  if a==0:return b
  if b==0: return a
  return gcd(b,a%b)
a=int(input("請輸入:"))
b=int(input("請輸入:"))
print('最大公因數:',gcd(a,b))