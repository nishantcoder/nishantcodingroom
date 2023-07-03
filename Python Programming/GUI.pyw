import tkinter as tk
root=tk.Tk()

root.geometry("600x400")  #responsible for measurements
root.maxsize(600,400)
root.minsize(600,400)
root.title(' RESISTANCE CALCULATOR')
r1var=tk.DoubleVar()
r2var=tk.DoubleVar()
rbvar=tk.StringVar()
r1var.set("")
r2var.set("")
r3Label=tk.Label(root,text="choose connection",fg="#660066")
r3Label.grid(row=3,column=0,padx=5,pady=5)
r3entrys=tk.Radiobutton(root,variable=rbvar,value="series",text="series",fg="#3333ff")
r3entryp=tk.Radiobutton(root,variable=rbvar,value="parallel",text="parallel",fg="#3333ff")
r3entrys.grid(row=3,column=1,padx=5,pady=5)
r3entryp.grid(row=3,column=2,padx=3,pady=5)

def Calculate():
  a=float(r1var.get())
  b=float(r2var.get())
  mode=rbvar.get()
  
  

  
  if(mode=="series"):
    

    rseries= a+b
    lb.config(text=f'The Equiavlent Series Resistance of {a} and {b} is {rseries} Ohm.')
    

  if(mode=="parallel"):
    
    rparallel=float(a*b)/(a+b)
    lb.config(text=f'The Equiavlent Parallel Resistance of {a} and {b} is {rparallel} Ohm.')
    r1var.set("")
    r2var.set("")


fr=tk.Frame(root)
fr.place(x=20,y=220)
lb=tk.Label(fr)
lb.grid(row=8,column=0,padx=5,pady=5)











r1label=tk.Label(root,text=" Value of reistance1",fg="#0000ff")
r2label=tk.Label(root,text=" Value of reistance2",fg="#0000ff")
r1Entry=tk.Entry(root,textvariable=r1var)
r2Entry=tk.Entry(root,textvariable=r2var)
btn=tk.Button(root,text="calculate",command= Calculate)
r1label.grid(row=0,column=0,padx=10,pady=10)
r2label.grid(row=1,column=0,padx=10,pady=10)
r1Entry.grid(row=0,column=1,padx=10,pady=10)
r2Entry.grid(row=1,column=1,padx=10,pady=10)
btn.grid(row=4,column=1,padx=10,pady=10)






root.mainloop()





