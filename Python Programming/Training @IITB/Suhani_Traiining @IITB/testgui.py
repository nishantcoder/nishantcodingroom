import tkinter
from tkinter import messagebox


window=tkinter.Tk() #initialize a window manager for you
window.title('GUI APPLICATION')
window.geometry("700x650")

#creating a label
lab=tkinter.Label(window,bg='pink',fg='blue',text='hello gui,how was your experience?')
lab.pack()

#creating a function for your button
def hello():
    msg=messagebox.showinfo('Hello python','hello gaurav') #here first one is title for the new window and the second one is msg
button=tkinter.Button(window,text='open!!!',command=hello)  #button being called from inside the tkinter
button.place(x=50,y=50)
 #creating a canvas and adding different shapes to it

canvas=tkinter.Canvas(window,height=150,width=250,bg='green')
line=canvas.create_line(25,45,500,600,fill='#12ABF7',width=3)

coord=80,100,200,50
arc=canvas.create_arc(coord,start=0,extent=500,fill="yellow")
canvas.pack()

#creating the checkbuttons
c1=tkinter.IntVar()
c2=tkinter.IntVar()
chk1=tkinter.Checkbutton(window,text='moneyheist',variable=c1,onvalue=1,offvalue=0,height=10,width=20).pack()
chk2=tkinter.Checkbutton(window,text='wednesday',variable=c1,onvalue=1,offvalue=0,height=10,width=20).pack()

#creating an entry
entry=tkinter.Entry(window,bd=2).pack(side='left')

#creating a listbox
list1=tkinter.Listbox(window,fg='red',selectmode='EX',font='tahoma')
list1.insert(1,'cosmic')
list1.insert(2,'skills')
list1.insert(3,'success')
list1.insert(4,'honesty')
list1.insert(5,'faithful')
list1.pack()

#creating a message method
mari=tkinter.StringVar()
tax=tkinter.Message(window,textvariable=mari,relief='solid')
mari.set('Hello python,why are you so confused')
tax.pack()



















window.mainloop()
