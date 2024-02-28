class Vehicle: # Membuat class Parent bernama Vehicle

    # Membuat data atribut plat nomor, merk, tahun produksi, warna
    __plat_nomor = ""
    __merk = ""
    __tahun_produksi = 0
    __warna = ""

    # Constructor
    def __init__(self, plat_nomor = "", merk = "", tahun_produksi = 0, warna = ""):  # Membuat constructor dengan parameter
        # Menginisialisasi masing masing atribut dengan nilai dari parameter nama atribut sesuai namanya
        self.__plat_nomor = plat_nomor
        self.__merk = merk
        self.__tahun_produksi = tahun_produksi
        self.__warna = warna

        # Getter dan Setter
        
        # Getter
        def getPlat_Nomor(self):
            return self.__plat_nomor
        
        def getMerk(self):
            return self.__merk
        
        def getTahun_Produksi(self):
            return self.__tahun_produksi

        def getWarna(self):
            return self.__warna

        # Setter
        def setPlat_Nomor(self):
            return self.__plat_nomor
        
        def setMerk(self):
            return self.__merk
        
        def setTahun_Produksi(self):
            return self.__tahun_produksi

        def setWarna(self):
            return self.__warna
