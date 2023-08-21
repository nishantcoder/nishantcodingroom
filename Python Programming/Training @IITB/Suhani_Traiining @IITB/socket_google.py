import socket, sys  #importing modules


try:

    t=socket.socket(socket.AF_INET,socket.SOCK_STREAM)      #create a simple socket
    print("socket successfully created")
except socket.error as erro:
    print("socket failed with error %s" %(erro))

port=80
try:
    host_ip=socket.gethostbyname('www.google.com')
except socket.gaierror :
    print('there was an error resolving the host')
    sys.exit()

t.connect((host_ip,port))   #connecting to google
print("the socket has successfully connected to google on port == %s"%(host_ip))



