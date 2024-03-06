// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan, termasuk import file Induk
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

class Motorcycle : public Vehicle
{
private:
    /* data */
    string jenis_motor;
    string kapasitas_tangki;

public:
    /* Constructor */
    Motorcycle() : Vehicle() /* Membuat Constructor default tanpa isi parameter */
    {
        this->jenis_motor = "";
        this->kapasitas_tangki = "";
    }

    Motorcycle(string plat_nomor, string merk, int tahun_produksi, string warna, string jenis_motor, string kapasitas_tangki) : Vehicle(plat_nomor, merk, tahun_produksi, warna)
    {
        this->jenis_motor = jenis_motor;
        this->kapasitas_tangki = kapasitas_tangki;
    }

    /* Getter dan Setter */

    /* Getter */
    string getKapasitasTangki()
    {
        return this->kapasitas_tangki;
    }

    string getJenisMotor()
    {
        return this->jenis_motor;
    }

    /* Setter */
    void setKapasitasTangki(string kapasitas_tangki)
    {
        this->kapasitas_tangki = kapasitas_tangki;
    }

    void setJenisMotor(string jenis_motor)
    {
        this->jenis_motor = jenis_motor;
    }

    ~Motorcycle()
    {
    }
};
