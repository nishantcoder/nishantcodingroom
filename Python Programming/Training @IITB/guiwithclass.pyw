from tkinter import *
class app:
    def __init__(self):
        self.win=Tk()
        self.win.geometry('300x400')
        self.textlabel=Label(self.win,text="Num 1",fg="black")
        self.textlabel.place(x=15,y=15)
        self.textlabel=Label(self.win,text="Num 2",fg="black")
        self.textlabel.place(x=15,y=35)
        self.var=IntVar()
        self.val=IntVar()
        Entry(self.win,textvariable=self.var).place(x=65,y=15)
        Entry(self.win,textvariable=self.val).place(x=65,y=35)
        self.ret=Button(self.win,text="press me...",command=self.display)
        self.ret.place(x=65,y=95)
        

        self.win.mainloop()
        
    def display(self):
        self.sum=self.var.get()+self.val.get()
        self.textlabe=Label(self.win,text=self.sum,fg="black",font=11)
        self.textlabe.place(x=95,y=135)
        
    
    
if __name__=="__main__":
    runapp=app()
    
