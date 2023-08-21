import speech_recognition as sr
import pyttsx3 as tr
import pyautogui as dr
import time
import webbrowser as wb
import wikipedia as wk
import pywhatkit as nr
import datetime as dt
def speak(audio):
    engine=tr.init("sapi5")
    engine.setProperty('rate',180)
    engine.say(audio)
    engine.runAndWait()
def wish():
    hour=int(dt.datetime.now().strftime("%H"))
    if hour >=0 and hour<12:
        speak('good Morning.')
    elif hour>=12 and hour<=16:
        speak('good Afternoon.')
    else:
        speak('Good evening.')
wish()

def takecommand():
    r=sr.Recognizer()
    with sr.Microphone() as source:
        print("listening...")
        r.pause_threshold=1
        audio=r.listen(source)

    try:
        print("processing..")
        query=r.recognize_google(audio,language='en_in')
        print(f"user said:{query}\n")

    except Exception as e:
        print("say that again please..")
        speak("say that again please...")
        return "None"
    return query

while True:
    query=takecommand().lower()
    

    if 'open' in query:
        query=query.replace("open","")
        dr.press('super')
        dr.typewrite(query)
        time.sleep(0.5)
        dr.press('enter')

    

    elif 'youtube' in query:
        query=query.replace("play","")
        query=query.replace("on","")
        query=query.replace("youtube","")
        query=query.replace("song","")
        speak(f"playing {query}on youtube")
        nr.playonyt(query)

    elif 'search' in query:
        query=query.replace("search","")
        query=query.replace("about","")
        query=query.replace("on","")
        query=query.replace("google","")
        wb.open(f"https://www.google.com/search?q={query}")

    elif 'wikipedia' in query:
        query=query.replace("search","")
        query=query.replace("wikipedia","")
        query=query.replace("on","")
        query=query.replace("about","")
        speak(f"searching about {query} on wikipedia")
        results=wk.summary(query,sentences=5)
        speak(results)

    elif 'current time' in query:
        strlft=dt.datetime.now().strftime("%H:%M:%S")
        speak(f"current time is {strlft}")

    elif 'current date' in query:
        strlft=dt.datetime.now().strftime("%d:%B:%Y")
        speak(f"current date is {strlft}")
        
    
    

        
        
    
