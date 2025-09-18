/*
Judul Program            : Sebuah Perjalanan Awal
Nama                     : Gamma Assyafi Fadhillah Ar Rasyad
NIM.                     : L0125013
Kelas                    : A
Mata Kuliah              : Informatika
Dosen Pengampu           : Prof. Drs. Bambang Harjito, M.App.Sc, Ph.D.
Asisten Dosen Pengampu   : Andradhi Bondan Pamungkas dan Muhamad Nabil Fannani
*/

//Bagian Praprosesor
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//Bagian sistem efek ketik dan pilihan
int cepat_ketik = 20;

void efek_ketik(const char *s, int delay_ms){
    for(int i=0; s[i] != '\0'; i++){
        putchar(s[i]);
        fflush(stdout);
        Sleep(delay_ms);
    }
}

void jeda_enter(){
    efek_ketik("\n\n[Enter untuk Lanjut]",cepat_ketik);
    getchar();
}

void hapus_layar(){
    system("cls");
}

int baca_pilihan(int max){
    int x;
    while (1){
        efek_ketik("\n> Pilih: ", cepat_ketik);
        if (scanf("%d", &x) == 1 && x >= 1 && x <= max){
            while (getchar()!='\n');
            return x;
        }
        while (getchar()!='\n');
        efek_ketik("Masukkan angka yang ada\n", cepat_ketik);
    }
}

//Kondisi permainan
    //Perasaan
int karisma = 0;
int kedekatan_umum = 0;
int energi = 0;
int kedekatan_rian = 0;
int kesan_kirana = 0;

    //Kegiatan
int berangkat = 0;
int fotbar = 0;
int jajan = 0;
int jawaban_partner = 0;
int act_day1 = 0;
int act_day2 = 0;
int act_day3 = 0;


//Bagian function main 
int main() {
hapus_layar();
    efek_ketik("=======================================================\n", cepat_ketik);
    efek_ketik("                    SELAMAT DATANG DI                  \n", cepat_ketik);
    efek_ketik("                CERITA PENDEK INTERAKTIF               \n", cepat_ketik);
    efek_ketik("=======================================================\n", cepat_ketik);
    printf("\n");

    efek_ketik("Sebelum memulai, pilih kecepatan tampilan teks:\n", cepat_ketik);
    efek_ketik("1) Normal\n", cepat_ketik);
    efek_ketik("2) Cepat\n", cepat_ketik);
    int cetik = baca_pilihan(2);
    switch (cetik) {
        case 1: cepat_ketik = 30; break;
        case 2: cepat_ketik = 20;  break;
    }

hapus_layar();
    efek_ketik("Selamat bermain!\n", cepat_ketik);
    efek_ketik("Dibuat oleh Gamma Assyafi Fadhillah Ar Rasyad\n", cepat_ketik);
    efek_ketik("NIM. L0125013\n", cepat_ketik);
        Sleep(2000);

hapus_layar();
    efek_ketik("            // ========================= //         \n", cepat_ketik);
    efek_ketik("            //      ACT O - Prologue     //         \n", cepat_ketik);
    efek_ketik("            // ========================= //         \n", cepat_ketik);
        Sleep(3500);

hapus_layar();
    efek_ketik("Tiga tahun... akhirnya selesai juga.\n", cepat_ketik);
        Sleep(800);
    efek_ketik("Semua malam yang kuhabiskan untuk belajar, semua pengorbanan itu...\n", cepat_ketik);
        Sleep(1000);
    efek_ketik("...terbayar dengan dua digit angka: 91.\n", cepat_ketik);
        Sleep(1000);
    efek_ketik("Harusnya ini terasa seperti kemenangan, kan?\n", cepat_ketik);
        Sleep(1500);
    efek_ketik("Tapi anehnya, yang terlintas di benakku justru bukan itu.\n", cepat_ketik);
        Sleep(1000);
    efek_ketik("Di antara riuh perayaan kelulusan, aku justru teringat sunyi.\n", cepat_ketik);
        Sleep(1000);
    efek_ketik("Teringat wajah-wajah yang hanya kulihat sekilas di koridor, tanpa pernah benar-benar kusapa.\n", cepat_ketik);
        Sleep(1500);
    efek_ketik("Bahkan... senyuman itu. Senyuman yang pernah ditujukan untukku,\n", cepat_ketik);
        Sleep(1000);
    efek_ketik("tapi kubalas hanya dengan palingan muka. Mungkin saja, aku hanya... belum siap.\n", cepat_ketik);
        Sleep(3000);

hapus_layar();
    efek_ketik("\n...............\n", cepat_ketik);
        Sleep(1000);

hapus_layar();
    efek_ketik("\nKurasa itu akan berubah...\n", cepat_ketik);
        Sleep(1000);
    efek_ketik("\natau enggak ._.\n", cepat_ketik);
        Sleep(2000);

hapus_layar();
    printf("\n");
    efek_ketik("                Sebuah Perjalanan Awal           \n", cepat_ketik);
    printf("\n");
        Sleep(3000);
    efek_ketik("brttt\n", cepat_ketik);
        Sleep(2000);
    efek_ketik("brttttt\n", cepat_ketik);
        Sleep(2000);
    efek_ketik("brtttttttt\n", cepat_ketik);
        Sleep(100);
jeda_enter();

hapus_layar();
     efek_ketik("           // ========================= //         \n", cepat_ketik);
     efek_ketik("           //   ACT I - The Beginning   //         \n", cepat_ketik);
     efek_ketik("           // ========================= //         \n", cepat_ketik);
        Sleep(3500);

hapus_layar();
    efek_ketik("*HPmu bergetar membangunkanmu di pagi hari*\n", cepat_ketik);
         Sleep(1000);
    efek_ketik("\n'Hoamm...', ngantuk banget gilak..\n", cepat_ketik);
        Sleep(600);
    efek_ketik("\n'Le, tangi.. wis awan lho. Ngko malah telat, ndang siap-siap mangkat', panggil ibumu dari dapur", cepat_ketik);
        Sleep(500);
jeda_enter();
    efek_ketik("\n'*Kamu beranjak dari kamarmu untuk bersiap-siap*\n", cepat_ketik);
        Sleep(600);

hapus_layar();
    efek_ketik("'Oke, Buku catatan udah, seragam rapi, sarapan udah, saatnya berangkat'\n", cepat_ketik);
        Sleep(1200);
    efek_ketik("\n'Sudah siap kak? Mau berangkat sendiri apa dianter sama ayah?'\n", cepat_ketik);
    efek_ketik("1) Diantarkan ayah\n", cepat_ketik);
    efek_ketik("2) Berangkat sendiri\n", cepat_ketik);
    berangkat = baca_pilihan(2);

int tiba_menit = 0; // 06:40 = 400 menit, 06:50 = 410 menit
    switch (berangkat) {
        case 1: // Dianter ayah
            hapus_layar();
            tiba_menit = 6*60 + 40;
                efek_ketik("\nAyah menstarter mobil. Radio nyala pelan, jalanan lancar.\n", cepat_ketik);
                    Sleep(1520);
                efek_ketik("*Kamu tiba sekitar 06.40. Rasanya tenang dan rapi*\n", cepat_ketik);
                    Sleep(600);
                // status
                energi  += 1;         // tidak lelah dan senang
            break;

        case 2: // Angkot
            hapus_layar();
            tiba_menit = 6*60 + 50;
                efek_ketik("*Kamu memutuskan untuk berangkat sendiri*\n", cepat_ketik);
                    Sleep(400);
                efek_ketik("\n'Kakak mau berangkat sendiri yah.', ucapmu\n", cepat_ketik);
                efek_ketik("\n*Karena ini masih awal-awal SMA, kamu tidak diizinkan menggunakan motor oleh orang tua*\n", cepat_ketik);
                efek_ketik("'Naik angkot ya? Ati-ati di jalan', pesan ayahmu\n", cepat_ketik);
                efek_ketik("\n'Iya, izin pamit yah.', ucapmu sekaligus bersalam\n", cepat_ketik);
                    Sleep(400);
            hapus_layar();            

            hapus_layar();
                efek_ketik("'tap tap tap', kakimu langkah demi langkah\n", cepat_ketik);
                    Sleep(800);
                efek_ketik("\n*Kamu jalan ke pinggir jalan*\n", cepat_ketik);
                    Sleep(600);
                efek_ketik("\nAku bakal nunggu angkot  di sini aja\n", cepat_ketik);
                    Sleep(1200);
            hapus_layar();
                efek_ketik("...\n", cepat_ketik);
                    Sleep(800);

            hapus_layar();
                efek_ketik("\"Serius ini angkot kok belum lewat juga?\" gumammu.\n", cepat_ketik);
                    Sleep(1600);

            hapus_layar();
                efek_ketik("...\n", cepat_ketik);
                    Sleep(1000);
                efek_ketik("\"Nah itu akhirnya ada, lama amat dah.\n", cepat_ketik);
                    Sleep(600);
                efek_ketik("\"*Kamu naik angkot*\n", cepat_ketik);
                    Sleep(1000);
                efek_ketik("*Kamu tiba sekitar 06.50. Sedikit keringatan*\n", cepat_ketik);
                // status
                energi  -= 1;         // sedikit lelah
            break;
    }

//Ikut kegiatan Pra-MPLS
hapus_layar();
    efek_ketik("*Kamu bergegas mengikuti arahan dari panitia*\n", cepat_ketik);
        Sleep(800);
    efek_ketik("\n'Aku baris di belakang aja, sekalian naruh tas di belakang\n", cepat_ketik);
        Sleep(1200);
    efek_ketik("\n'*Kamu mengikuti apel pagi*\n", cepat_ketik);
        Sleep(1000);

jeda_enter();
hapus_layar();
    efek_ketik("...\n", cepat_ketik);
        Sleep(600);
    efek_ketik(".....\n", cepat_ketik);
        Sleep(1000);
    hapus_layar();

    efek_ketik("*Sekarang pembagian kelompok gugus kelas*\n", cepat_ketik);
        Sleep(600);
hapus_layar();
    efek_ketik("...\n", cepat_ketik);
        Sleep(1000);
hapus_layar();
    efek_ketik("\n'Apakah..\n", cepat_ketik);
        Sleep(800);
    efek_ketik("\n'gadis itu...'\n", cepat_ketik);
        Sleep(800);
hapus_layar();
    efek_ketik("*Kamu mendapatkan gugus kelas X-8\n", cepat_ketik);
        Sleep(1000);

hapus_layar();
    efek_ketik("*Kamu berkumpul dengan kelompok gugusmu*\n", cepat_ketik);
        Sleep(600);
    efek_ketik("\n'Selamat pagi teman-teman semuanya!', sapa ceria dari kakak pengampu gugus", cepat_ketik);
        Sleep(600);
    efek_ketik("\n'Perkenalkan, nama Kakak, Alex. Kakak yang bakal jadi pengampu kalian di Gugus 8 ini. Salam kenal ya!', lanjutnya sambil tersenyum ramah.\n", cepat_ketik);
    Sleep(800);
    efek_ketik("\n'Biar kita makin akrab, kita mulai dari perkenalan dulu, gimana? Sebutin nama, asal SMP, sama satu hal yang kalian suka. Dimulai dari kamu yang paling depan!', tunjuk Kak Alex.\n", cepat_ketik);
    Sleep(1000);

jeda_enter();
hapus_layar();
    efek_ketik("*Satu per satu teman barumu mulai memperkenalkan diri. Ada yang terdengar percaya diri, ada yang sedikit gugup.*\n", cepat_ketik);
    Sleep(1200);
    efek_ketik("*Jantungmu sedikit berdebar saat giliranmu semakin dekat.*\n", cepat_ketik);
    Sleep(800);

    efek_ketik("\nSeorang anak laki-laki di sebelahmu menyikut pelan.\n", cepat_ketik);
    Sleep(600);
    efek_ketik("'Eh, grogi nggak? Giliran kita bentar lagi nih.', bisiknya pelan.\n", cepat_ketik);
    Sleep(400);

    efek_ketik("1) Biasa aja sih. Siapin mental aja.\n", cepat_ketik);
    efek_ketik("2) Hehe, iya nih, lumayan. Bingung mau ngomong apa.\n", cepat_ketik);
    efek_ketik("3) (Hanya tersenyum dan mengangguk pelan)\n", cepat_ketik);
    int pilihan_interaksi = baca_pilihan(3);
hapus_layar();

    switch (pilihan_interaksi) {
        case 1:
            efek_ketik("'Wih, keren. Santai banget kayaknya. Aku Rian.', dia tersenyum.\n", cepat_ketik);
            karisma += 1;
            kedekatan_rian += 1;
            break;
        case 2:
            efek_ketik("'Sama dong. Santai aja, yang penting ngomong. Aku Rian.', katanya mencoba menenangkan.\n", cepat_ketik);
            kedekatan_rian += 2; // Lebih akrab karena merasa senasib
            break;
        case 3:
            efek_ketik("'Oh, oke.', dia kembali menghadap ke depan.\n", cepat_ketik);
            // Tidak ada perubahan status
            break;
    }
        Sleep(1200);

jeda_enter();
hapus_layar();

    efek_ketik("\n'Oke, selanjutnya kamu!', Kak Alex menunjuk ke arahmu.\n", cepat_ketik);
        Sleep(600);

    efek_ketik("1) (Dengan tenang dan jelas) 'Selamat pagi semua, perkenalkan...'\n", cepat_ketik);
    efek_ketik("2) (Dengan sedikit candaan) 'Halo teman-teman! Kenalin, nama gue...'\n", cepat_ketik);
    efek_ketik("3) (Dengan suara agak pelan) 'Pagi... nama saya...'\n", cepat_ketik);
int pilihan_perkenalan = baca_pilihan(3);

hapus_layar();
    efek_ketik("*Kamu berdiri dan menghadap ke teman-teman barumu.*\n\n", cepat_ketik);
    switch (pilihan_perkenalan) {
        case 1:
            efek_ketik("'Selamat pagi semua. Perkenalkan, nama saya Ezra, dari SMP 1 Surakarta. Saya suka seni digital, seperti fotografi.'\n", cepat_ketik);
            efek_ketik("\n*Perkenalanmu lugas dan jelas. Beberapa teman mengangguk respect.*\n", cepat_ketik);
            karisma += 2;
            break;
        case 2:
            efek_ketik("'Halo teman-teman! Kenalin, nama aku Ezra, dari SMP 1 Surakarta. Hobiku... tidur, hehe bercanda, aku suka... main game.'\n", cepat_ketik);
            efek_ketik("\n*Beberapa teman tertawa kecil. Suasana jadi lebih cair.*\n", cepat_ketik);
            karisma += 1;
            kedekatan_umum += 1; // Meningkatkan kedekatan umum dengan gugus
            break;
        case 3:
            efek_ketik("'(Dengan suara agak pelan) Pagi... nama saya Ezra, dari SMP 1 Surakarta. Hobi saya... nonton film.'\n", cepat_ketik);
            efek_ketik("\n*Kamu memperkenalkan diri dengan singkat dan kembali duduk.*\n", cepat_ketik);
            // Menunjukkan karakter pemalu, tidak ada perubahan status
            break;
    }
    Sleep(1500);

 hapus_layar();
    efek_ketik("*Sisa hari pertama Pra-MPLS diisi dengan berbagai kegiatan.*\n", cepat_ketik);
        Sleep(800);
    efek_ketik("*Mulai dari membuat yel-yel gugus yang... agak memalukan, sampai permainan kecil untuk mengenal satu sama lain.*\n", cepat_ketik);
        Sleep(1000);
    efek_ketik("*Kamu lebih banyak mengamati, sesekali tertawa atau mengobrol singkat dengan Rian di sebelahmu.*\n", cepat_ketik);
        Sleep(1200);

    jeda_enter();
    hapus_layar();

    efek_ketik("*Tak terasa, bel pulang berbunyi menandakan berakhirnya hari pertama.*\n", cepat_ketik);
        Sleep(600);
    efek_ketik("\n'Oke teman-teman Gugus 8, jangan lupa tugas membawa papan nama besok ya! Hati-hati di jalan!', seru Kak Alex menutup kegiatan.\n", cepat_ketik);
        Sleep(1000);

 hapus_layar();
    efek_ketik("*Suasana kelas langsung riuh. Semua orang bergegas merapikan barang dan keluar kelas.*\n", cepat_ketik);
        Sleep(800);
    efek_ketik("'Huft, saatnya pulang.', gumammu sambil menyandang tas.\n", cepat_ketik);
        Sleep(1000);

    efek_ketik("*Kamu berjalan keluar menyusuri koridor yang ramai.*\n", cepat_ketik);
        Sleep(1200);
    efek_ketik("*Saat hendak berbelok di persimpangan koridor...*\n", cepat_ketik);
        Sleep(1500);

efek_ketik("\n*BRUK!*\n\n", 40); // Efek tabrakan dibuat lebih cepat
        Sleep(500);

    efek_ketik("Kamu tidak sengaja menabrak seseorang. Tumpukan buku yang dibawanya jatuh berantakan di lantai.\n", cepat_ketik);
        Sleep(800);
    efek_ketik("'Aduh!', ujar orang itu lirih.\n", cepat_ketik);
        Sleep(600);
    efek_ketik("*Di depanmu, gadis berambut pendek itu buru-buru memunguti buku-bukunya.*\n", cepat_ketik);
        Sleep(1000);

    efek_ketik("\n1. Bantu.'\n", cepat_ketik);
    efek_ketik("2. Minta maaf.'\n", cepat_ketik);
    efek_ketik("3. Diam.\n", cepat_ketik);
    int pilihan_insiden = baca_pilihan(3);
    hapus_layar();

    switch (pilihan_insiden) {
        case 1:
            efek_ketik("*Tanpa pikir panjang, kamu ikut berjongkok dan membantunya memunguti buku-buku itu.*\n", cepat_ketik);
                Sleep(800);
            efek_ketik("*Saat menyerahkan buku terakhir, jarimu tak sengaja bersentuhan dengan jarinya. Untuk sesaat, matamu bertemu dengan matanya yang jernih.*\n", cepat_ketik);
                Sleep(1500);
            efek_ketik("'Eh... makasih banyak, ya!', ucapnya dengan senyum tipis yang manis, lalu ia bergegas pergi di tengah keramaian.\n", cepat_ketik);
            kesan_kirana = 2; // Kesan terbaik
            break;
        case 2:
            efek_ketik("*Kamu hanya berdiri dan meminta maaf. Gadis itu mengangguk kecil tanpa melihat ke arahmu.*\n", cepat_ketik);
                Sleep(800);
            efek_ketik("'Iya, nggak apa-apa kok.', jawabnya singkat sambil membereskan bukunya sendiri.\n", cepat_ketik);
                Sleep(1000);
            efek_ketik("*Setelah selesai, dia langsung berdiri dan berjalan cepat tanpamu sempat melihat wajahnya dengan jelas.*\n", cepat_ketik);
            kesan_kirana = 1; // Kesan netral
            break;
        case 3:
            efek_ketik("*Kamu hanya terdiam, sedikit membeku. Teringat kembali momen-momen canggung di masa SMP.*\n", cepat_ketik);
                Sleep(1200);
            efek_ketik("*Gadis itu membereskan semuanya sendiri. Dia sempat melirikmu sekilas dengan tatapan heran sebelum akhirnya pergi begitu saja.*\n", cepat_ketik);
            kesan_kirana = 0; // Kesan buruk/aneh
            break;
    }
        Sleep(1200);
    efek_ketik("\n\n*Gadis itu menghilang di kerumunan. Hanya menyisakan kamu yang masih berdiri di koridor.*\n", cepat_ketik);
        Sleep(1000);
    efek_ketik("*'Siapa ya dia...?', benakmu bertanya-tanya.*\n", cepat_ketik);
        Sleep(1500);

// CONTINUE HERE

//Thanks and closing from me <3
jeda_enter();
hapus_layar();
    efek_ketik("=======================================================\n", cepat_ketik);
    efek_ketik("                 Thanks for Playing    :)              \n", cepat_ketik);
    efek_ketik("=======================================================\n", cepat_ketik);
    efek_ketik("\nHope you've enjoyed this little game\n", cepat_ketik);
       Sleep(2000);

    return 0;
}
