import tkinter

root=tkinter.Tk()
root.title('GUI')
root.geometry('600x500')

def getvalue():
    scale1='value: '+str(var.get())
    label.config(text=scale1)
    
#get scale value    
var=tkinter.DoubleVar()
scale=tkinter.Scale(root,variable=var)
scale.pack()
button=tkinter.Button(root,text='Get scale value',command=getvalue)
button.pack(anchor='w')
label=tkinter.Label(root)
label.pack()

#creating the scrollbar
scrollbar=tkinter.Scrollbar(root)
scrollbar.pack(side='right',fill='y')

mylist=tkinter.Listbox(root,yscrollcommand=scrollbar.set)
for line in range(100):
    mylist.insert('end','This is line number '+str(line))
mylist.pack(side='left',fill='both')
scrollbar.config(command=mylist.yview)

  #creating a spin box
spin=tkinter.Spinbox(root,from_=0,to=100)
spin.pack()

labelframe=tkinter.LabelFrame(root,text='This is a LabelFrame')
labelframe.pack(fill='both',expand='yes')

lab=tkinter.Label(labelframe,text='inside the LabelFrame')
lab.pack()

top=tkinter.Tk()
text=tkinter.Text(top)
text.insert('insert','Hello python')
text.pack()
top.mainloop()
root.mainloop()









