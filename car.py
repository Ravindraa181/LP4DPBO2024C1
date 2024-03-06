from vehicle import Vehicle # 
from garage import Garage 
class Car(Vehicle):

    # Membuat data atribut jumlahkursi, jumlahpintu
    __jumlahkursi = ""
    __jumlahpintu = ""
    __garageObject = Garage("","","")

    # Constructor
    def __init__(self, plat_nomor , merk , tahun_produksi , warna , jumlahkursi , jumlahpintu , garage): # Membuat constructor dengan parameter
        super().__init__(plat_nomor, merk, tahun_produksi, warna) # Menginisialisasi setiap atribut yang ada di dalam konstruktor parent class Product
        # menginisialisasi masing masing atribut dengan nilai dari parameter nama atribut sesuai namanya
        self.__jumlahkursi = jumlahkursi
        self.__jumlahpintu = jumlahpintu
        self.__garageObject = garage

    # Getter dan Setter

    # Getter    
    def getJumlahKursi(self):
        return self.__jumlahkursi
    
    def getJumlahPintu(self):
        return self.__jumlahpintu
    
    def getGarage(self):
        return self.__garageObject

    
    # Setter
    def setJumlahKursi(self, jumlahkursi):
        self.__jumlahkursi = jumlahkursi

    def setJumlahPintu(self, jumlahpintu):
        self.__jumlahpintu = jumlahpintu
