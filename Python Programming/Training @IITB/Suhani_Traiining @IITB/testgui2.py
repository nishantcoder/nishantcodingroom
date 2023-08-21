import tkinter
from tkinter import messagebox


window=tkinter.Tk() #initialize a window manager for you
window.title('GUI APPLICATION')
window.geometry("550x500")


#creating the radio buttons
def select():
    sele='you have selected: '+str(var1.get())
    label1.config(text=sele)
    
var1=tkinter.StringVar()
r1=tkinter.Radiobutton(window,text='Male',variable=var1,value='Male',command=select)
r2=tkinter.Radiobutton(window,text='Female',variable=var1,value='Female',command=select)


label1=tkinter.Label(window)
label1.pack()
r1.pack(anchor='w')
r2.pack(anchor='w')

window.mainloop()

















