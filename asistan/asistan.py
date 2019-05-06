import speech_recognition as sr
import playsound
import time
import sys
r = sr.Recognizer()
csb = "Hava Sicakliği,27,santigrat derece"

def sicaklik_soyle():
    print("Sıcaklık")
    playsound.playsound('C:/Users/BERKGILLER/Desktop/asistan/hava_sicakligi.mp3', True)
    playsound.playsound('C:/Users/BERKGILLER/Desktop/asistan/yirmi.mp3', True)
    playsound.playsound('C:/Users/BERKGILLER/Desktop/asistan/yedi.mp3', True)
    playsound.playsound('C:/Users/BERKGILLER/Desktop/asistan/santigrat.mp3', True)
while True:
    with sr.Microphone() as source:
        print("Ne Söylemek İsterdiniz?")
        audio = r.listen(source)

    try:
        komut = r.recognize_google(audio, language='tr-tr')
        print(komut)
        if(komut == "Merhaba"):
            playsound.playsound('C:/Users/BERKGILLER/Desktop/asistan/merhaba.mp3', True)

        elif(komut == "kendinden bahset"):
            print("ben zicey")
            playsound.playsound('C:/Users/BERKGILLER/Desktop/asistan/zicey.mp3', True)
        elif(komut == "su deposunun durumu nedir"):
            print("bu da su deposu")
        elif(komut == "mama deposunun durumu nedir"):
            print("mama deposu")
        elif(komut == "kum deposunun durumu nedir"):
            print("kum deposu")
        elif(komut == "Sıcaklık nedir"):
            sicaklik_soyle()
        elif(komut == "çıkış yap"):
            print("çkş")
            sys.exit()

    except FileNotFoundError:
        print("Lütfen Tekrar Deneyiniz")

