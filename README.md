# Sebuah Perjalanan Awal 🚶‍♂️🎒

> *"Tiga tahun... akhirnya selesai juga. Harusnya ini terasa seperti kemenangan, kan?"*

**Sebuah Perjalanan Awal** adalah permainan fiksi interaktif berbasis teks (text-based interactive fiction) yang ditulis dalam bahasa C. Game ini mensimulasikan pengalaman nostalgia hari-hari pertama Masa Pengenalan Lingkungan Sekolah (MPLS) dan dinamika pertemanan di masa SMA.

![Language](https://img.shields.io/badge/Language-C-blue)
![Platform](https://img.shields.io/badge/Platform-Windows-0078D6)
![Status](https://img.shields.io/badge/Status-Completed-green)

## 📖 Sinopsis

Bermain sebagai **Ezra**, seorang siswa baru yang mencoba menavigasi kehidupan sosialnya di lingkungan sekolah yang baru. Setiap keputusan yang kamu ambil—mulai dari cara memperkenalkan diri, memilih teman, hingga merespons situasi tak terduga akan mempengaruhi hubunganmu dengan karakter lain dan menentukan akhir dari cerita ini.

Apakah kamu akan menjadi siswa populer? Menemukan romansa? Atau justru menutup diri?

## ✨ Fitur Utama

* **Efek Ketik Real-time:** Teks ditampilkan karakter per karakter untuk memberikan nuansa bercerita yang hidup (kecepatan bisa diatur).
* **Sistem Pilihan Bercabang:** Responmu menentukan alur cerita (Branching Storyline).
* **Sistem Kedekatan (Affection Meter):**
    * 🤝 **Kedekatan Rian:** Teman sebangku yang suportif.
    * 💖 **Kedekatan Kirana:** Gadis misterius yang kamu temui di koridor.
    * 😎 **Kedekatan Umum:** Reputasimu di mata teman sekelas.
* **Multiple Endings:** Akhir cerita (Epilog) akan berubah berdasarkan tingkat kedekatanmu dengan karakter lain.
* **RNG Events:** Beberapa kejadian muncul berdasarkan probabilitas acak, membuat setiap *playthrough* sedikit berbeda.

## 🛠️ Persyaratan Sistem

Program ini menggunakan pustaka `<windows.h>` untuk fungsi `Sleep()` dan manajemen tampilan. Oleh karena itu, program ini **hanya kompatibel dengan Sistem Operasi Windows**.

* **OS:** Windows 10/11
* **Compiler:** GCC (MinGW) atau compiler C standar lainnya di Windows.

## 🚀 Cara Menjalankan

1.  **Clone repositori ini:**
    ```bash
    git clone [https://github.com/justhenix/sebuah-perjalanan-awal.git](https://github.com/justhenix/sebuah-perjalanan-awal.git)
    ```
2.  **Masuk ke direktori:**
    ```bash
    cd sebuah-perjalanan-awal
    ```
3.  **Compile program:**
    Buka terminal/CMD dan jalankan perintah berikut:
    ```bash
    gcc sebuah_perjalanan_awal.c -o game
    ```
4.  **Jalankan game:**
    ```bash
    ./game
    ```
    *(Atau klik ganda file `game.exe` yang terbentuk)*

## 🎮 Kontrol

* Gunakan tombol **Angka (1, 2, 3, dst)** lalu tekan **Enter** untuk memilih dialog/tindakan.
* Tekan **Enter** saat diminta untuk melanjutkan cerita.

## 👨‍💻 Kredit

Dibuat sebagai tugas mata kuliah Informatika.

* **Penulis:** Gamma Assyafi Fadhillah Ar Rasyad
* **NIM:** L0125013
* **Dosen Pengampu:** Prof. Drs. Bambang Harjito, M.App.Sc, Ph.D.
* **Asisten Dosen:** Andradhi Bondan Pamungkas & Muhamad Nabil Fannani

---
*Dibuat dengan ❤️ dan sedikit kecemasan masa SMA.*
