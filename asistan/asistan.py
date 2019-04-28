import speech_recognition as sr
import playsound
r = sr.Recognizer()
while True:
    with sr.Microphone() as source:
        print("Bi Şeyler De")
        audio = r.listen(source)

    try:
        text = r.recognize_google(audio, language='tr-tr')
        print(text,"Dedin")
        if(text == "Merhaba"):
            playsound.playsound('C:/Users/BERKGILLER/Desktop/merhaba.mp3', True)

    except:
        print("Try Again")

