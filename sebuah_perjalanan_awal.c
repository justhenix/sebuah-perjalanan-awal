/*
Judul Program            : Sebuah Perjalanan Awal
Nama                     : Gamma Assyafi Fadhillah Ar Rasyad
NIM.                     : L0125013
Kelas                    : A
Mata Kuliah              : Informatika
Dosen Pengampu           : Prof. Drs. Bambang Harjito, M.App.Sc, Ph.D.
Asisten Dosen Pengampu   : Andradhi Bondan Pamungkas dan Muhamad Nabil Fannani
*/

// Kompatibilitas program hanya untuk OS Windows
// Bagian Praprosesor
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> // Diperlukan untuk fungsi Sleep() dan tipe data DWORD

// Bagian sistem efek ketik dan pilihan
int delay_ketik = 20; // permulaan

// pembungkus Sleep agar timing ikut delay_ketik
static inline void jeda(int ms) {
    // skala 20 => 1.0x; kalau 30 => 1.5x (lebih lambat) mengikuti pilihan user
    double scale = (double)delay_ketik / 20.0;
    DWORD dur = (DWORD)(ms * scale);
    Sleep(dur);
}

// sistem random - untuk kondisi cerita nanti
static inline int chance(int persen) {           // true jika lolos peluang
    return (rand() % 100) < persen;
}
static inline int rand_range(int a, int b) {     // sifatnya inklusif (batas bawah dan batas atas ikut dihitung juga)
    return a + (rand() % (b - a + 1));
}

// memberi efek ketik karakter per karakter
void efek_ketik(const char *s, int delay_ms) {
    for (int i = 0; s[i] != '\0'; i++) {
        putchar(s[i]);
        fflush(stdout);
        jeda(delay_ms); // fungsi yang akan dipanggil nanti untuk jeda teks
    }
}

// memberi instruksi enter
void jeda_enter() {
    efek_ketik("\n\n[Enter untuk Lanjut]", delay_ketik);
    getchar();
}

// menghapus tampilan layar
void hapus_layar() {
    system("cls");
}

// membaca pilihan masukan pemain
int baca_pilihan(int max) {
    int x;
    while (1) {
        efek_ketik("\n> Pilih: ", delay_ketik);
        if (scanf("%d", &x) == 1 && x >= 1 && x <= max) {
            while (getchar() != '\n');
            return x;
        }
        while (getchar() != '\n');
        efek_ketik("Masukkan angka yang ada\n", delay_ketik);
    }
}

// Bagian main
int main() {
srand(time(NULL)); //saat mulai agar ada alur "acak".
    // Kondisi permainan
    // Perasaan
int kedekatan_umum = 0;
int kedekatan_rian = 0;
int kedekatan_kirana = 0;

hapus_layar();
efek_ketik("==========================================================================\n", delay_ketik);
efek_ketik("                          SELAMAT DATANG DI                               \n", delay_ketik);
efek_ketik("                     PERMAINAN CERITA INTERAKTIF                          \n", delay_ketik);
efek_ketik("==========================================================================\n", delay_ketik);
printf("\n");

efek_ketik("Sebelum memulai, pilih kecepatan tampilan teks:\n", delay_ketik);
efek_ketik("1) Normal\n", delay_ketik);
efek_ketik("2) Cepat\n", delay_ketik);
efek_ketik("3) Pelan\n", delay_ketik);
efek_ketik("\n*Disarankan untuk memperbesar ukuran program ini (Maximize Window)\n", delay_ketik);

int cetik = baca_pilihan(2);
switch (cetik) {
    case 1: delay_ketik = 22; break; // Normal
    case 2: delay_ketik = 20; break;  // Cepat
    case 3: delay_ketik = 30; break; // Pelan
    }

hapus_layar();
efek_ketik("Selamat bermain!\n", delay_ketik);
efek_ketik("Dibuat oleh Gamma Assyafi Fadhillah Ar Rasyad\n", delay_ketik);
efek_ketik("NIM. L0125013\n", delay_ketik);
jeda(2000);

    void act0_prologue();
    {
        // Part 0 Prolog
        hapus_layar();
        efek_ketik("            // ========================= //         \n", delay_ketik);
        efek_ketik("            //       Bab 0 - Prolog      //         \n", delay_ketik);
        efek_ketik("            // ========================= //         \n", delay_ketik);
        jeda(3500);

        hapus_layar();
        efek_ketik("Tiga tahun... akhirnya selesai juga.\n", delay_ketik);
        jeda(800);
        efek_ketik("Semua malam yang kuhabiskan untuk belajar, semua pengorbanan itu...\n", delay_ketik);
        jeda(1000);
        efek_ketik("...terbayar dengan dua digit angka: 94.\n", delay_ketik);
        jeda(1000);
        efek_ketik("Harusnya ini terasa seperti kemenangan, kan?\n", delay_ketik);
        jeda(1500);
        efek_ketik("Tapi anehnya, yang terlintas di benakku justru bukan itu.\n", delay_ketik);
        jeda(1000);
        efek_ketik("Di antara riuh perayaan kelulusan, aku justru teringat sunyi.\n", delay_ketik);
        jeda(1000);
        efek_ketik("Teringat wajah-wajah yang hanya kulihat sekilas di koridor, tanpa pernah benar-benar kusapa.\n", delay_ketik);
        jeda(1500);
        efek_ketik("Bahkan... senyuman itu. Senyuman yang pernah ditujukan untukku,\n", delay_ketik);
        jeda(1000);
        efek_ketik("tapi kubalas hanya dengan palingan muka. Mungkin, aku hanya... belum siap.\n", delay_ketik);
        jeda(3000);

        hapus_layar();
        efek_ketik("...........\n", delay_ketik);
        jeda(1000);

        hapus_layar();
        efek_ketik("Kurasa itu akan berubah...\n", delay_ketik);
        jeda(1000);
        efek_ketik("atau tidak ._.\n", delay_ketik);
        jeda(2000);
    }

    void act1_perjalanan_awal();
    {
        // Judul Cerita
        hapus_layar();
        printf("\n");
        efek_ketik("//===          Sebuah Perjalanan Awal       ===//\n", delay_ketik);
        printf("\n");
        jeda(3000);
        efek_ketik("brttt\n", delay_ketik);
        jeda(2000);
        efek_ketik("brttttt\n", delay_ketik);
        jeda(2000);
        efek_ketik("brtttttttt\n", delay_ketik);
        jeda(100);
        jeda_enter();

        // Part 1 Orientasi
        hapus_layar();
        efek_ketik("           // =========================== //         \n", delay_ketik);
        efek_ketik("           //   Bab I - Perjalanan Awal   //         \n", delay_ketik);
        efek_ketik("           // =========================== //         \n", delay_ketik);
        jeda(3500);

        // Bersiap-siap berangkat
        hapus_layar();
        efek_ketik("*HP-mu bergetar membangunkanmu di pagi hari*\n", delay_ketik);
        jeda(1000);
        efek_ketik("\n'Hoamm...', ngantuk banget gilak..\n", delay_ketik);
        jeda(600);
        efek_ketik("\n'Ezra, tangi.. wis awan lho. Ngko malah telat, ndang siap-siap mangkat', panggil ibumu dari dapur.", delay_ketik);
        jeda(500);
        jeda_enter();
        efek_ketik("\n*Kamu beranjak dari kamarmu untuk bersiap-siap*\n", delay_ketik);
        jeda(600);
        hapus_layar();
        efek_ketik("'Oke, Buku catatan udah, seragam rapi, sarapan udah, saatnya berangkat.'\n", delay_ketik);
        jeda(1200);

        // Berangkat sekolah
        efek_ketik("\n'Sudah siap kak? Mau berangkat sendiri apa dianter sama ayah?'\n", delay_ketik);
        efek_ketik("1) Diantarkan ayah\n", delay_ketik);
        efek_ketik("2) Berangkat sendiri\n", delay_ketik);

        int berangkat = 0;
        berangkat = baca_pilihan(2);
        switch (berangkat) {
            case 1: // Dianter ayah
                hapus_layar();
                efek_ketik("\nAyah menyalakan mesin mobil. Radio menyala pelan, perjalanan lancar.\n", delay_ketik);
                jeda(2000);
                efek_ketik("*Kamu tiba sekitar 06.40. Rasanya tenang dan rapi*\n", delay_ketik);
                jeda(600);
                break;

            case 2: // Angkot
                hapus_layar();
                efek_ketik("*Kamu memutuskan untuk berangkat sendiri*\n", delay_ketik);
                jeda(400);
                efek_ketik("\n'Kakak mau berangkat sendiri yah.', ucapmu.\n", delay_ketik);
                efek_ketik("\n*Karena ini masih awal-awal SMA, kamu tidak diizinkan menggunakan motor oleh orang tua*\n", delay_ketik);
                efek_ketik("'Naik angkot ya? Ati-ati di jalan', pesan ayahmu.\n", delay_ketik);
                efek_ketik("\n'Iya, izin pamit yah.', ucapmu sekaligus bersalam.\n", delay_ketik);
                jeda(800);

                hapus_layar();
                efek_ketik("*Tap... tap... tap... kakimu melangkah ke tepi jalan.*\n", delay_ketik);
                jeda(800);
                efek_ketik("\n*Kamu jalan ke pinggir jalan*\n", delay_ketik);
                jeda(600);
                efek_ketik("\nAku bakal nunggu angkot di sini aja\n", delay_ketik);
                jeda(1200);
                hapus_layar();
                efek_ketik("...\n", delay_ketik);
                jeda(800);

                hapus_layar();
                efek_ketik("\"Serius ini angkot kok belum lewat juga?\" gumammu.\n", delay_ketik);
                jeda(1600);

                hapus_layar();
                efek_ketik("...\n", delay_ketik);
                jeda(1000);
                efek_ketik("\"Nah itu akhirnya ada, lama amat dah.\n", delay_ketik);
                jeda(600);
                efek_ketik("\n*Kamu naik angkot*\n", delay_ketik); // perbaikan kutip
                jeda(1000);
                efek_ketik("*Kamu tiba sekitar 06.50. Sedikit keringatan*\n", delay_ketik);
                break;
        }

        // Ikut kegiatan Pra-MPLS
        hapus_layar();
        efek_ketik("*Kamu bergegas mengikuti arahan dari panitia*\n", delay_ketik);
        jeda(800);
        efek_ketik("\n'Aku baris di belakang aja, sekalian naruh tas di belakang', gumammu\n", delay_ketik);
        jeda(1200);
        efek_ketik("\n*Kamu mengikuti apel pagi*\n", delay_ketik);
        jeda(1000);

        jeda_enter();
        hapus_layar();
        efek_ketik("...\n", delay_ketik);
        jeda(600);
        efek_ketik(".....\n", delay_ketik);
        jeda(1000);
        hapus_layar();

        efek_ketik("*Sekarang pembagian kelompok gugus kelas*\n", delay_ketik);
        jeda(600);
        hapus_layar();
        efek_ketik("...\n", delay_ketik);
        jeda(1000);
        hapus_layar();
        efek_ketik("\n'Ezra...\n", delay_ketik);
        jeda(800);
        efek_ketik("\n'Gugus 8...'\n", delay_ketik);
        jeda(1000);
        hapus_layar();
        efek_ketik("*Kamu mendapatkan Gugus 8*\n", delay_ketik);
        jeda(1000);

        hapus_layar();
        efek_ketik("*Kamu berkumpul dengan kelompok gugusmu*\n", delay_ketik);
        jeda(600);
        efek_ketik("\n'Selamat pagi teman-teman semuanya!', sapa ceria dari kakak pengampu gugus.", delay_ketik);
        jeda(600);
        efek_ketik("\n'Perkenalkan, nama Kakak, Alex. Kakak yang bakal jadi pengampu kalian di Gugus 8 ini. Salam kenal ya!', lanjutnya sambil tersenyum ramah.\n", delay_ketik);
        jeda(800);
        efek_ketik("\n'Biar kita makin akrab, kita mulai dari perkenalan dulu, gimana?", delay_ketik);
        efek_ketik("\nSebutin nama, asal SMP, sama satu hal yang kalian suka. Dimulai dari kamu yang paling depan!', tunjuk Kak Alex.\n", delay_ketik);
        jeda(1000);

        jeda_enter();
        hapus_layar();
        efek_ketik("*Satu per satu teman barumu mulai memperkenalkan diri. Ada yang terdengar percaya diri, ada yang sedikit gugup.*\n", delay_ketik);
        jeda(1200);
        efek_ketik("*Jantungmu sedikit berdebar saat giliranmu semakin dekat.*\n", delay_ketik);
        jeda(800);

        efek_ketik("\nSeorang anak laki-laki di sebelahmu menyikut pelan.\n", delay_ketik);
        jeda(600);
        efek_ketik("'Eh, grogi nggak? Giliran kita bentar lagi nih.', bisiknya pelan.\n", delay_ketik);
        jeda(400);

        efek_ketik("1) Biasa aja sih. Siapin mental aja.\n", delay_ketik);
        efek_ketik("2) Hehe, iya nih, lumayan. Bingung mau ngomong apa.\n", delay_ketik);
        efek_ketik("3) (Hanya tersenyum dan mengangguk pelan)\n", delay_ketik);
        int pilihan_interaksi = baca_pilihan(3);
        hapus_layar();

        switch (pilihan_interaksi) {
            case 1:
                efek_ketik("'Wih, sangar. Santai banget kayaknya. Aku Rian.', dia tersenyum.\n", delay_ketik);
                kedekatan_rian += 1;
                break;
            case 2:
                efek_ketik("'Sama dong. Santai aja, yang penting ngomong. Aku Rian.', katanya mencoba menenangkan.\n", delay_ketik);
                kedekatan_rian += 2; // lebih akrab karena merasa senasib
                break;
            case 3:
                efek_ketik("'Oh, oke.', dia kembali menghadap ke depan.\n", delay_ketik);
                break;
        }
        jeda(1200);

        jeda_enter();
        hapus_layar();

        efek_ketik("\n'Oke, selanjutnya kamu!', Kak Alex menunjuk ke arahmu.\n", delay_ketik);
        jeda(600);

        efek_ketik("1) (Dengan tenang dan jelas) 'Selamat pagi semua, perkenalkan...'\n", delay_ketik);
        efek_ketik("2) (Dengan sedikit candaan) 'Halo teman-teman! Kenalin, nama aku...'\n", delay_ketik);
        efek_ketik("3) (Dengan suara agak pelan) 'Pagi... nama saya...'\n", delay_ketik);
        int pilihan_perkenalan = baca_pilihan(3);

        hapus_layar();
        efek_ketik("*Kamu berdiri dan menghadap ke teman-teman barumu.*\n\n", delay_ketik);
        switch (pilihan_perkenalan) {
            case 1:
                efek_ketik("'Selamat pagi semua. Perkenalkan, nama saya Ezra, dari SMP 1 Permata Bangsa. Saya suka seni digital, seperti fotografi.'\n", delay_ketik);
                efek_ketik("\n*Perkenalanmu lugas dan jelas. Beberapa teman mengangguk respect.*\n", delay_ketik);
                break;
            case 2:
                efek_ketik("'Halo teman-teman! Kenalin, nama aku Ezra, dari SMP 1 Permata Bangsa. Hobiku... tidur, hehe bercanda, aku suka... main game.'\n", delay_ketik);
                efek_ketik("\n*Beberapa teman tertawa kecil. Suasana jadi lebih cair.*\n", delay_ketik);
                kedekatan_umum += 1;
                break;
            case 3:
                efek_ketik("'(Dengan suara agak pelan) Pagi... nama saya Ezra, dari SMP 1 Permata Bangsa. Hobi saya... nonton film.'\n", delay_ketik);
                efek_ketik("\n*Kamu memperkenalkan diri dengan singkat dan kembali duduk.*\n", delay_ketik);
                break;
        }
        jeda(1500);

        hapus_layar();
        efek_ketik("*Sisa hari Pra-MPLS diisi dengan berbagai kegiatan.*\n", delay_ketik);
        jeda(800);
        efek_ketik("*Mulai dari membuat yel-yel gugus yang... agak memalukan, sampai permainan kecil untuk mengenal satu sama lain.*\n", delay_ketik);
        jeda(1000);
        efek_ketik("*Kamu lebih banyak mengamati, sesekali tertawa atau mengobrol singkat dengan Rian di sebelahmu.*\n", delay_ketik);
        jeda(1200);

        jeda_enter();
        hapus_layar();

        efek_ketik("*Tak terasa, bel pulang siang berbunyi menandakan berakhirnya hari Pra-MPLS.*\n", delay_ketik);
        jeda(600);
        efek_ketik("\n'Oke teman-teman Gugus 8, jangan lupa tugas membawa papan nama besok ya!", delay_ketik);
        efek_ketik("\nHati-hati di jalan!', seru Kak Alex menutup kegiatan.\n", delay_ketik);
        jeda(1000);

        hapus_layar();
        efek_ketik("*Suasana kelas langsung riuh. Semua orang bergegas merapikan barang dan keluar kelas.*\n", delay_ketik);
        jeda(800);
        efek_ketik("'Huft, saatnya pulang.', gumammu sambil menyandang tas.\n", delay_ketik);
        jeda(1000);

        efek_ketik("*Kamu berjalan keluar menyusuri koridor yang ramai.*\n", delay_ketik);
        jeda(1200);
        efek_ketik("*Saat hendak berbelok di persimpangan koridor...*\n", delay_ketik);
        jeda(1500);

        efek_ketik("\n*BRUK!*\n\n", 40); // efek tabrakan dibuat lebih cepat
        jeda(500);

        efek_ketik("Kamu tidak sengaja menabrak seseorang. Tumpukan buku yang dibawanya jatuh berantakan di lantai.\n", delay_ketik);
        jeda(800);
        efek_ketik("'Aduh!', ujar orang itu lirih.\n", delay_ketik);
        jeda(600);
        efek_ketik("*Di depanmu, gadis berambut pendek itu buru-buru memunguti buku-bukunya.*\n", delay_ketik);
        jeda(1000);

        efek_ketik("\n1) Bantu\n", delay_ketik);
        efek_ketik("2) Minta maaf\n", delay_ketik);
        efek_ketik("3) Diam saja\n", delay_ketik);
        int pilihan_insiden = baca_pilihan(3);

        hapus_layar();

        switch (pilihan_insiden) {
            case 1:
                efek_ketik("*Tanpa pikir panjang, kamu ikut berjongkok dan membantunya memunguti buku-buku itu.*\n", delay_ketik);
                jeda(800);
                efek_ketik("*Saat menyerahkan buku terakhir, jarimu tak sengaja bersentuhan dengan jarinya. "
                           "Untuk sesaat, matamu bertemu dengan matanya yang jernih.*\n", delay_ketik);
                jeda(1500);
                efek_ketik("'Eh... makasih banyak, ya!', ucapnya dengan senyum tipis yang manis, lalu ia bergegas pergi di tengah keramaian.\n", delay_ketik);
                kedekatan_kirana = 2; // kesan terbaik
                break;
            case 2:
                efek_ketik("*Kamu hanya berdiri dan meminta maaf. Gadis itu mengangguk kecil tanpa melihat ke arahmu.*\n", delay_ketik);
                jeda(800);
                efek_ketik("'Iya, nggak apa-apa kok.', jawabnya singkat sambil membereskan bukunya sendiri.\n", delay_ketik);
                jeda(1000);
                efek_ketik("*Setelah selesai, dia langsung berdiri dan berjalan cepat tanpamu sempat melihat wajahnya dengan jelas.*\n", delay_ketik);
                kedekatan_kirana = 1; // kesan netral
                break;
            case 3:
                efek_ketik("*Kamu hanya terdiam, sedikit membeku. Teringat kembali momen-momen canggung di masa SMP.*\n", delay_ketik);
                jeda(1200);
                efek_ketik("*Gadis itu membereskan semuanya sendiri. Dia sempat melirikmu sekilas dengan tatapan heran sebelum akhirnya pergi begitu saja.*\n", delay_ketik);
                kedekatan_kirana = 0; // kesan buruk/aneh
                break;
        }
        jeda(1200);
        efek_ketik("\n\n*Gadis itu menghilang di kerumunan. Hanya menyisakan kamu yang masih berdiri di koridor.*\n", delay_ketik);
        jeda(1000);
        efek_ketik("*'Siapa ya dia...?', benakmu bertanya-tanya.*\n", delay_ketik);
        jeda(1500);
    }
    // Part 2 Komplikasi
    jeda_enter();
    hapus_layar();

    efek_ketik("           // ============================== //         \n", delay_ketik);
    efek_ketik("           //    Bab II - Jejak Pertemuan    //         \n", delay_ketik);
    efek_ketik("           // ============================== //         \n", delay_ketik);
    jeda(3500);

    hapus_layar();

    efek_ketik("*Keesokan harinya, kamu tiba di sekolah untuk hari yang ditunggu-tunggu: MPLS.*\n", delay_ketik);
    jeda(800);
    efek_ketik("*Kamu kembali duduk di sebelah Rian di Gugus 8.*\n", delay_ketik);
    jeda(600);

    // Interaksi dengan Rian berdasarkan variabel kedekatan
    if (kedekatan_rian > 0) {
        efek_ketik("\n'Pagi, Ezra! Siap buat hari ini?' sapa Rian dengan ramah.\n", delay_ketik);
    } else {
        efek_ketik("\nRian hanya mengangguk singkat ke arahmu saat kamu duduk.\n", delay_ketik);
    }
    jeda(1000);

    efek_ketik("\nKak Alex masuk ke kelas dan tersenyum.\n", delay_ketik);
    jeda(600);
    efek_ketik("'Pagi semua! Hari ini kita ada tugas seru nih."
               " Kalian harus keliling sekolah dan minta 10 tanda tangan dari siswa gugus lain!', jelasnya.\n", delay_ketik);
    jeda(1200);
    efek_ketik("*Benakmu langsung terpikir seseorang: gadis yang kemarin.\n", delay_ketik);
    jeda(600);
    efek_ketik("'Kayaknya.. yang kemarin bisa buat kenalan sekalian,' gumammu.\n", delay_ketik);
    jeda(1600);

    jeda_enter();
    hapus_layar();

    // Mencari tanda tangan siswa gugus lain
    if (kedekatan_umum >= 1) {
        efek_ketik("'Guys, gimana kalau kita carinya bareng-bareng?', saran salah satu teman gugusmu\n", delay_ketik);
        jeda(600);
        efek_ketik("'Boleh juga nih, Ezra kamu ikut ga?', tanya Rian", delay_ketik);
        jeda(800);

        efek_ketik("\n1) Ikutan\n", delay_ketik);
        efek_ketik("2) Nggak dulu\n", delay_ketik);
        int cari_bareng = baca_pilihan(2);

        switch (cari_bareng) {
            case 1:
                efek_ketik("*Kamu akan mencari tanda tangan bersama teman-teman dari gugusmu.*\n", delay_ketik);
                jeda(600);
                efek_ketik("'Gas, aku ikut!', ucapmu dengan semangat\n", delay_ketik);
                jeda(1500);
                hapus_layar();
                efek_ketik("*Pencarian tanda tangan dilakukan.*\n", delay_ketik);
                jeda(1000);
                efek_ketik("...", delay_ketik);
                jeda(1500);
                jeda_enter();
                hapus_layar();
                break;
            case 2:
                efek_ketik("*Kamu memilih untuk mencari tanda tangan sendirian.*\n", delay_ketik);
                jeda(600);
                efek_ketik("'Maap, kayaknya aku lagi pengen cari sendiri nih', ucapmu.\n", delay_ketik);
                jeda(800);
                efek_ketik("'Ohh ya wis.. semangat yo Ez', ucap Rian.\n", delay_ketik);
                jeda(1500);
                efek_ketik("'Ya makasih', ucapmu.\n", delay_ketik);
                jeda(400);
                hapus_layar();
                efek_ketik("*Pencarian tanda tangan dilakukan.*\n", delay_ketik);
                jeda(2000);
                efek_ketik("...", delay_ketik);
                jeda(1500);
                jeda_enter();
                hapus_layar();
                break;
        }
    } else {
        efek_ketik("*Kamu mencari tanda tangan sendirian.*\n", delay_ketik);
        jeda(600);
        efek_ketik("'Oke aku harus nemu yang banyak nih', ucapmu.\n", delay_ketik);
        jeda(800);
        hapus_layar();
        efek_ketik("*Pencarian tanda tangan dilakukan.*\n", delay_ketik);
        jeda(2000);
        efek_ketik("...", delay_ketik);
        jeda(1500);
        jeda_enter();
        hapus_layar();
    }

    // Mencari gadis itu
    efek_ketik("*Saat jam istirahat, kamu memutuskan untuk mencari dia.*\n", delay_ketik);
    jeda(600);
    efek_ketik("Di mana kamu akan mencarinya?\n", delay_ketik);
    efek_ketik("1) Perpustakaan\n", delay_ketik);
    efek_ketik("2) Kantin\n", delay_ketik);
    efek_ketik("3) Taman Sekolah\n", delay_ketik);
    int pilihan_cari = baca_pilihan(3);

    hapus_layar();

    switch (pilihan_cari) {
        case 1: // Perpustakaan
            efek_ketik("*Kamu masuk ke perpustakaan. Benar saja, kamu melihatnya duduk di pojok, sedang membaca buku.*\n", delay_ketik);
            jeda(1000);
            efek_ketik("*Kamu memberanikan diri untuk menghampirinya.*\n", delay_ketik);
            jeda(800);

            // Reaksi Kirana berdasarkan nilai sebelumnya
            if (kedekatan_kirana >= 2) {
                efek_ketik("'Hei, Ezra kan? Yang kemarin bantu aku. Makasih ya.', sapanya duluan dengan senyum tipis.\n", delay_ketik);
            } else if (kedekatan_kirana == 1) {
                efek_ketik("Dia mendongak saat kamu mendekat. 'Ya?', tanyanya.\n", delay_ketik);
            } else {
                efek_ketik("Dia terlihat sedikit kaget dan waspada saat kamu mendekat.\n", delay_ketik);
            }
            jeda(1000);

            efek_ketik("\nBagaimana caramu memulai percakapan?\n", delay_ketik);
            efek_ketik("1) 'Hai, maaf ganggu. Kamu lagi ngapain? Aku ke sini buat tugas MPLS, hehe'\n", delay_ketik);
            efek_ketik("2) 'Permisi, boleh minta tanda tangan untuk tugas MPLS?'\n", delay_ketik);
            int pilihan_dialog_perpus = baca_pilihan(2);

            if (pilihan_dialog_perpus == 1) {
                efek_ketik("\n*Kirana tersenyum. 'Btw aku Kirana. Lagi baca novel nih. Boleh kok'.\n", delay_ketik);
                efek_ketik("Kalian mengobrol sebentar sambil bertukar tanda tangan. Suasananya lebih menyenangkan.*\n", delay_ketik);
                kedekatan_kirana += 2; // interaksi sukses besar
            } else {
                efek_ketik("\n*'Oh, boleh.' Jawabnya singkat. "
                           "Kalian bertukar tanda tangan tanpa banyak bicara.*\n", delay_ketik);
                kedekatan_kirana += 1; // interaksi formal
            }
            break;

        case 2: // Kantin
        case 3: // Taman
            if (chance(40)) {
                efek_ketik("*Kamu melihat Kirana di sini.*\n", delay_ketik);
                jeda(400);
                efek_ketik("*Kamu memberanikan diri untuk menghampirinya.*\n", delay_ketik);
                jeda(800);

                // Reaksi Kirana berdasarkan nilai sebelumnya
                if (kedekatan_kirana >= 2) {
                    efek_ketik("'Hei, Ezra kan? Yang kemarin bantu aku. Makasih ya.', sapanya duluan dengan senyum tipis.\n", delay_ketik);
                } else if (kedekatan_kirana == 1) {
                    efek_ketik("Dia mendongak saat kamu mendekat. 'Ya?', tanyanya.\n", delay_ketik);
                } else {
                    efek_ketik("Dia terlihat sedikit kaget dan waspada saat kamu mendekat.\n", delay_ketik);
                }
                jeda(1000);

                hapus_layar();
                efek_ketik("\nBagaimana caramu memulai percakapan?\n", delay_ketik);
                efek_ketik("1) 'Hai, maaf ganggu. Kamu lagi ngapain? Aku ke sini buat tugas MPLS, hehe'\n", delay_ketik);
                efek_ketik("2) 'Permisi, boleh minta tanda tangan untuk tugas MPLS?'\n", delay_ketik);
                int pilihan_dialog_kantin_taman = baca_pilihan(2);

                if (pilihan_dialog_kantin_taman == 1) {
                    efek_ketik("\n*Kirana tersenyum. Btw, namaku Kirana. Aku istirahat doang nih. Boleh kok.'\n", delay_ketik);
                    efek_ketik("Kalian mengobrol sebentar sambil bertukar tanda tangan. Suasananya lebih menyenangkan.*\n", delay_ketik);
                    kedekatan_kirana += 2; // interaksi sukses besar
                } else {
                    efek_ketik("\n*'Oh, boleh.' Jawabnya singkat. "
                               "Kalian bertukar tanda tangan tanpa banyak bicara.*\n", delay_ketik);
                    kedekatan_kirana += 1; // interaksi formal
                }
            } else {
                    efek_ketik("*Kamu berkeliling, tapi tidak bisa menemukannya. Mungkin dia ada di tempat lain.*\n", delay_ketik);
                    jeda(800);
                    efek_ketik("*Kesempatan hari ini terlewatkan.*\n", delay_ketik);
                }
            break;
    }

    jeda_enter();
    hapus_layar();

    void act3_langkah_kecil();
    {
        efek_ketik("           // ================================= //         \n", delay_ketik);
        efek_ketik("           //    Bab III - Langkah Kecil        //         \n", delay_ketik);
        efek_ketik("           // ================================= //         \n", delay_ketik);
        jeda(3500);

        hapus_layar();
        efek_ketik("*Hari ketiga, hari terakhir MPLS. Suasananya lebih santai.*\n", delay_ketik);
        jeda(800);
        efek_ketik("*Siang harinya, semua gugus dikumpulkan di aula untuk pameran ekskul.*\n", delay_ketik);
        jeda(800);
        efek_ketik("*Saat berjalan-jalan, matamu menangkap sosok Kirana yang sedang melihat stan Klub Film.*\n", delay_ketik);
        jeda(1000);

        efek_ketik("\nApa yang akan kamu lakukan?\n", delay_ketik);
        efek_ketik("1. Menghampiri stan itu dan pura-pura tertarik.\n", delay_ketik);
        efek_ketik("2. Hanya mengamatinya dari jauh.\n", delay_ketik);
        int pilihan_ekskul = baca_pilihan(2);

        hapus_layar();
        if (pilihan_ekskul == 1) {
            efek_ketik("*Kamu menghampiri stan Film. Kirana menyambutmu dengan senyum kecil.*\n", delay_ketik);
            jeda(800);
            efek_ketik("Seorang kakak kelas yang menjaga stan berkata, 'Wah, kayaknya ada calon anggota baru nih! Menurut kalian, film yang bagus itu kayak apa?'\n", delay_ketik);
            jeda(1200);
            efek_ketik("\nBagaimana kamu berdiskusi?\n", delay_ketik);
            efek_ketik("1.'Gimana kalau kita mulai dari premisnya?'\n", delay_ketik);
            efek_ketik("2.'Aku ikut aja kamu aja, hehe.'\n", delay_ketik);
            int pilihan_diskusi = baca_pilihan(2);

            if (pilihan_diskusi == 1) {
                efek_ketik("\n*Kirana terlihat antusias. 'Ide bagus! Aku setuju.' Kalian bertukar ide dengan lancar.*\n", delay_ketik);
                kedekatan_kirana += 2; // kerjasama sukses
            } else {
                efek_ketik("\n*Kirana mengangguk dan akhirnya dia yang lebih banyak memberikan ide. Kamu lebih banyak diam.*\n", delay_ketik);
                kedekatan_kirana += 1; // hadir tapi pasif
            }
        } else {
            efek_ketik("*Kamu hanya memandangnya dari jauh, terlalu ragu untuk mendekat. Satu lagi kesempatan lewat.*\n", delay_ketik);
        }

        jeda_enter();
        hapus_layar();

        efek_ketik("*Akhirnya, kegiatan MPLS telah usai*\n", delay_ketik);
        jeda(2000);
        hapus_layar();
        efek_ketik("*Langit mulai gelap, awan berwarna putih menjadi kelabu*\n", delay_ketik);
        jeda(1000);
        efek_ketik("*Hujan mulai turun cukup deras*\n", delay_ketik);
        jeda(1000);

        jeda_enter();
        hapus_layar();

        efek_ketik("*Kamu melihat Kirana sendirian di dekat gerbang, seperti kedinginan*\n", delay_ketik);
        jeda(1000);
        hapus_layar();
        efek_ketik("....\n", delay_ketik);
        jeda(1000);

        if (kedekatan_kirana >= 6) {
            //  ALUR AKRAB: KIRANA TERTARIK
            efek_ketik("*Kamu memutuskan untuk berjalan dengannya.*\n", delay_ketik);
            jeda(1000);
            efek_ketik("'Kirana, mau jalan bareng? Aku ada payung nih,' ajakmu\n", delay_ketik);
            efek_ketik("'Wah, boleh-boleh... baik banget kamu,' ucap Kirana sambil tersenyum.\n", delay_ketik);
            jeda(1000);
            efek_ketik("*Kalian berjalan berdua di bawah payung. Hujan membuat suasana menjadi hening.*\n", delay_ketik);
            jeda(1000);
            efek_ketik("'Ezra... makasih banyak ya,' ucap Kirana pelan. 'Kamu baik banget.'\n", delay_ketik);
            jeda(1200);
            efek_ketik("Tepat saat bus tiba, dia menatapmu. 'Eh, biar gampang kalau ada info... boleh minta nomormu?'\n", delay_ketik);
            jeda(1000);
            efek_ketik("\n*Jantungmu berdebar. Tanpa ragu kamu memberikan nomormu. Sepertinya, ini adalah awal dari sesuatu yang baru.*\n", delay_ketik);

        } else if (kedekatan_kirana >= 3) {
            //  ALUR NETRAL: EZRA HARUS BERJUANG
            efek_ketik("*Kamu memutuskan untuk berjalan dengannya.*\n", delay_ketik);
            jeda(1000);
            efek_ketik("'Kirana, mau jalan bareng? Aku ada payung nih,' ajakmu.\n", delay_ketik);
            efek_ketik("'Boleh deh', ucap Kirana dengan tersenyum.*\n", delay_ketik);
            jeda(1000);
            efek_ketik("*Kalian berjalan di bawah payung. Suasananya sedikit canggung, tapi tidak terlalu nyaman.*\n", delay_ketik);
            jeda(1000);
            efek_ketik("Saat bus tiba, Kirana tersenyum tulus.\n", delay_ketik);
            jeda(800);
            efek_ketik("'Makasih banyak ya, Ezra. Kamu nolong aku banget hari ini. Aku duluan!', ucapnya sebelum masuk bis.\n", delay_ketik);
            jeda(1200);
            efek_ketik("\n*Kamu mengangguk dan melihat bisnya menjauh. "
                       "Ada perasaan hangat di dadamu. Kamu tahu, jika ingin lebih dekat, kamulah yang harus mengambil langkah selanjutnya.*\n", delay_ketik);

        } else {
            //  ALUR NEGATIF: EZRA MENYERAH
            efek_ketik("*Kamu berjalan pulang sendirian di tengah gerimis, merasakan penyesalan yang familiar.*\n", delay_ketik);
            jeda(1200);
            efek_ketik("*Semua kesempatan selama tiga hari ini terlintas di benakmu, dan semuanya kamu sia-siakan.*\n", delay_ketik);
            jeda(1200);
            efek_ketik("Kamu menghela napas. 'Sudahlah. Mungkin memang lebih baik begini. Fokus saja pada sekolah.'\n", delay_ketik);
            jeda(1000);
            efek_ketik("\n*Kamu memutuskan untuk mengubur perasaan itu dalam-dalam, sebelum perasaan itu makin tumbuh.*\n", delay_ketik);
        }
    }
    jeda_enter();
    hapus_layar();

    void act4_epilogue();
    {
        efek_ketik("           // ========================= //         \n", delay_ketik);
        efek_ketik("           //     Bab IV - Epilog       //         \n", delay_ketik);
        efek_ketik("           // ========================= //         \n", delay_ketik);
        jeda(3500);
        hapus_layar();

        efek_ketik("*Satu minggu kemudian...*\n", delay_ketik);
        jeda(1000);
        efek_ketik("*Hari pertama masuk sebagai siswa SMA sesungguhnya. Kamu duduk di kelas barumu, X 4.*\n", delay_ketik);
        jeda(1200);

        if (kedekatan_kirana >= 6) {
            // --- EPILOG ALUR AKRAB ---
            efek_ketik("*Suasana masih sedikit canggung, kamu belum kenal siapa-siapa di kelas ini.*\n", delay_ketik);
            jeda(1000);
            efek_ketik("*Tiba-tiba, HP-mu bergetar pelan di dalam saku.*\n", delay_ketik);
            jeda(800);
            efek_ketik("*Sebuah pesan masuk dari nomor yang baru kamu simpan: Kirana.*\n\n", delay_ketik);
            jeda(1200);
            efek_ketik("    [Pesan Teks]\n", delay_ketik);
            efek_ketik("    Kirana: 'Ezra, kamu kelas apa? Aku di X 2. Nanti istirahat ke kantin bareng, mau?'\n\n", delay_ketik);
            jeda(1500);
            efek_ketik("*Kamu tersenyum sambil mengetik balasan. Perjalananmu di SMA ini... sepertinya tidak akan sepi.*\n", delay_ketik);

        } else if (kedekatan_kirana >= 3) {
            // --- EPILOG ALUR NETRAL ---
            efek_ketik("*Matamu melihat ke seluruh penjuru kelas, mencari wajah-wajah yang familiar.*\n", delay_ketik);
            jeda(1000);
            efek_ketik("*Sayangnya, Kirana tidak ada di kelasmu. Rian juga tidak.*\n", delay_ketik);
            jeda(1200);
            efek_ketik("*Saat istirahat, kamu berjalan sendirian di koridor. Dari kejauhan, kamu melihat Kirana sedang tertawa bersama teman-teman barunya.*\n", delay_ketik);
            jeda(1500);
            efek_ketik("*Mata kalian bertemu sekilas. Dia memberimu sebuah senyuman kecil yang sopan, sebelum kembali mengobrol.*\n\n", delay_ketik);
            jeda(1200);
            efek_ketik("*Senyuman itu memberimu sedikit harapan. Kisah ini belum berakhir, tapi kamu sadar, perjuangan baru saja akan dimulai.*\n", delay_ketik);

        } else {
            // --- EPILOG ALUR NEGATIF ---
            efek_ketik("*Kamu menunduk, fokus pada buku catatan di atas mejamu. Kamu sudah bertekad untuk tidak memikirkan hal lain selain pelajaran.*\n", delay_ketik);
            jeda(1500);
            efek_ketik("*Saat jam istirahat, kamu memutuskan untuk pergi ke perpustakaan, mencari ketenangan.*\n", delay_ketik);
            jeda(1000);
            efek_ketik("*Di persimpangan koridor, kamu melihatnya—Kirana. Dia sedang berjalan ke arah yang berlawanan.*\n", delay_ketik);
            jeda(1200);
            efek_ketik("*Ada sepersekian detik di mana kamu ingin mengangkat kepala dan menyapa. Tapi kamu mengurungkan niat itu.*\n\n", delay_ketik);
            jeda(1200);
            efek_ketik("*Kamu kembali menunduk dan terus berjalan, membiarkan momen itu lewat begitu saja. Sama seperti sebelumnya.*\n", delay_ketik);
        }
    }

    // Terima kasih dan penutup
    jeda_enter();
    hapus_layar();
    efek_ketik("=======================================================\n", delay_ketik);
    efek_ketik("                 Thanks for Playing    :)              \n", delay_ketik);
    efek_ketik("=======================================================\n", delay_ketik);
    efek_ketik("\nSemoga kamu telah menikmati permainan ini!\n", delay_ketik);
    jeda(2000);

    return 0;
}
