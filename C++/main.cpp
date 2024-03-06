// Memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "Parkinglot.cpp"

// Deklarasi namespace
using namespace std;

// Fungsi main() yang digunakan sebagai program utama
int main()
{
    ios::sync_with_stdio(0);
    cin.tie();

    // Instansiasi objek Laptop
    Car car("D1232F", "BMW", 2004, "Biru", "2 Kursi", "2 Pintu");

    // Instansiasi objek Dosen Wali
    Motorcycle motorcycle("D1234D", "Suzuki", 1990, "Merah", "Skuter", "50L");

    // Instansiasi objek Mahasiswa
    Parkinglot parkir("Blyat", "100m", "Mobil, Motor", "10 Kendaraan", "2 Kendaraan", car, motorcycle);
    int i = 0;
    cout << ("================== Data Garasi ================== \n");
    // for  i in range(len(parkir)):
    cout << "Nama Garasi                : " << parkir.getNamaGarasi() << endl;
    cout << "Luas Garasi                : " << parkir.getLuasGarasi() << endl;
    cout << "Daftar Kendaraan           : " << parkir.getDaftarkendaraan() << endl;
    cout << "Kapasitas                  : " << parkir.getKapasitas() << endl;
    cout << "Jumlah Kendaraan           : " << parkir.getJumlahKendaraan() << endl;
    cout << "\n";

    // for i in range(len(parkir):
    cout << "Data Mobil di Garasi ke-" << (i + 1) << endl;
    cout << "Plat Nomor                 : " << parkir.getCar().getPlatNomor()<< endl;
    cout << "Merk Mobil                 : " << parkir.getCar().getMerk()<< endl;
    cout << "Tahun Produksi             : " << (parkir.getCar().getTahunProduksi())<< endl;
    cout << "Warna Mobil                : " << parkir.getCar().getWarna()<< endl;
    cout << "Jumlah Kursi               : " << parkir.getCar().getJumlahKursi()<< endl;
    cout << "Jumlah Pintu               : " << parkir.getCar().getJumlahPintu()<< endl;
    cout << "\n";

    // for i in range(len(parkir):
    cout << "Data Motor di Garasi ke-" << (i + 1) << endl;
    cout << "Plat Nomor                 : " << parkir.getMotorcycle().getPlatNomor() << endl;
    cout << "Merk Motor                 : " << parkir.getMotorcycle().getMerk() << endl;
    cout << "Tahun Produksi             : " << (parkir.getMotorcycle().getTahunProduksi()) << endl;
    cout << "Warna Motor                : " << parkir.getMotorcycle().getWarna() << endl;
    cout << "Jenis Motor                : " << parkir.getMotorcycle().getJenisMotor() << endl;
    cout << "Kapasitas Tangki           : " << parkir.getMotorcycle().getKapasitasTangki() << endl;

    return 0; // Menyatakan keluaran dari fungsi main() adalah true
}
