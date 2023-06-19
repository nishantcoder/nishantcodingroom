a=int(input("Enter the first number "))
b=int(input("Enter the second number "))
#using functions
def swap(a,b):
    temp=a
    a=b
    b=temp
    return a,b
a,b=swap(a,b)
print("x=",a,"\tb=",b)