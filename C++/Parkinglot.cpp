// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Garage.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"

// Deklarasi namespace
using namespace std;

class Parkinglot : public Garage
{
private:
    // Atribut yang digunakan pada kelas Parkinglot terdiri dari kapasitas dan jumlah_kendaraan yang merupakan identitas pembeda antar Parkinglot satu dengan lainnya. Setiap Parkinglot memiliki car dan motor
    string kapasitas;
    string jumlah_kendaraan;
    Car car;
    Motorcycle motorcycle;

public:
    /* Constructor */
    Parkinglot() : Garage() /* Membuat Constructor default tanpa isi parameter */
    {
        this->kapasitas = "";
        this->jumlah_kendaraan = "";
    }

    Parkinglot(string nama_garasi, string luas_garasi, string daftar_kendaraan, string kapasitas, string jumlah_kendaraan, Car car, Motorcycle motorcycle) : Garage(nama_garasi, luas_garasi, daftar_kendaraan)
    {
        this->kapasitas = kapasitas;
        this->jumlah_kendaraan = jumlah_kendaraan;
        this->car = car;
        this->motorcycle = motorcycle;
    }

    // Method setter untuk set setiap nilai atribut pada kelas Parkinglot
    void setKapasitas(string kapasitas)
    {
        this->kapasitas = kapasitas;
    }

    void setJumlahKendaraan(string jumlah_kendaraan)
    {
        this->jumlah_kendaraan = jumlah_kendaraan;
    }

    void setCar(Car car)
    {
        this->car = car;
    }

    void setMotorcycle(Motorcycle motorcycle)
    {
        this->motorcycle = motorcycle;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Parkinglot
    string getKapasitas()
    {
        return kapasitas;
    }

    string getJumlahKendaraan()
    {
        return jumlah_kendaraan;
    }

    Car getCar()
    {
        return car;
    }

    Motorcycle getMotorcycle()
    {
        return motorcycle;
    }

    // Destructor
    ~Parkinglot()
    {
    }
};
