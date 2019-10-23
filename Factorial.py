Factorial

def recur_func(n)
       if n==1
           return 1
       else
           return n*recur_func(n-1)
num = int(input(“value of n”))
if num<0
   print(“no factorial”)
elif num==0
       return 1
