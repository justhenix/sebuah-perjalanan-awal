# Sebuah Perjalanan Awal

> *"Tiga tahun... akhirnya selesai juga. Harusnya ini terasa seperti kemenangan, kan?"*

![Status](https://img.shields.io/badge/Status-Archived/Deprecated-red?style=for-the-badge)
![Project](https://img.shields.io/badge/Type-College_Project-blue?style=for-the-badge)
![Language](https://img.shields.io/badge/Language-C-blue)
![Platform](https://img.shields.io/badge/Platform-Windows-0078D6)

---

> [!IMPORTANT]  
> This project has been archived and is preserved for academic purposes only.  
> No further development or updates are planned.

---

## 📖 Overview

**Sebuah Perjalanan Awal** adalah game *text-based interactive fiction* berbasis C yang mensimulasikan pengalaman MPLS dan dinamika sosial SMA.

Pemain berperan sebagai **Ezra**, siswa baru yang setiap pilihannya memengaruhi hubungan, reputasi, dan akhir cerita.

---

## ✨ Fitur

- Efek ketik real-time (*typewriter effect*)
- Branching storyline berbasis pilihan
- Sistem Kedekatan:
  - 🤝 Rian  
  - 💖 Kirana  
  - 😎 Reputasi Umum  
- Multiple Endings
- RNG Events untuk variasi *playthrough*

---

## 🛠️ Persyaratan

- **OS:** Windows 10/11  
- Menggunakan `<windows.h>` (`Sleep()`), hanya kompatibel Windows  
- Compiler: GCC (MinGW) atau C compiler Windows lainnya  

---

## 🚀 Cara Menjalankan

```bash
git clone https://github.com/justhenix/sebuah-perjalanan-awal.git
cd sebuah-perjalanan-awal
gcc sebuah_perjalanan_awal.c -o game
./game
