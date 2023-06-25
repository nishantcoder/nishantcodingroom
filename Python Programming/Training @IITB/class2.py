class parent:
    '''This is the documentation for our demo class
    and will be used as a parent class
    class for our understanding '''
    _age=30          #class variable

    def __init__(self,name):
         self.name=name
         print("Parent Object Created.")

    def sayhello(self):
        print(f'The parent name is {self.name} and the age is {parent._age}')

class child(parent):    #inheritance 
    def __init__(selfc,age):
        selfc.age=age
        print("Child Object created")
        parent.__init__(selfc,'ashish')
    def childname(selfc):
        print(f"Name of  the parent is {selfc.name} and age is {selfc.age}")


obj=parent('Cosmic')            #object creation
objc=child(7)                   #child object creation
