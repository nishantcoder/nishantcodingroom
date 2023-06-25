class cse:
    def __init__(self,num1):
        self.num1=num1
    def __mul__(self,num2):
        return self.num1*num2
    def __floordiv__(self,num2):
        return self.num1//num2
    def __lt__(self,num2):
        if(self.num1<num2):
            return True
        return False
    def __gt__(self,num2):
        if(self.num1>num2):
            return True
        return False

obj=cse(1091)
print(obj//97)
print(obj*97)
print(obj>97)
print(obj<97)
