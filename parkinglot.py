from garage import Garage

class ParkingLot(Garage):

    # Membuat data atribut jenis motor, kapasitas tangki
    __kapasitas = ""
    __jumlah_kendaraan = ""

    # Constructor
    def __init__(self, nama_garasi = "", luas_garasi = "", daftar_kendaraan = "",kapasitas = "", jumlah_kendaraan = ""): # Membuat constructor dengan parameter
        super().__init__(nama_garasi, luas_garasi, daftar_kendaraan) # Menginisialisasi setiap atribut yang ada di dalam konstruktor parent class Garage
        # menginisialisasi masing masing atribut dengan nilai dari parameter nama atribut sesuai namanya
        self.__kapasitas = kapasitas
        self.__jumlah_kendaraan = jumlah_kendaraan

    # Getter dan Setter

    # Getter    
    def getKapasitas(self):
        return self.__kapasitas
    
    def getJumlah_Kendaraan(self):
        return self.__jumlah_kendaraan

    
    # Setter
    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def setJumlah_Kendaraan(self, jumlah_kendaraan):
        self.__jumlah_kendaraan = jumlah_kendaraan
