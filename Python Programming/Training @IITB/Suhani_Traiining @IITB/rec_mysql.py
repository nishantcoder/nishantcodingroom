import pymysql
#open database connection
database=pymysql.connect(host='localhost',port=3306,user='root',passwd='root',db='pythonds')

#prepare a cursor object using the cursor() method
cursor=database.cursor()

sql="drop database pythonds;"

try:
    cursor.execute(sql)
    database.commit()       #commit the changes in database
except:
    database.rollback()     #rollback in case of failure
database.close()            #disconnect from server

