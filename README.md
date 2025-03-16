# Janji
Saya Klara Ollivviera Augustine Gunawan dengan NIM 2306205 mengerjakan soal Tugas Praktikum 3 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Diagram
![TP3 drawio (1)](https://github.com/user-attachments/assets/f9c9bc22-c6f0-490e-ad54-679ae90ee05f)

# Desain 
Terdapat 11 Class dnegan detail atribut berikut:
1. Komponen
- merk (str): Merek dari komponen.
- nama (str): Nama spesifik dari komponen.

2. Cpu
- jumlahCore (int): Jumlah core pada CPU.
- kecepatanGHz (float): Kecepatan CPU dalam GHz.

3. Ram
- kapasitasGB (int): Kapasitas RAM dalam GB.
- ddr (str): Tipe DDR dari RAM (misal: DDR4, DDR5).

4. StorageDevice
- kapasitasGB (int): Kapasitas penyimpanan dalam GB.
- bacaTulisMBps (int): Kecepatan baca/tulis dalam MBps.

5. Harddrive
- tipeDrive (str): Jenis drive (HDD atau SSD).

6. Ssd
- jenisMemori (str): Jenis memori pada SSD.

7. Peripheral
- tipePeripheral (str): Jenis perangkat (misal: input, output).
- interface (str): Jenis koneksi (misal: USB, wireless).

8. Keyboard
- jenisSwitch (str): Jenis switch pada keyboard mekanik.
- RGB (int): Apakah keyboard memiliki RGB (1 = Ya, 0 = Tidak).

9. Mouse
- dpi (int): Tingkat sensitivitas mouse dalam DPI.
- jumlahTombol (int): Jumlah tombol pada mouse.

10. Monitor
- resolusi (str): Resolusi layar (misal: 1920x1080).
- refreshRateHz (int): Refresh rate dalam Hz.

11. Komputer
- nama (str): Nama komputer.
- cpu (Cpu): CPU yang digunakan.
- ram_list (list of Ram): Daftar RAM yang terpasang.
- harddrive (Harddrive): Hard drive yang digunakan.
- ssd (Ssd): SSD yang digunakan.
- keyboard (Keyboard): Keyboard yang terhubung.
- mouse (Mouse): Mouse yang terhubung.
- monitor (Monitor): Monitor yang digunakan.

Dengan hubungan berikut:
1. Inheritance
- Class Cpu, Ram, Peripheral inheritance kepada class Komponen (hierarchical)
- Class Ssd dan Harddrive inheritance kepada class Komponen dan StorageDevice (multiple)
- Class Keyboard, Mouse, Monitor inheritance kepada class Peripheral (hybrid)

2. Composite
- Class Komputer composite kepada class Ssd, Harddrive, Cpu, Ram, Keyboard, Mouse, Monitor

# Alur Program
1. Membuat objek komputer dengan komponen yang terdiri dari CPU, RAM, hard drive, SSD, keyboard, mouse, dan monitor.
2. Menambahkan RAM tambahan ke dalam komputer.
3. Menampilkan informasi lengkap tentang komputer.

# Dokumentasi 

## CPP
<img width="481" alt="CPP" src="https://github.com/user-attachments/assets/737d750d-9593-4e86-abde-5b9467f4b1b1" />

## PYTHON
<img width="484" alt="PYTHON" src="https://github.com/user-attachments/assets/5306bc05-af69-48e7-93cf-311df7f267b7" />
