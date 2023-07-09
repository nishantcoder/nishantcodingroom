#socket programming using the IPV6

import socket,sys

try:
    s=socket.socket(socket.AF_INET6,socket.SOCK_STREAM) #craeting socket
    print("Socket Created succesfully")
except socket.error as er:
    print("Socket failed with %s"%(err))

try:
    host_ip=socket.gethostbyaddr('www.google.com')
except socket.timeout :
    print("There was an error resolving the host")
    sys.exit()
port=80
s.connect((host_ip,port)) #connecting the ip (ipv6) using the port
#connecting to google
print("The socket has been succesfully connected to google using the host == %s"%(host_ip))
