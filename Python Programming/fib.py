def fib(num):
    if(num==1):
        return 0
    if(num==2):
        return 1
    else:
        return fib(num-1)+fib(num-2)
    

r=int(input("enter a number"))

for i in range(1,r+1):
    print(fib(i))
