import pyttsx3 as tts
engine=tts.init()
engine.setProperty("rate",180)
#engine.setProperty('voice', voices[0].id)
engine.say("hii suhani how was your day")
engine.save_to_file("hello suhani,a very happy birtday to you.may all your wishes come true irs",'text.mp3')
engine.runAndWait()


