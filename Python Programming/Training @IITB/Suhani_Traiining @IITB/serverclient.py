import socket               #creating a socket


s=socket.socket()                   


port=12345                           #setting port number
 

s.connect(('127.0.0.1',port))            #connecting


print(s.recv(1024))                 #recieving message



s.close()                          #close the connection

