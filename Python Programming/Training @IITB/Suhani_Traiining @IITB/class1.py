class parent:
    '''THis is my first introduction to class an objects'''
    _name='suhani'                   #class variable
    def __init__(self,age,id_):         #method
        self.age=age
        self.id_=id_
        print("Object created")
    def sayhello(self):
        print(f'the parent name is {parent._name} and age is {self.age} and id is {self.id_}')

class child(parent):
    def __init__(selfc,agec):
        selfc.agec=agec
        print("child class created")
        parent.__init__(selfc,19,22105128040)
        

        def childname(selfc):
            print(f'the parent is {selfc._name} and the age of child is {selfc.agec}')
        
    

if __name__=='__main__':
    objc=child(7)
    obj=parent(18,22105128050)
    #print(obj.sayhello())

