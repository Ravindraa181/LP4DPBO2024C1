# LP4DPBO2024C1

### Saya Ravindra Maulana Sahman NIM 2108724 mengerjakan Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas berikut :
* Vehicle : plat nomor, merk, tahun produksi, warna
* Car : jumlah kursi, jumlah pintu
* Motorcycle : jenis motor, kapasitas tangki
* Garage : nama garasi, luas garasi, daftar kendaraan
* ParkingLot : kapasitas, jumlah kendaraan saat ini


## Desain Program
![UML_LP4DPBO](https://github.com/Ravindraa181/LP4DPBO2024C1/assets/100990733/111e756c-49d4-487e-b666-fcef07291bbb)


Program ini memiliki 5 kelas diantaranya, kelas 'Vehicle', kelas 'Car', kelas 'Motorcycle', 'Garage', 'ParkingIot'. Untuk kelima kelas diatas nantinya akan mengimplementasikan konsep Multi-level Inheritance dan khusus untuk kelas 'ParkingIot' akan mengimplementasikan konsep Composition pada 'Car' dan 'Motorcycle'.
1. Vehicle (sebagai super class / parent dari Car dan Motorcycle)
  Pada class Vehicle terdapat 4 atribut : 
  * plat_nomor -> berisikan plat nomor dari kendaraan dengan tipe data 'string'
  * merk -> berisikan merk kendaraan dengan tipe data 'string'
  * tahun_produksi -> berisikan tahun produksi kendaraan dengan tipe data 'integer'
  * warna -> berisikan warna kendaraan dengan tipe data 'string'

2. Car (sebagai sub class / child dari Vehicle dan Composite dari ParkingIot)
  Pada class Car terdapat 2 atribut :
  * jumlah_kursi -> berisikan jumlah kursi mobil dengan tipe data 'string'
  * jumlah_pintu -> berisikan jumlah pintu mobil dengan tipe data 'string'

3. Shirt (sebagai sub class / child dari Vehicle dan Composite dari ParkingIot)
  Pada class Shirt terdapat 2 atribut :
  * jenis_motor -> berisikan jenis motor dengan tipe data 'string'
  * kapasitas_tangki -> berisikan kapasistas tangki motor dengan tipe data 'string'
    
4. Garage (sebagai super class / parent dari ParkingIot)
   Pada class Garage terdapat 3 atribut :
  * nama_garasi -> berisikan nama garasi dengan tipe data 'string'
  * luas_garasi -> berisikan luas dalam garasi dengan tipe data 'string'
  * daftar_kendaraan -> berisikan daftar kendaraan di dalam garasi dengan tipe data 'string'

5. ParkingIot (sebagai sub class / child dari Garage)
   Pada class ParkingIot terdapat 2 atribut :
   * kapasitas -> berisikan kapasitas tempat parkir dengan tipe data 'string'
   * jumlah_kendaraan -> berisikan jumlah kendaraan yang ada dengan tipe data 'string'

Tiap atribut dari masing masing class diatas memiliki Getter dan Setternya.

Desain dalam program ini yaitu dengan menggunakan jenis inheritence dengan urutan Class sebagai berikut : Vehicle => Car dan Motorcycle, Garage => ParkingIot.
Alasan saya mendesain seperti itu karena menurut saya Car dan Motorcycle itu termasuk kedalam kategori Vehicle karena keduanya adalah kendaraan. dan untuk ParkingIot itu saya pikir termasuk tempat parkirnya kendaraan atau juga bisa disebut Garage. Oleh karena itu saya menggunakan Inheritence untuk kasus diatas.

Lalu untuk disain selanjutnya yaitu ada jenis Compsite saya membuat Class composite yaitu Class ParkingIot. Karena saya berpikir bahwa setiap kendaraan atau setiap motor dan mobil pasti memiliki tempat parkir dan garasinya masing masing. Oleh karena itu saya menjadikan class Car dan Motorcycle composite terhadap class ParkingIot


## Alur Program
Kedua program, baik itu python maupun c++ dibuat dengan memiliki alur yang sama, yakni data diinput secara hardcode. Sehingga, user cukup menjalankan atau mengkompilasi saja filenya, maka system akan menampilkan semua data list yang ada.

## Dokumentasi
* Pada Program C++
![Screenshot C++](https://github.com/Ravindraa181/LP4DPBO2024C1/assets/100990733/e53219b8-01df-49b2-a3a2-d710dfc5632d)



* Pada Program Python
![Screenshot Python](https://github.com/Ravindraa181/LP4DPBO2024C1/assets/100990733/92fdb1d2-64cc-446d-87bb-4552c8abecb8)


