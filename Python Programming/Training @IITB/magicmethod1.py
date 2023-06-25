class message:
    def __init__(self,msg,age):
        self.msg=msg
        self.age=age
    def __repr__(self):
        return self.msg
    def __add__(self,other):
        return self.msg+other
    def __mul__(self,mul):
        return self.age*mul

obj=message("Nishant ",18)
print(f"The Name of student is {obj+'Raj'}")
print(f"The bonus is {obj*2500}")
