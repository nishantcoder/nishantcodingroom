import pyttsx3
text_speech=pyttsx3.init()
import time
print("+-------------------------------Login System---------------------------------+")
text_speech.say("Enter Your Username ")
text_speech.runAndWait()
username=input("\t\tEnter Username :\t")
text_speech.say("Enter Your Password")
text_speech.runAndWait()
password=input("\t\tEnter Password :\t")
if (username=="admin") and (password=="Electron"):
    time.sleep(0.2)
    print("Checking Login details...")
    time.sleep(0.3)
    text_speech.say("Access Granted")
    print("Access Granted...")
    text_speech.runAndWait()
    from datetime import datetime

    # datetime object containing current date and time
    now = datetime.now()
# dd/mm/YY H:M:S
    time.sleep(0.2)
    print("Loading...")
    dt_string = now.strftime("%d/%m/%Y %H:%M:%S")
    time.sleep(1.1)
    print(dt_string)
    print("Getting the Targeted File...")
    time.sleep(2.1)
    print("Opening The main file...")
    time.sleep(1.8)
    import datetime
    currentTime = datetime.datetime.now()
    currentTime.hour
    time.sleep(1.2)
    text_speech.say("Activating Aditi System...")
    text_speech.runAndWait()
    def wishme():
        if currentTime.hour < 12:
            text_speech.say("Good Morning Boss! , I'm Aditi. How Can I help In Problems of Rotational Spectroscopy")
            text_speech.runAndWait()
        elif 12 <= currentTime.hour < 18:
            text_speech.say("Good Afternoon Boss! , I'm Aditi. How Can I help In Problems of Rotational Spectroscopy")
            text_speech.runAndWait()
        else:
            text_speech.say("Good Evening Boss! , I'm Aditi. How Can I help In Problems of Rotational Spectroscopy")
            text_speech.runAndWait()
    time.sleep(1.6)
    print("\t\t\t   +--------------------------------------------------------------------------------------------------+")
    print("\t\t\t   |                               ADITI - The Future Of Innovation                                   |")
    print("\t\t\t   +--------------------------------------------------------------------------------------------------+\n")
    wishme()
#text_speech.say("Hello Everyone, I'm Aditi. Aditi - The Future Of Innovation")
#text_speech.runAndWait()
    print("\t\t\t   +--------------------------------------------------------------------------------------------------+")
    print("\t\t\t   |              ROTATIONAL SPECTROSCOPY        |       MICROWAVE SPECTROSCOPY                       |")
    print("\t\t\t   +--------------------------------------------------------------------------------------------------+\n\n")
    time.sleep(1.2)
    print("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n")
    h=6.626E-34
    c=2.997E+8
    NA=6.023E+23
    B=2.8E-44
    k=5.57E-69
    text_speech.say("Enter the Name Of  Given Molecule")
    text_speech.runAndWait()
    mol_name=input("Enter The Name Of A Given Molecule : \t")
    print("...>\n1.\tTo Calculate The Rotational Energy Of ",mol_name," A Molecule.\n")
    print("2.\tTo Calculate The Transitional Frequency Of ",mol_name," A Molecule.\n")
    print("3.\tTo Calculate The Transitional Wavenumber Of ",mol_name," A Molecule.\n")
    print("4.\tTo Calculate The Transitional Wavelength Of ",mol_name," A Molecule.\n")
    print("5.\tTo Calculate The Bond Length Of ",mol_name," A Molecule.\n")
    print("0. To Shut Down The Program")
    while True:
        text_speech.say("Enter your Choice Number Given Front of Above Operations")
        text_speech.runAndWait()
        usr_input=int(input("Enter Your Choice \t : "))
        if (usr_input==1):
            #mol_name_()
            text_speech.say("Enter the Mass of first atom of Molecule")
            text_speech.runAndWait()
            print("Enter the mass of First atom of ",mol_name,"  Molecule.\t")
            m1=float(input("...>"))
            text_speech.say("Enter the Mass Of Second Atom Of Molecule")
            text_speech.runAndWait()
            print("Enter the mass of Second atom of ",mol_name,"  Molecule.\t")
            m2=float(input("...>"))
            u=(m1*m2*1E-3)/(NA*(m1+m2))
            print("\tReduced mass Of The ",mol_name,"Molecule is  ",u,"Kg/atom .")
            text_speech.say("Enter the Value For Bond length of Given Molecule")
            text_speech.runAndWait()
            r=float(input("Enter The Bond length (in Angstrom) : \t"))
            text_speech.say("Enter the Value For Rotational Quantum Number")
            text_speech.runAndWait()
            J=int(input("Enter the Rotational Quantum Number : \t"))
            moi=u*r*r*1E-20
            Energy=(k*J*(J+1))/moi
            text_speech.say("I have Calculated The Rotational Energy for the given Molecule")
            text_speech.runAndWait()
            print("Rotational Energy Of ",mol_name,"Molecule",Energy," Joules .")
        elif (usr_input==2):
            #mol_name_()
            text_speech.say("Enter the Mass of first atom of Molecule")
            text_speech.runAndWait()
            print("Enter the mass of First atom of ",mol_name,"  Molecule.\t")
            m1=float(input("...>"))
            text_speech.say("Enter the Mass Of Second Atom Of Molecule")
            text_speech.runAndWait()
            print("Enter the mass of Second atom of ",mol_name,"  Molecule.\t")
            m2=float(input("...>"))
            u=(m1*m2*1E-3)/(NA*(m1+m2))
            print("\tReduced mass Of The ",mol_name,"Molecule is  ",u,"Kg/atom .")
            text_speech.say("Enter the Value For Bond length of Given Molecule")
            text_speech.runAndWait()
            r=float(input("Enter The Bond length (in Angstrom) : \t"))
            text_speech.say("Enter the Value For Rotational Quantum Number")
            text_speech.runAndWait()
            J=int(input("Enter the Rotational Quantum Number : \t"))
            moi=u*r*r*1E-20
            frequency=(B*c*J*(J+1))/moi
            text_speech.say("I have Calculated The transitional frequency for the given Molecule")
            text_speech.runAndWait()
            print("Transitional Frequency ",mol_name,"Molecule",frequency," Hz .")
        elif (usr_input==3):
            #mol_name_()
            text_speech.say("Enter the Mass of first atom of Molecule")
            text_speech.runAndWait()
            print("Enter the mass of First atom of ",mol_name,"  Molecule.\t")
            m1=float(input("...>"))
            text_speech.say("Enter the Mass Of Second Atom Of Molecule")
            text_speech.runAndWait()
            print("Enter the mass of Second atom of ",mol_name,"  Molecule.\t")
            m2=float(input("...>"))
            u=(m1*m2*1E-3)/(NA*(m1+m2))
            print("\tReduced mass Of The ",mol_name,"Molecule is  ",u,"Kg/atom .")
            text_speech.say("Enter the Value For Bond length of Given Molecule")
            text_speech.runAndWait()
            r=float(input("Enter The Bond length (in Angstrom) : \t"))
            text_speech.say("Enter the Value For Rotational Quantum Number")
            text_speech.runAndWait()
            J=int(input("Enter the Rotational Quantum Number : \t"))
            moi=u*r*r*1E-20
            Energy=(B*J*(J+1))/moi
            text_speech.say("I have Calculated The Roataional frequency in inverse metre for the given Molecule")
            text_speech.runAndWait()
            print("Rotational Frequency/wavenumber (V') Of ",mol_name,"Molecule",Energy," m^-1 .")
        elif (usr_input==4):
            #mol_name_()
            text_speech.say("Enter the Mass of first atom of Molecule")
            text_speech.runAndWait()
            print("Enter the mass of First atom of ",mol_name,"  Molecule.\t")
            m1=float(input("...>"))
            text_speech.say("Enter the Mass Of Second Atom Of Molecule")
            text_speech.runAndWait()
            print("Enter the mass of Second atom of ",mol_name,"  Molecule.\t")
            m2=float(input("...>"))
            u=(m1*m2*1E-3)/(NA*(m1+m2))
            print("\tReduced mass Of The ",mol_name,"Molecule is  ",u,"Kg/atom .")
            text_speech.say("Enter the Value For Bond length of Given Molecule")
            text_speech.runAndWait()
            r=float(input("Enter The Bond length (in Angstrom) : \t"))
            text_speech.say("Enter the Value For Rotational Quantum Number")
            text_speech.runAndWait()
            J=int(input("Enter the Rotational Quantum Number : \t"))
            moi=u*r*r*1E-20
            wavelength=1/((B*J*(J+1))/moi)
            sn="{:e}".format(wavelength)
            text_speech.say("I have Calculated The rotational wavelength in metre  for the given Molecule")
            text_speech.runAndWait()
            print("\tRotational Wavelength Of ",mol_name,"Molecule ",sn," m")
        elif (usr_input==5):
            #mol_name_()
            text_speech.say("Enter the Mass of first atom of Molecule")
            print("Enter the mass of First atom of ",mol_name,"  Molecule.\t")
            text_speech.runAndWait()
            m1=float(input("...>"))
            text_speech.say("Enter the Mass Of Second Atom Of Molecule")
            text_speech.runAndWait()
            print("Enter the mass of Second atom of ",mol_name,"  Molecule.\t")
            m2=float(input("...>"))
            u=(m1*m2*1E-3)/(NA*(m1+m2))
            print("\tReduced mass Of The ",mol_name,"Molecule is  ",u,"Kg/atom .")
            ls=float(input("Enter the value Of Line Spacing 2B : \t"))
            moi=(2*B)/(ls*100)
            bl=(moi/u)**(0.5)
            p=bl/1E-10
            text_speech.say("I have Calculated The moment of inertia and bond length for the given Molecule")
            text_speech.runAndWait()
            print("\tThe Moment of inertia Of ",mol_name,"Is ",moi,"Kg m^2 . ")
            print("\t\tThe Bond Length Of ",mol_name,"Is ",p," Angstrom")
        elif(usr_input==0):
            text_speech.say("Good Bye Boss. Have a nice Day")
            text_speech.runAndWait()
            time.sleep(1.5)
            text_speech.say("Shutting Down Aditi System")
            print("Shutting Down Aditi System...")
            text_speech.runAndWait()
            time.sleep(1.1)
            exit()
        else:
            text_speech.say("Please! Choose The Correct Choice.")
            text_speech.runAndWait()
elif (username=="admin1") and (password=="Photon"):
    time.sleep(0.2)
    print("Checking Login details...")
    time.sleep(0.3)
    text_speech.say("Access Granted")
    print("Access Granted...")
    text_speech.runAndWait()
    from datetime import datetime

    # datetime object containing current date and time
    now = datetime.now()
# dd/mm/YY H:M:S
    time.sleep(0.2)
    print("Loading...")
    dt_string = now.strftime("%d/%m/%Y %H:%M:%S")
    time.sleep(1.1)
    print(dt_string)
    print("Getting the Targeted File...")
    time.sleep(2.1)
    print("Opening The main file...")
    time.sleep(1.8)
    import datetime
    currentTime = datetime.datetime.now()
    currentTime.hour
    time.sleep(1.2)
    text_speech.say("Activating Aditi System...")
    text_speech.runAndWait()
    def wishme():
        if currentTime.hour < 12:
            text_speech.say("Good Morning Boss! , I'm Aditi. How Can I help In Problems of Photoelectric Equations")
            text_speech.runAndWait()
        elif 12 <= currentTime.hour < 18:
            text_speech.say("Good Afternoon Boss! , I'm Aditi. How Can I help In Problems of Photoelectric Equations")
            text_speech.runAndWait()
        else:
            text_speech.say("Good Evening Boss! , I'm Aditi. How Can I help In Problems of Photoelectric Equations")
            text_speech.runAndWait()
    time.sleep(1.6)
    print("\t\t\t   +--------------------------------------------------------------------------------------------------+")
    print("\t\t\t   |                                ADITI - The Future Of Innovation                                  |")
    print("\t\t\t   +--------------------------------------------------------------------------------------------------+\n")
    wishme()
    print("\t\t\t   +--------------------------------------------------------------------------------------------------+")
    print("\t\t\t   |                                     PHOTOELECTRIC EFFECT                                         |")
    print("\t\t\t   +--------------------------------------------------------------------------------------------------+\n\n")
    time.sleep(1.2)
    h=6.626E-34
    c=3E+8
    el=1.6E-19
    print("1.\tTo Calculate The Energy When frequecy Is Given")
    print("2.\tTo Calculate The Energy When Wavelength Is Given")
    print("3.\tTo Calculate The Wavelength When Energy Is Given")
    print("4.\tTo Calculate The Frequency When Energy Is Given")
    print("5.\tTo Calculate The Number of photons When frequency Is Given")
    print("6.\tTo Calculate The Number of photons When wavelength Is Given")
    print("0.\tTo Shut Down The Aditi")
    while True:
        text_speech.say("Enter your Choice Number Given Front of Above Operations")
        text_speech.runAndWait()
        usr_input=int(input("Enter Your Choice     :  "))
        if (usr_input==1):
            text_speech.say("Enter the number of photons")
            text_speech.runAndWait()
            n=int(input("Enter the number of photon   : \t"))
            text_speech.say("Enter the value for frequency of photons")
            text_speech.runAndWait()
            f=float(input("Enter the Value for frequency of photon :\t"))
            energy=h*f*n
            enr=energy/el
            text_speech.say("Check on...Screen for result")
            text_speech.runAndWait()
            print("Energy Of ",n," photons is ",energy," Joules .")
            print("                   OR                       ")
            print("Energy Of ",n," photons is ",enr," eV .")
        elif (usr_input==2):
            text_speech.say("Enter the number of photons")
            text_speech.runAndWait()
            n=int(input("Enter the number of photons   : \t"))
            text_speech.say("Enter the value for wavelength of a photon")
            text_speech.runAndWait()
            w=float(input("Enter the Value for wavelength of photon :\t"))
            energy=(n*h*c)/w
            enr=energy/el
            text_speech.say("Check on...Screen for result")
            text_speech.runAndWait()
            print("Energy Of ",n," photons is ",energy," Joules .")
            print("                   OR                       ")
            print("Energy Of ",n," photons is ",enr," eV .")
        elif (usr_input==3):
            text_speech.say("Enter the value for Energy of a photon")
            text_speech.runAndWait()
            e=float(input("Enter the Value for Energy of a photon :\t"))
            w=(h*c)/e
            wl=w/1E-10
            text_speech.say("Check on...Screen for result")
            text_speech.runAndWait()
            print("Wavelength of photon will be ",w," metre .")
            print("                   OR                       ")
            print("Wavelength of photon will be ",wl," Angstrom .")
        elif (usr_input==4):
            text_speech.say("Enter the value for Energy of a photon")
            text_speech.runAndWait()
            en=float(input("Enter the Value for Energy :\t"))
            f=en/h
            text_speech.say("Check on...Screen for result")
            text_speech.runAndWait()
            print("Frequency Of Phothon will be  ",f," Hz .")
        elif (usr_input==5):
            text_speech.say("Enter the value of Total Energy")
            text_speech.runAndWait()
            E=float(input("Enter the Total Energy : \t"))
            text_speech.say("Enter the Value for frequency of photon")
            text_speech.runAndWait()
            f=float(input("Enter the Value for frequency of photon :\t"))
            n=E/(h*f)
            text_speech.say("Check on...Screen for result")
            text_speech.runAndWait()
            print("Total number of photons are ",n," photons .")
        elif (usr_input==6):
            text_speech.say("Enter the value of Total Energy")
            text_speech.runAndWait()
            E=float(input("Enter the Total Energy : \t"))
            text_speech.say("Enter the Value for wavelength of photon")
            text_speech.runAndWait()
            w=float(input("Enter the Value for wavelength of photon :\t"))
            n=E/((h*c)/w)
            text_speech.say("Check on...Screen for result")
            text_speech.runAndWait()
            print("Total number of photons are ",n," photons .")
        elif (usr_input==7):
            text_speech.say("Enter the value of Kinetic Energy")
            text_speech.runAndWait()
            KE=float(input("Enter the Kinetic Energy : \t"))
            me=9.1E-31
            w=h/((2*me*KE)**0.5)
            f=c/w
            text_speech.say("Wavelength And frequency of the photon is now on your screen")
            text_speech.runAndWait()
            print("Wavelength : ",w," m \tOR\t",w/1E-10," Angstrom \n Freuency : ",f," Hz .")
        elif (usr_input==0):
            text_speech.say("Good Bye Boss. Have a nice Day")
            text_speech.runAndWait()
            time.sleep(1.5)
            text_speech.say("Shutting Down Aditi System")
            print("Shutting Down Aditi System...")
            text_speech.runAndWait()
            time.sleep(1.1)
            exit()
        else:
            text_speech.say("Please! Choose The Correct Choice.")
            text_speech.runAndWait()
else:
    time.sleep(0.3)
    print("Verifying User Details...")
    time.sleep(0.5)
    text_speech.say("Access Denied")
    print("Access Denied")
    text_speech.runAndWait()
    exit()