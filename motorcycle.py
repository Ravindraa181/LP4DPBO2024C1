from vehicle import Vehicle #
from garage import Garage 

class Motorcycle(Vehicle):

    # Membuat data atribut jenis motor, kapasitas tangki
    __jenismotor = ""
    __kapasitastangki = ""
    __garageObject = Garage("","","")

    # Constructor
    def __init__(self, plat_nomor , merk , tahun_produksi , warna , jenismotor , kapasitastangki , garage): # Membuat constructor dengan parameter
        super().__init__(plat_nomor, merk, tahun_produksi, warna, jenismotor, kapasitastangki) # Menginisialisasi setiap atribut yang ada di dalam konstruktor parent class Product
        # menginisialisasi masing masing atribut dengan nilai dari parameter nama atribut sesuai namanya
        self.__jenismotor = jenismotor
        self.__kapasitastangki = kapasitastangki
        self.__garageObject = garage

    # Getter dan Setter

    # Getter    
    def getJenisMotor(self):
        return self.__jenismotor
    
    def getKapasitasTangki(self):
        return self.__kapasitastangki
    
    def getGarage(self):
        return self.__garageObject

    
    # Setter
    def setJenisMotor(self, jenismotor):
        self.__jenismotor = jenismotor

    def setKapasitasTangki(self, kapasitastangki):
        self.__kapasitastangki = kapasitastangki
