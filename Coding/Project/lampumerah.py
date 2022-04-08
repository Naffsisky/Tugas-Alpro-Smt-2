import time
import os
def main():
    x = True
    a = 10 #Lampu merah
    b = 3 #Lampu kuning
    c = 4 #Lampu hijau
    while (x):
        os.system("clear")
        print("Lampu merah")
        while a >= 1:
            time.sleep(1)
            print(a, end = " \r")
            a = a - 1
            time.sleep(1)
        os.system("clear")
        print("Lampu kuning")
        while b >= 1:
            time.sleep(1)
            print(b, end = " \r")
            b = b - 1
            time.sleep(1)
        os.system("clear")
        print("Lampu hijau")
        while c >= 1:
            time.sleep(1)
            print(c, end = " \r")
            c = c - 1
            time.sleep(1)
        main()

if __name__ == "__main__":
    main()
    os.system ("clear") #for linux / os x 
    #os.system ("cls") #for windows