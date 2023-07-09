import pymysql
database=pymysql.connect(host='localhost',port=3306,user='root',passwd='root',db='pythondb') #open database connection

#prepare a cursor object
cursor=database.cursor()
sqli="insert into testpy (name) values('Jiya');"
sqlu="update testpy set name='Nishant Raj' where id=22401;"
sql="drop database pythondb;"
try:
    cursor.execute(sql)
    database.commit() #ensures that command is ececuted successfully
    print("Changes committed successfully")
except:
    database.rollback()
    print("Changes committed unsuccessfully")
  #in case of any failure take you to previous state  

database.close()
