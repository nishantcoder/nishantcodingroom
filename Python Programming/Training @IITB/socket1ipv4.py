#socket programming using the IPV6

import socket,sys

try:
    '142.251.42.36'
    s=socket.socket(socket.AF_INET,socket.SOCK_STREAM) #craeting socket
    print("Socket Created succesfully")
except socket.error as er:
    print("Socket failed with %s"%(err))

try:
    host_ip=socket.gethostbyname('www.google.com')
except socket.gaierror:
    print("There was an error resolving the host")
    sys.exit()
port=80
s.connect((host_ip,port)) #connecting the ip (ipv4) using the port
#connecting to google
print("The socket has been succesfully connected to google using the host == %s"%(host_ip))
