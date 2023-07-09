#sending emails

import smtplib
content='This is a test email from Nishant'
mail=smtplib.SMTP('smtp.gmail.com',587)
#body='\r\n'.join([To:%s'%'nishantofficial2019@gmail.com','From:%s' %'nishantonline77@gmail.com','Subject:%s'%"Test mail",content])


mail.ehlo()
mail.starttls()
try:
    mail.login('nishant.11318@gmail.com','Nishant2004@@')
except:
    print("can't login at this time")


try:
    mail.sendmail('nishant.11318@kvsropatna.in','nishantofficial2019@gmail.com',content) #send your message
    print('message sent')
except:
    print('Error occured')

mail.close()
