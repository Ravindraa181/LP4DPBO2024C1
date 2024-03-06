// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

class Garage
{
private:
    /* data */
    string nama_garasi;
    string luas_garasi;
    string daftar_kendaraan;

public:
    /* Constructor */
    Garage() /* Membuat Constructor Default tanpa parameter */
    {
        this->nama_garasi = "";
        this->luas_garasi = "";
        this->daftar_kendaraan = "";
    }

    Garage(string nama_garasi, string luas_garasi, string daftar_kendaraan)
    {
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
        this->daftar_kendaraan = daftar_kendaraan;
    }
    /* Getter dan Setter*/

    /* Getter*/
    string getNamaGarasi()
    {
        return this->nama_garasi;
    }

    string getLuasGarasi()
    {
        return this->luas_garasi;
    }

    string getDaftarkendaraan()
    {
        return this->daftar_kendaraan;
    }

    /* Setter */
    void setNamaGarasi(string nama_garasi)
    {
        this->nama_garasi = nama_garasi;
    }

    void setLuasGarasi(string luas_garasi)
    {
        this->luas_garasi = luas_garasi;
    }

    void setDaftarkendaraan(string daftar_kendaraan)
    {
        this->daftar_kendaraan = daftar_kendaraan;
    }

    /* Destructor */
    /* Membuat Destructor untuk menghapus semua objek yang telah dibuat*/
    ~Garage()
    {
    }
};
