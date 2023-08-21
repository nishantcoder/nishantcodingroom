import socket

s=socket.socket()            #creating socket
print("socket created")

port=12345                #setting port number


s.bind(('',port))             #binding to a specific ip and port
print('socket binded to %s'%(port))


s.listen(5)                       #put socket into listening mode
print('socket is listening')

while True :

    #establish a connection with client
    c,addr=s.accept()
    print('Got connection from',addr)

    s.send("you have been connected successfully")      #send a message to client



    s.close()    #close the connection with the client
