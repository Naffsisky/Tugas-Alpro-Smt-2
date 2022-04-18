print("Penghitungan program BMI")

x = int(input("Masukkan berat badan : "))
y = int(input("Masukkan tinggi badan : "))

bmi = x/((y/100)**2)
if (bmi <= 18):
    print("Under Weight")
elif (bmi > 18 and bmi < 23):
    print("Normal")
elif (bmi > 23 and bmi < 28):
    print("Over Weight")
else:
    print("Obesitas")
