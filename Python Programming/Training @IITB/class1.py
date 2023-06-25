#1. Class creation
#2. Inheritace of class
#3. data hiding 


class parent:
    'This is my first Training Class'
    _age=30 #class variable i.e inside a class and outside a method
    '''(_) hides the data from aceesing it'''
    def __init__(self,name):            #this is a method
        #name is a variable
        #self is a paramter is to tell interpreter to deal with your current object
        self.name=name
        print('Parent Object craeted.')
    
    def sayhello(self):
        print(f'The parent name is {self.name} and the age is {parent._age}') #aceesing hidden data to the parent class

    

obj=parent('cosmic')            #object  creation
'''print(obj.age,obj.name,obj.sayhello())
del parent
print(obj.age)'''

class child(parent):            #inheritance of class
    #it will inheriet the properties of parent class to child class
    def __init__(chill, age):
        chill.age=age
        print("Child class created")
        parent.__init__(chill,'Alex')
    
    def childname(chill):
        print(f'Age of  child is {chill.age}, and the parent name is {chill.name}.')

objc=child(5)
print(objc.childname())
print(obj._age,obj.sayhello())

'''
Aplliactions
1. Client - server systems
2. Objects oriented databases
3. Simulation And Modeeling System
4. Neural networing and paraellel programming 
5. AI Expert systems
'''

'''
SUMMARY
1. Basic Introduction to classes and objects 
2. Overview of OOP terminology
3. Syntax for creating classes and objects,inheritance and data hiding 
4. Understanding the concepts and working of all the expalined terminologies
'''

'''
class                   Object
class variable          data members
Instance                instantiation
Functon overloading     Instance varaible
Inheritance             Method
Operator overloading    
'''