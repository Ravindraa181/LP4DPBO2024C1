// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

class Vehicle
{
private:
        /* data */
        string plat_nomor;
        string merk;
        int tahun_produksi;
        string warna;

public:
        /* Constructor */
        Vehicle() /* Membuat Constructor Default tanpa parameter */
        {
                this->plat_nomor = "";
                this->merk = "";
                this->tahun_produksi = 0;
                this->warna = "";
        }

        Vehicle(string plat_nomor, string merk, int tahun_produksi, string warna)
        {
                this->plat_nomor = plat_nomor;
                this->merk = merk;
                this->tahun_produksi = tahun_produksi;
                this->warna = warna;
        }
        /* Getter dan Setter*/

        /* Getter*/
        string getPlatNomor()
        {
                return this->plat_nomor;
        }

        string getMerk()
        {
                return this->merk;
        }

        int getTahunProduksi()
        {
                return this->tahun_produksi;
        }

        string getWarna()
        {
                return this->warna;
        }

        /* Setter */
        void setPlatNomor(string plat_nomor)
        {
                this->plat_nomor = plat_nomor;
        }

        void setMerk(string merk)
        {
                this->merk = merk;
        }

        void setTahunProduksi(int tahun_produksi)
        {
                this->tahun_produksi = tahun_produksi;
        }

        void setWarna(string warna)
        {
                this->warna = warna;
        }

        /* Destructor */
        /* Membuat Destructor untuk menghapus semua objek yang telah dibuat*/
        ~Vehicle()
        {
        }
};
