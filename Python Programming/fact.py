def fact(num):
    if(num>1):
        return num*fact(num-1)
    else:
        return 1

a=int(input("enter a number\t"))
print(f"the factorial of {a} is {fact(a)}")
