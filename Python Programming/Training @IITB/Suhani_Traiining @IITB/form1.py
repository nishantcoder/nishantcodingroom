#!C:\Program Files\Python310\python.exe
import cgi 
form=cgi.FieldStorage()
first_name=form.getvalue('first_name')
last_name=form.getvalue('last_name')
if(form.getvalue('Dairymilk')):
    Vick="Dairymilk"
else:
    Vick=""
if(form.getvalue('Kitkat')):
    Mah="Kitkat" 
else:
    Mah=""  


file=open('data.txt','a+')
file.write(f"{first_name} {last_name} likes {Vick} {Mah} \n")


print("content-type:text/html\r\n\r\n")
print('<html>')
print('<head>')
print('<title>hello world</title>')
print('</head>')
print('<body bgcolor="#CC00CC">' )
print('<center>')
print('<h2>Survey Form</h2>')
print('<form action="/cgi-bin/form1.py" method="post" target=" _blank">')
print('First Name : <input type="text" name="first_name"><br />')
print('<br>')
print('Last Name:  <input type="text" name="last_name"><br />')



print('<h3>Your Favourite Chocolate:</h3>')
print('<input type= "checkbox"  name="Dairymilk" Value="on" /> Dairymilk')
print('<input type= "checkbox"  name="Kitkat"  Value="on" /> Kitkat')
print('<br>')
print('<h2>Hello %s  %s</h2>' % (first_name,last_name))
print('<h2>You Like: %s  %s</h2>'% (Vick,Mah))

print('<input type="submit" value="submit"/>')
print('</form>')
print('</body>')
print('</html>')


