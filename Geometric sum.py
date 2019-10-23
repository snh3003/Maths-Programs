#take the required number as an input
geo=int(input("Enter the number until which you want to find the geometric sum"))
#define a recursive function
def geometric_series(n):
  if n < 0:
    return 0
  else:
    return 1 / (pow(2, n)) + geometric_series(n - 1)
#call the function 
print(geometric_series(geo))