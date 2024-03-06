class Garage:

    # Membuat data atribut jenis motor, kapasitas tangki
    __nama_garasi = ""
    __luas_garasi = ""
    __daftar_kendaraan = ""

    # Constructor
    def __init__(self, nama_garasi = "", luas_garasi = "", daftar_kendaraan = ""): # Membuat constructor dengan parameter
        # menginisialisasi masing masing atribut dengan nilai dari parameter nama atribut sesuai namanya
        self.__nama_garasi = nama_garasi
        self.__luas_garasi = luas_garasi
        self.__daftar_kendaraan = daftar_kendaraan
        # self.__car = car # Composite list of object
        # self.__motorcycle = motorcycle # Composite list of object

    # Getter dan Setter

    # Getter    
    def getNama_Garasi(self):
        return self.__nama_garasi
    
    def getLuas_Garasi(self):
        return self.__luas_garasi
    
    def getDaftar_Kendaraan(self):
        return self.__daftar_kendaraan
    
    # def getCar(self):
    #     return self.__car
    
    # def getMotorcycle(self):
    #     return self.__motorcycle

    
    # Setter
    def setNama_Garasi(self, nama_garasi):
        self.__nama_garasi = nama_garasi

    def setLuas_Garasi(self, luas_garasi):
        self.__luas_garasi = luas_garasi

    def setDaftar_Kendaraan(self, daftar_kendaraan):
        self.__daftar_kendaraan = daftar_kendaraan

    # def setCar(self, car):
    #     self.__car = car

    # def setMotorcycle(self, motorcycle):
    #     self.__motorcycle = motorcycle