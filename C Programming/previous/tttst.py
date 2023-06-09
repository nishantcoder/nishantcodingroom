import pyttsx3
text_speech=pyttsx3.init()
while True:
        a=input("Enter the word : \t")
        text_speech.say(a)
        text_speech.runAndWait()
