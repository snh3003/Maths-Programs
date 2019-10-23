def fib(n):
    if(n<=1):
      return n
    else:
        return fib(n-2)+fib(n-1)
n=int(input("enter number of terms you want:"))
print("the fibonacci series is:")
for i in range(n):
      print(fib(i))   
