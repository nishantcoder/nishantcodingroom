from tkinter import *
from tkinter import messagebox as ms
from tkinter import ttk
from datetime import datetime
from time import strftime


import sqlite3
mydb=sqlite3.connect("library.db")
mycursor=mydb.cursor()


def create_table_student():
    sql="create table student(name text not null,roll text primary key,branch text not null)"
    mycursor.execute(sql)

def create_table_book():
    sql="create table book(isbn text primary key,book_no not null,book_count integer)"

    mycursor.execute(sql)

def create_table_issue():
    sql="create table issue(roll text not null,date_time text not null,book_no text not null)"
    mycursor.execute(sql)

def create_table_return():
    sql="create table return(roll text not null,return_date_time text not null,book_no text not null)"
    mycursor.execute(sql)


data=mycursor.execute("select name from sqlite_master where type='table'")
get_data=data.fetchall()
check=0
exist=0
for check in get_data:
    if (check[0]=='student'):
        exist=1
if(exist==0):
  create_table_student()

checkb=0
existb=0

for checkb in get_data:
    if (checkb[0]=='book'):
        existb=1
if(existb==0):
  create_table_book()


checki=0
existi=0

for checki in get_data:
    if (checki[0]=='issue'):
        existi=1
if(existi==0):
  create_table_issue()


checkr=0
existr=0

for checkr in get_data:
    if (checkr[0]=='return'):
        existr=1
if(existr==0):
  create_table_return()


def login():
    root=Tk()
    root.geometry("1520x1080")
    root.minsize(1520,1080)
    root.maxsize(1520,1080)
    root.title("Login")
    root.iconbitmap("lib1.ico")
    bg=PhotoImage(file="back.png")
    Label(root,image=bg).place(x=0,y=0)
    logi=PhotoImage(file="login.png")
    Label(root,image=logi,bd=0).place(x=450,y=75)

    def pasd():
        c=usr.get()
        d=pas.get()

        if(a==c and b==d):
            cmd=ms.showinfo("success","you have successfully logined")
            root.destroy()
            main()
        else:
            cmd=ms.showerror("Failed !","check your credentials")
            usr.set("")
            pas.set("")

    f1=open("user.txt","r")
    f2=open("pass.txt","r")
    a=f1.readline()
    b=f2.readline()
    print(a)
    print(b)
    
    usr=StringVar()
    pas=StringVar()
    Entry(root,textvariable=usr,width=20,font=14,bg="#160f30",fg="white",bd=0).place(x=652,y=360)
    Entry(root,textvariable=pas,width=20,font=14,bg="#160f30",fg="white",bd=0,show="●").place(x=652,y=448)
    Button(root,text="Login",command=pasd,bg="#f38f5e",font=("calibari",14,"bold"),bd=0,fg="white").place(x=750,y=534)

    root.mainloop()

def main():
    root=Tk()
    root.title("Library Management Application")
    root.geometry('1520x1080')
    root.minsize(1520,1080)
    root.maxsize(1520,1080)
    root.iconbitmap("lib1.ico")
    root.configure(bg='#ffe6cc')
    icon=PhotoImage(file="ico3.png")
    Label(root,image=icon).place(x=50,y=0)


    title_frame=Frame(root,height=75,width=1200,relief=RAISED,bd=5,bg="#b30086").place(x=160,y=5)
    Label(title_frame,text="Library Management Application",font=('Tektur',25,'bold'),bg="#b30086").place(x=500,y=15)
    Timeframe=Frame(root,bg='#ffe6cc').place(x=1200,y=5)   
    time_label=Label(Timeframe,fg="blue",font=("calibari",14,"bold"),bg="#ffe6cc")
    time_label.place(x=1380,y=10)
    def time():
        string = strftime("%d %B %Y \n%H:%M:%S %p")
        time_label.config(text=string)
        time_label.after(1000,time)

    time()

    


    mainframe=Frame(root,height=800,width=1000,bg='#ffe6cc').place(x=260,y=120)

    def add_std():
        add_f=Frame(mainframe,width=1000,height=800,bg='#ffe6cc').place(x=300,y=150)
        Label(add_f,text="New Student",font=('calibari',30,'bold','underline'),bg='#ffe6cc').place(x=600,y=150)
        Label(add_f,text="Name:",font=('calibari',15,'bold','underline'),bg='#ffe6cc').place(x=300,y=250)
        Label(add_f,text="Roll No. :",font=('calibari',15,'bold','underline'),bg='#ffe6cc').place(x=300,y=300)
        Label(add_f,text="Branch:",font=('calibari',15,'bold','underline'),bg='#ffe6cc').place(x=300,y=350)

        def a_ok():
            a=n_var.get()
            b=v_var.get()
            c=r_var.get()
            try:
                sql="INSERT into student(name,roll,branch) values(?,?,?)"
                data=(a,b,c)
                mycursor.execute(sql,data)
                mydb.commit()
                Label(add_f,text=f"Successfully added to library",font=14,fg="green").place(x=300,y=500)

            except:
                mydb.rollback()
                Label(add_f,text=f"Student already exists to database",fg="red",font=15).place(x=300,y=500)
            

        n_var=StringVar()
        v_var=StringVar()
        r_var=StringVar()
        r_var.set("Select")

        dict={'CSE':'1','EEE':'2','CIVIL':'3','MECH':'4','CSE AI ML':'5','CWCA':'6','3DAG':'7'}
        Entry(add_f,textvariable=n_var,font=15,width=25).place(x=550,y=250)
        Entry(add_f,textvariable=v_var,font=15,width=25).place(x=550,y=300)
        OptionMenu(add_f,r_var,*dict).place(x=550,y=350)
        Button(add_f,text="submit",command=a_ok,font=14).place(x=700,y=400)
              
    def rem_std():
        rem_f=Frame(mainframe,width=1000,height=800,bg='#ffe6cc').place(x=300,y=150)
        Label(rem_f,text="Remove Student",font=('calibari',30,'bold','underline'),bg='#ffe6cc').place(x=600,y=150)
        #Label(add_f,text="",font=('calibari',15,'bold','underline'),bg='#ffe6cc').place(x=300,y=250)
        Label(rem_f,text="Roll No. :",font=('calibari',15,'bold','underline'),bg='#ffe6cc').place(x=300,y=300)
        #Label(add_f,text="Branch:",font=('calibari',15,'bold','underline'),bg='#ffe6cc').place(x=300,y=350)

        def a_ok():
            
            b=v_var.get()
            sqlcheckroll=f"select roll from student where roll={b}"
            query=mycursor.execute(sqlcheckroll)
            check_roll=0
            exist_roll=0
            get_roll=query.fetchall()
            
            for check_roll in get_roll:
                if(check_roll[0]==b):
                    exist_roll=1
            if (exist_roll==1):            
                try:
                    sql=f"delete from student where roll={b}"
                
                    mycursor.execute(sql)
                    mydb.commit()
                    
                    Label(rem_f,text=f"Successfully removed roll no {b} from library",font=15,fg="green").place(x=300,y=500)

                except:
                    mydb.rollback()
                    Label(rem_f,text=f"Could not perform changes at this time in the database",fg="red",font=15).place(x=300,y=500)
                    
            
            else:
                Label(rem_f,text=f"Could not found roll no {b} in the database",fg="red",font=15).place(x=300,y=500)

            


        v_var=StringVar()
        
  
        Entry(rem_f,textvariable=v_var,font=15,width=25).place(x=550,y=300)

        Button(rem_f,text="Remove",command=a_ok,font=14).place(x=700,y=400)
              
    def issue():
        issue_frame=Frame(mainframe,width=1000,height=800,bg='#ffe6cc').place(x=300,y=150) 
        Label(issue_frame,text="Issue Book",bg="#ffe6cc",font=('calibari',30,'bold','underline')).place(x=600,y=150)
        Label(issue_frame,text="RollNo.",bg="#ffe6cc",font=14).place(x=400,y=300)
        Label(issue_frame,text="Book No.",bg="#ffe6cc",font=14).place(x=400,y=350)
        

        def i_ok():
            a=p_var.get()
            b=b_var.get()
            query=mycursor.execute(f"select roll from student where roll='{a}'")
            get_roll=query.fetchall()
            check_roll=0
            exist_roll=0
            string = strftime("%d %B %Y \n%H:%M:%S %p")
            for check_roll in get_roll:
                if (check_roll[0]==a):
                    exist_roll=1
            if(exist_roll==0):
                Label(issue_frame,text=f"Roll.{a} doesn't exist",fg="red",font=14).place(x=350,y=450)
            if (exist_roll==1):
                try:
                    sql="Insert into issue(roll,date_time,book_no) values(?,?,?)"
                    data=(a,string,b)
                    mycursor.execute(sql,data)
                    mydb.commit()
                    Label(issue_frame,text=f"Book no {b} issued to Roll.{a} at {string} ",fg="green",font=14,width=100).place(x=350,y=450)
                except:
                    Label(issue_frame,text=f"could not issue at this time ",fg="red",font=14).place(x=350,y=450)

        p_var=StringVar()
        b_var=StringVar()
        Entry(issue_frame,textvariable=p_var,width=25,font=14).place(x=600,y=300)
        Entry(issue_frame,textvariable=b_var,width=25,font=14).place(x=600,y=350)
        Button(issue_frame,text="Issue",font=14,command=i_ok).place(x=600,y=400)


    def retur():
        issue_frame=Frame(mainframe,width=1000,height=800,bg='#ffe6cc').place(x=300,y=150) 
        Label(issue_frame,text="Return Book",bg="#ffe6cc",font=('calibari',30,'bold','underline')).place(x=600,y=150)
        Label(issue_frame,text="Roll No.",bg="#ffe6cc",font=14).place(x=400,y=300)
        Label(issue_frame,text="Book No.",bg="#ffe6cc",font=14).place(x=400,y=350)



        

        def i_ok():
            a=p_var.get()
            b=b_var.get()
            

            query=mycursor.execute(f"select roll from issue where roll='{a}'")
            get_roll=query.fetchall()
            check_roll=0
            exist_roll=0
            
            for check_roll in get_roll:
                if (check_roll[0]==a):
                    exist_roll=1
            if(exist_roll==0):
                Label(issue_frame,text=f"Roll.{a} doesn't exist",fg="red",font=14).place(x=350,y=450)

            query=mycursor.execute(f"select book_no from issue where book_no='{b}'")
            get_bno=query.fetchall()
            check_bno=0
            exist_bno=0
            
            for check_bno in get_bno:
                if (check_bno[0]==b):
                    exist_bno=1
            if(exist_bno==0):
                Label(issue_frame,text=f"Roll.{a} has not been issued book no {b}",fg="orange",font=14).place(x=350,y=450)

            if (exist_roll==1 and exist_bno==1):
               
                    
             if(exist_roll==1 and exist_bno==1):
                try:
                    sql=f"delete from issue where roll='{a}' and book_no='{b}'"
                    mycursor.execute(sql)
                    mydb.commit()

                    string = strftime("%d %B %Y \n%H:%M:%S %p")

                    sqlr="Insert into return(roll,return_date_time,book_no) values(?,?,?)"
                    datar=(a,string,b)
                    mycursor.execute(sqlr,datar)
                    mydb.commit()
                    Label(issue_frame,text=f"Book no {b} Returned succesfully by roll no {a} ",fg="green",font=14,width=80).place(x=350,y=450)
                except:
                    mydb.rollback()
                    Label(issue_frame,text=f"could not return at this time ",fg="red",font=14).place(x=350,y=450)


        p_var=StringVar()
        b_var=StringVar()
        Entry(issue_frame,textvariable=p_var,width=25,font=14).place(x=600,y=300)
        Entry(issue_frame,textvariable=b_var,width=25,font=14).place(x=600,y=350)
        Button(issue_frame,text="return",font=14,command=i_ok).place(x=600,y=400)
       

    def add_book():
        add_fb=Frame(mainframe,width=1000,height=800,bg='#ffe6cc').place(x=300,y=150)
        Label(add_fb,text="Add Book To Library",bg="#ffe6cc",font=("calibari",30,"bold","underline")).place(x=600,y=170)
        Label(add_fb,text="ISBN NO.",bg="#ffe6cc",font=14).place(x=400,y=250)
        Label(add_fb,text="Book No.",bg="#ffe6cc",font=14).place(x=400,y=300)
        Label(add_fb,text="Book Count.",bg="#ffe6cc",font=14).place(x=400,y=350)

        def add_ok():
            a=ivar.get()
            b=bvar.get()
            c=cvar.get()
            try:
                sql="INSERT into book(isbn,book_no,book_count) values(?,?,?)"
                data=(a,b,c)
                mycursor.execute(sql,data)
                mydb.commit()
                Label(add_fb,text=f"Book ISBN {a} issued book no range {b} Successfully added to library with total count {c}",font=14,fg="green").place(x=300,y=500)

            except:
                mydb.rollback()
                Label(add_fb,text=f"Could not add data to database",fg="red",font=14).place(x=300,y=500)
            

        ivar=StringVar()
        bvar=StringVar()
        cvar=IntVar()


        Entry(add_fb,textvariable=ivar,font=14,width=25).place(x=550,y=250)
        Entry(add_fb,textvariable=bvar,font=14,width=25).place(x=550,y=300)
        Spinbox(add_fb,textvariable=cvar,font=14,width=25,from_=1, to=60).place(x=550,y=350)
        Button(add_fb,text="Add book",font=14,command=add_ok).place(x=350,y=400)

    def rmv_book():
        rmv_fb=Frame(mainframe,width=1000,height=800,bg='#ffe6cc').place(x=300,y=150)
        Label(rmv_fb,text="Remove Book from Library",bg="#ffe6cc",font=("calibari",30,"bold","underline")).place(x=600,y=170)
        
        Label(rmv_fb,text="Book No.",bg="#ffe6cc",font=14).place(x=400,y=300)
        

        def rmv_ok():
            
            b=bvar.get()
            '''Label(rmv_fb,text=f"Successfully removed from library",font=14,fg="red").place(x=300,y=500)'''
            try:
                sql=f"Delete from book where isbn={b}"
            
                mycursor.execute(sql)
                
                Label(rmv_fb,text=f"Successfully removed ISBN {b} from library",font=15,fg="green").place(x=300,y=500)

            except:
                mydb.rollback()
                Label(rmv_fb,text=f"Could not found ISBN {b} in the database",fg="red",font=15).place(x=300,y=500)

            


 
        bvar=StringVar()

        


        
        Entry(rmv_fb,textvariable=bvar,font=14,width=25).place(x=550,y=300)
        Button(rmv_fb,text="Remove book",font=14,command=rmv_ok).place(x=350,y=400)

        


    buttonframe=Frame(root,height=50,width=1500,relief=FLAT,bd=5,bg="#b30086").place(x=10,y=85)
    Button(buttonframe,text="Add student",bg="#b30086",fg="white",font=14,command=add_std,bd=0,activebackground="#b30086",activeforeground="black").place(x=30,y=90)
    Button(buttonframe,text="Remove student",bg="#b30086",fg="white",font=14,command=rem_std,bd=0,activebackground="#b30086",activeforeground="black").place(x=230,y=90)
    Button(buttonframe,text="Add Book",bg="#b30086",fg="white",font=14,command=add_book,bd=0,activebackground="#b30086",activeforeground="black").place(x=530,y=90)
    Button(buttonframe,text="Remove Book",bg="#b30086",fg="white",font=14,command=rmv_book,bd=0,activebackground="#b30086",activeforeground="black").place(x=830,y=90)
    Button(buttonframe,text="Issue",bg="#b30086",fg="white",font=14,command=issue,bd=0,activebackground="#b30086",activeforeground="black").place(x=1130,y=90)
    Button(buttonframe,text="Return",bg="#b30086",fg="white",font=14,command=retur,bd=0,activebackground="#b30086",activeforeground="black").place(x=1330,y=90)

    #mainframe=Frame(root,height=700,width=1300,bg='#ffe6cc').place(x=110,y=150)

    
    



    root.mainloop()



if __name__=="__main__":
    login()
