from car import Car
from motorcycle import Motorcycle
from parkinglot import ParkingLot
from vehicle import Vehicle

carList = []
motorcycleList = []
parkingLotList = []

parkinglot1 = ParkingLot("Honda", "700m", "Ferrari, BMW", "300 Kendaraan", "200")
parkingLotList.append(parkinglot1)

car = Car("D 1232 F", "BMW", "1988", "Merah", "2 Kursi", "2 Pintu", parkinglot1)
carList.append(car)






print("Data Garasi")
for i in range(len(carList)):
    print("Nama Garasi            : " + carList[i].getGarage().getNama_Garasi())
    print("Luas Garasi            : " + carList[i].getGarage().getLuas_Garasi())
    print("Daftar Kendaraan       : " + carList[i].getGarage().getDaftar_Kendaraan())
    print("Kapasitas              : " + carList[i].getGarage().getKapasitas())
    print("Jumlah Kendaraan       : " + carList[i].getGarage().getJumlah_Kendaraan())
    print()

print("Data Mobil di Garasi")
for i in range(len(carList)):
    print("Jumlah Kursi           : " + carList[i].getJumlahKursi())
    print("Jumlah Pintu           : " + carList[i].getJumlahPintu())

