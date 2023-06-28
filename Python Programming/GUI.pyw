import tkinter as tk
root=tk.Tk()

root.geometry("600x400")  #responsible for measurements
root.maxsize(600,400)
root.minsize(600,400)
root.title('parallel resistance calculator')
r1var=tk.DoubleVar()
rbvar=tk.StringVar()
r3Label=tk.Label(root,text="choose connection")
r3Label.grid(row=6,column=0,padx=5,pady=5)
r3entrys=tk.Radiobutton(root,variable=rbvar,value="series",text="series")
r3entryp=tk.Radiobutton(root,variable=rbvar,value="parallel",text="parallel")
r3entrys.grid(row=3,column=1,padx=5,pady=5)
r3entryp.grid(row=3,column=2,padx=5,pady=5)

def Calculate():
  a=float(r1var.get())
  b=float(r2var.get())
  mode=rbvar.get()
  print('mode')

  
  if(mode=="series"):
    lb.destroy()

    rseries= a+b
    lb=tk.Label(root,text=f'the equiavlent series resistance of {a} and {b} is {rseries} ohm.')
    r1var.set("")
    r2var.set("")

  if(mode=="parallel"):
    lb.destroy()
    rparallel=float(a*b)/(a+b)
    lb=tk.Label(root,text=f'the equiavlent parallel resistance of {a} and {b} is {rparallel} ohm.')
    r1var.set("")
    r2var.set("")

  lb.grid(row=8,column=0,padx=5,pady=5)





r2var=tk.DoubleVar()







r1label=tk.Label(root,text=" Val of reistance1",fg="#0000ff")
r2label=tk.Label(root,text=" Val of reistance2",fg="#0000ff")
r1Entry=tk.Entry(root,textvariable=r1var)
r2Entry=tk.Entry(root,textvariable=r2var)
btn=tk.Button(root,text="calculate",command= Calculate)
r1label.grid(row=0,column=0,padx=10,pady=10)
r2label.grid(row=1,column=0,padx=10,pady=10)
r1Entry.grid(row=0,column=1,padx=10,pady=10)
r2Entry.grid(row=1,column=1,padx=10,pady=10)
btn.grid(row=4,column=1,padx=10,pady=10)






root.mainloop()





