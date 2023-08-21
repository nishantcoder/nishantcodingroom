import tkinter

root=tkinter.Tk()


def donothing():
    filwin=tkinter.Toplevel(root)
    button=tkinter.Button(filewin,text='Do nothing')
    button.pack()


root=tkinter.Tk()
root.title('Notepad')


    

menu=tkinter.Menu(root)
filemenu=tkinter.Menu(menu,tearoff=0)
filemenu.add_command(label='New',command=donothing)
filemenu.add_command(label='open',command=donothing)
filemenu.add_command(label='save',command=donothing)
filemenu.add_command(label='save as.....',command=donothing)
filemenu.add_command(label='close',command=donothing)
filemenu.add_separator()
filemenu.add_command(label='Exit',command=donothing)

menu.add_cascade(label='File',menu=filemenu)
editmenu=tkinter.Menu(menu,tearoff=0)
editmenu.add_command(label='undo',command=donothing)
editmenu.add_separator()
editmenu.add_command(label='cut',command=donothing)
editmenu.add_command(label='copy',command=donothing)
editmenu.add_command(label='paste',command=donothing)
editmenu.add_command(label='Delete',command=donothing)
editmenu.add_command(label='Select All',command=donothing)

menu.add_cascade(label='Edit',menu=editmenu)


helpmenu=tkinter.Menu(menu,tearoff=0)
helpmenu.add_command(label='help index', command=donothing)
helpmenu.add_command(label='About...', command=donothing)
helpmenu.add_command(label='Help', command=donothing)
menu.add_cascade(label='Help',menu=helpmenu)
root.config(menu=menu)


text=tkinter.Text(root)
text.insert('insert','Hello python')
text.pack()






root.mainloop()
