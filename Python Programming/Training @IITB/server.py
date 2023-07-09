#craeting server program

import socket
s=socket.socket()
print("Socked Craeted")
port=12345
s.bind(('',port))
print('socket binded to %s'%(port))

s.listen(5) #putting socket into listening mode
print('Socket is listening')

while True:
    #establishing a connectionb with a client
    c,addr=s.accept()
    print("Got a connection with server ",addr) #ip of the client
    c.send(b'Thanks for conecting with Server')
    c.close()
