import math
Tinggi = int(input("Masukkan Sisi A: ")) 
Miring = int(input("Masukkan Sisi B: "))
Alas = math.sqrt((Miring**2) - (Tinggi**2))
keliling = Alas + Tinggi + Miring
Luas = Alas * Tinggi / 2
print("Alas: %d cm" %Alas)
print("Tinggi: %d cm" %Tinggi)
print("Miring: %d cm" %Miring)
print("Keliling: %d cm" %keliling)
print("Luas: %d cm^2" %Luas)