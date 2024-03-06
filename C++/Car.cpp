// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan, termasuk import file Induk
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

class Car : public Vehicle
{
private:
    /* data */
    string jumlah_kursi;
    string jumlah_pintu;

public:
    /* Constructor */
    Car() : Vehicle() /* Membuat Constructor default tanpa isi parameter */
    {
        this->jumlah_kursi = "";
        this->jumlah_pintu = "";
    }

    Car(string plat_nomor, string merk, int tahun_produksi, string warna, string jumlah_kursi, string jumlah_pintu) : Vehicle(plat_nomor, merk, tahun_produksi, warna)
    {
        this->jumlah_kursi = jumlah_kursi;
        this->jumlah_pintu = jumlah_pintu;
    }

    /* Getter dan Setter */

    /* Getter */
    string getJumlahPintu()
    {
        return this->jumlah_pintu;
    }

    string getJumlahKursi()
    {
        return this->jumlah_kursi;
    }

    /* Setter */
    void setJumlahPintu(string jumlah_pintu)
    {
        this->jumlah_pintu = jumlah_pintu;
    }

    void setJumlahKursi(string jumlah_kursi)
    {
        this->jumlah_kursi = jumlah_kursi;
    }

    ~Car()
    {
    }
};
