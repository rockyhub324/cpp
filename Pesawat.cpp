/*
KElOMPOK 14 : 
Rocky Gunawan   825250080
Billy Ariyanto  825250145
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

typedef struct
{
    char nama[20];
    char kls[20];
    char kursiA;
    int kursiY;
    char jenisbag;
    int h_kelas;
    int h_bagasi;
    int total_p;
} pemesanan;

void admin(bool *logad)
{
    char namasign[6], passsign[20];

    printf("\nMasukkan username: ");
    scanf("%s", namasign);
    printf("Masukkan password: ");
    scanf("%s", passsign);
    if (strcmp(namasign, "Admin") == 0 && strcmp(passsign, "Admin123") == 0)
    {
        printf("Login berhasil sebagai Admin.\n");
        *logad=false;
    }
    else
    {
        printf("Username atau password salah. Akses ditolak.\n");
        return;
    }
}

int kursi_x(char kursia)
{
    // ini buat ngubah kursiA(milih k0lom) jadi int, karena kursiA itu char
    int kursix;
    switch (kursia)
    {
    case 'A': kursix = 0; break;
    case 'B': kursix = 1; break;
    case 'C': kursix = 2; break;
    case 'D': kursix = 3; break;
    case 'E': kursix = 4; break;
    case 'F': kursix = 5; break;
    default: kursix = 0; break;
    }
    return kursix;
}

int bag_hitung(char jenbag)
{
    // ini buat nentuin harga bagasi berdasarkan jenbag(milih bagasi)
    int harbag;
    switch (jenbag)
    {
    case 'A': harbag = 100000; break;
    case 'B': harbag = 175000; break;
    case 'C': harbag = 300000; break;
    default: harbag = 0; break;
    }
    return harbag;
}

void hargafile()
{
    FILE *f = fopen("Harga.txt", "w");
    if (f == NULL)
    {
        printf("Gagal");
        return;
    }

    fprintf(f, "1. First Class : Rp 1.500.000\n2. Business Class : Rp.1.000.000\n3. Economy Class : Rp.600.000\n");
    fclose(f);

    printf("1. First Class : Rp 1.500.000\n2. Business Class : Rp.1.000.000\n3. Economy Class : Rp.600.000\n");
}
void bagasifile()
{
    FILE *f = fopen("Bagasi.txt", "w");
    if (f == NULL)
    {
        printf("Gagal");
        return;
    }

    fprintf(f, "Pilihan A: 0-5kg = Rp.100.000\nPilihan B: > 5-10kg = Rp.175.000\nPilihan C: >10-20kg = Rp.300.000\n");
    fclose(f);

    printf("Pilihan A: 0-5kg = Rp.100.000\nPilihan B: > 5-10kg = Rp.175.000\nPilihan C: >10-20kg = Rp.300.000\n");
}

void tabel_pesawat(int kursi[20][20])
{
    // buat ngeprint tablenya
    printf("UNTAR AIR\n");
    printf("          A    B    C    D    E    F \n");
    for (int i = 0; i < 15; i++)
    {
        printf("Baris %d", i + 1);
        for (int l = 0; l < 6; l++)
        {
            if (i < 9)
            {
                if (kursi[i][l] == 0)
                    printf("   _ ");
                else if (kursi[i][l] == 2)
                    printf("   X ");
                else if (kursi[i][l] == 3)
                    printf("   A ");
                else if (kursi[i][l] == 4)
                    printf("   B ");
                else if (kursi[i][l] == 5)
                    printf("   C ");
            }
            else
            {
                if (kursi[i][l] == 0)
                    printf("  _  ", kursi[i][l]);
                else if (kursi[i][l] == 2)
                    printf("  X  ", kursi[i][l]);
                else if (kursi[i][l] == 3)
                    printf("  A  ", kursi[i][l]);
                else if (kursi[i][l] == 4)
                    printf("  B  ", kursi[i][l]);
                else if (kursi[i][l] == 5)
                    printf("  C  ", kursi[i][l]);
            }
        }
        printf("\n");
    }

    FILE *f = fopen("kursi_.txt", "w");
    if (f == NULL)
    {
        printf("Gagal");
        return;
    }

    fprintf(f, "          A    B    C    D    E    F \n");
    for (int i = 0; i < 15; i++)
    {
        fprintf(f, "Baris %d", i + 1);
        for (int l = 0; l < 6; l++)
        {
            if (i < 9)
            {
                if (kursi[i][l] == 0)
                    fprintf(f, "   _ ");
                else if (kursi[i][l] == 2)
                    fprintf(f, "   X ");
                else if (kursi[i][l] == 3)
                    fprintf(f, "   A ");
                else if (kursi[i][l] == 4)
                    fprintf(f, "   B ");
                else if (kursi[i][l] == 5)
                    fprintf(f, "   C ");
            }
            else
            {
                if (kursi[i][l] == 0)
                    fprintf(f, "  _  ", kursi[i][l]);
                else if (kursi[i][l] == 2)
                    fprintf(f, "  X  ", kursi[i][l]);
                else if (kursi[i][l] == 3)
                    fprintf(f, "  A  ", kursi[i][l]);
                else if (kursi[i][l] == 4)
                    fprintf(f, "  B  ", kursi[i][l]);
                else if (kursi[i][l] == 5)
                    fprintf(f, "  C  ", kursi[i][l]);
            }
        }
        fprintf(f, "\n");
    }
    fclose(f);
}

void rekomendasi(pemesanan p[], int kelas, int kursi[20][20])
{
    // menampilkan rekomendasi kursi paling depan tiap kelas
    int i, n, en = 0;
    if (kelas == 1)
    {printf("\nRekomendasi Kursi Terbaik First:\n");i = 0, n = 1;}
    else if (kelas == 2)
    {printf("\nRekomendasi Kursi Terbaik Business:\n");i = 2, n =4;}
    else 
    {printf("\nRekomendasi Kursi Terbaik Economy:\n"); i = 5, n =14;}

    for (i; i <= n; i++)
    {
        for (int l = 0; l < 6; l++)
        {
            printf("Kursi Terbaik %c%d\n", 'A' + l, i + 1);
            en++;
            if (en == 6) return;
        }
    }
}

void tambah_pesanan(pemesanan p[], int kursi[20][20], int kursix[], int kursiy[], char kursia, char jenbag, int kelas)
{
    int first = 1500000, bisnis = 1000000, economy = 600000;
    int total_kursi, total, tot;
    char name[20];
    char bagasi[10];
    int i = 0;
    char setuju[10];
    int harga_bagasi[20];
    int jumor;
    int totalbag = 0;
    int harga = 0; 

    hargafile();
    printf("Pilih kelas penerbangan (1=First, 2=Business, 3=Economy): ");
    scanf("%d", &kelas);

    rekomendasi(p, kelas, kursi);

    printf("\nMau pesen berapa : ");
    scanf("%d", &jumor);

    // do while loop bakal dijalanin tergantung dari jumlah jumor
    do
    {
        printf("Nama : ");
        scanf("%s", name);

        printf("Pilih kursi yang diinginkan X (A-F): ");
        scanf(" %c", &kursia);
        kursix[i] = kursi_x(kursia); // ngubah char jadi int

        printf("Pilih Kursi yang dinginkan Y (1-15): ");
        scanf("%d", &kursiy[i]);

        // ini biar klo llu misalnya milih first class, lu gbakal bisa milih di luar baris first class jadi dia bakal continue
        if (kelas == 1 && (kursiy[i] > 2 || kursiy[i] < 1))
        {
            printf("Tidak bisa\n");
            continue;
        }
        else if (kelas == 2 && (kursiy[i] > 5 || kursiy[i] < 3))
        {
            printf("Tidak bisa\n");
            continue;
        }
        else if (kelas == 3 && (kursiy[i] > 15 || kursiy[i] < 6))
        {
            printf("Tidak bisa\n");
            continue;
        }

        // kenapa -1?? biar pas di print koordinat arraynya ga kelebihan 1 karena array mulai dari 0
        int row = kursiy[i] - 1;
        int col = kursix[i];

        if (row < 0 || row >= 15 || col < 0 || col >= 6)
        {
            printf("Kursi tidak valid! (baris 1-15, kolom A-F)\n");
            continue;
        }

        if (kursi[row][col] == 0)
        {
            kursi[row][col] = 2; // klo ga pake bagasi value arraynya 2

            // Tentukan harga berdasarkan baris kursi
            if (row >= 0 && row <= 1)
            {
                harga = first; // Baris 1-2: First Class
            }
            else if (row >= 2 && row <= 4)
            {
                harga = bisnis; // Baris 3-5: Business
            }
            else
            {
                harga = economy; // Baris 6-15: Economy
            }

            printf("Apakah mau bagasi (ya/tidak): ");
            scanf("%s", bagasi);

            if (strcmp(bagasi, "ya") == 0)
            {
                bagasifile();
                printf("Pilih (A/B/C): ");
                scanf(" %c", &jenbag);

                // ini klo pake bagasi, valuenya jadi 3/4/5
                switch (jenbag)
                {
                case 'A':
                case 'a':
                    kursi[row][col] = 3;
                    break;
                case 'B':
                case 'b':
                    kursi[row][col] = 4;
                    break;
                case 'C':
                case 'c':
                    kursi[row][col] = 5;
                    break;
                default:
                    jenbag = '-';
                    kursi[row][col] = 2;
                    break;
                }
            }
            else
            {
                jenbag = '-';
                harga_bagasi[i] = 0; // klo gapake bagasi jadi o
            }
        }
        else
        { // klo valuenya bukan 0
            printf("Kursi sudah terisi!\n");
            continue;
        }

        printf("Apakah yakin (ya/tidak): ");
        scanf("%s", setuju);

        if (strcmp(setuju, "ya") != 0)
        {
            kursi[row][col] = 0;
            printf("Pemesanan dibatalkan.\n");
            continue;
        }

        harga_bagasi[i] = bag_hitung(jenbag); // kan tdi udah milih jenbag, nah disini harga_bagasi diubah valuenya berdasarkan jenbag ,klo jenbag gada ya 0 jadinya
        tot = harga + harga_bagasi[i];        // ini harga perorang
        totalbag += harga_bagasi[i];          // ini buat ngitung total bagasi per pemesanan(misal pesen 2 org artinya total bagasi 2 org)

        time_t t = time(NULL);
        struct tm tm = *localtime(&t); // waktu pesen
        printf("\n--------------------- DETAIL PEMESANAN UNTAR AIR --------------------\n");
        printf("%-20s: %s\n", "Nama", name);
        printf("%-20s: %c%d\n", "Nomor Kursi", kursia, row + 1);
        printf("%-20s: %c\n", "Tambahan Bagasi", jenbag);
        printf("%-20s: Rp %d\n", "Harga Kursi", harga);
        printf("%-20s: Rp %d\n", "Harga Bagasi", harga_bagasi[i]);
        printf("%-20s: %s\n", "Kelas Penerbangan",
            (row >= 0 && row <= 1) ? "First" :
            (row >= 2 && row <= 4) ? "Business" :
                                        "Economy");
        printf("%-20s: %02d-%02d-%04d\n", "Tanggal Pemesanan",
            tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
        printf("%-20s: Rp %d\n\n", "Total", tot);


        FILE *f = fopen("Pemesanan.txt", "a");
        if (f == NULL)
        {
            printf("Gagal membuka file\n");
            return;
        }
        // ini buat masukin ke dalem file,  disini row ditambah 1 biar pas di file ga min 1
        if (kelas == 1)
        {
            fprintf(f, "%s First %c%d %c %d %d %d\n",
                    name, kursia, row + 1, jenbag, harga, harga_bagasi[i], tot);
        }
        else if (kelas == 2)
        {
            fprintf(f, "%s Business %c%d %c %d %d %d\n",
                    name, kursia, row + 1, jenbag, harga, harga_bagasi[i], tot);
        }
        else
        {
            fprintf(f, "%s Economy %c%d %c %d %d %d\n",
                    name, kursia, row + 1, jenbag, harga, harga_bagasi[i], tot);
        }
        fclose(f);

        i++; // orang selanjutnya

    } while (i < jumor);

    total_kursi = harga * jumor;
    total = totalbag + total_kursi;

    printf("\n------------------- RINGKASAN PEMESANAN -------------------\n");
    printf("Jumlah pemesanan: %d\n", jumor);
    printf("Total Pembayaran: Rp %d\n\n", total);
}

// buat masukin data di file ke array. print table tergantung ini, jadi klo dia diapus otomatis ke reset
void baca_file_print(pemesanan p[], int kursi[][20])
{
    int kursix[50];
    FILE *f = fopen("Pemesanan.txt", "r");
    if (f == NULL)
    {
        return;
    }

    int l = 0;
    // masukin ke struct
    while (fscanf(f, "%s %s %c%d %c %d %d %d",
                  p[l].nama,
                  p[l].kls,
                  &p[l].kursiA,
                  &p[l].kursiY,
                  &p[l].jenisbag,
                  &p[l].h_kelas,
                  &p[l].h_bagasi,
                  &p[l].total_p) == 8)
    {
        l++;
        if (l >= 100)
            break;
    }

    // ngubah value array berdasarkan struct
    for (int i = 0; i < l; i++)
    {
        kursix[i] = kursi_x(p[i].kursiA);
        int col = kursix[i];
        int row = p[i].kursiY - 1;

        if (strcmp(p[i].kls, "Business") == 0)
        {
            if (p[i].jenisbag == 'A')
                kursi[row][col] = 3;
            else if (p[i].jenisbag == 'B')
                kursi[row][col] = 4;
            else if (p[i].jenisbag == 'C')
                kursi[row][col] = 5;
            else
                kursi[row][col] = 2;
        }

        else if (strcmp(p[i].kls, "First") == 0)
        {
            if (p[i].jenisbag == 'A')
                kursi[row][col] = 3;
            else if (p[i].jenisbag == 'B')
                kursi[row][col] = 4;
            else if (p[i].jenisbag == 'C')
                kursi[row][col] = 5;
            else
                kursi[row][col] = 2;
        }

        else if (strcmp(p[i].kls, "Economy") == 0)
        {
            if (p[i].jenisbag == 'A')
                kursi[row][col] = 3;
            else if (p[i].jenisbag == 'B')
                kursi[row][col] = 4;
            else if (p[i].jenisbag == 'C')
                kursi[row][col] = 5;
            else
                kursi[row][col] = 2;
        }
    }
}

void batalkan(pemesanan p[], int kelas, char usn[20], int kursi[20][20], int kol_x, int baris_x)
{
    char pil[6];
    FILE *f = fopen("Pemesanan.txt", "r");
    if (f == NULL)
    {
        printf("Gagal membuka file\n");
        return;
    }

    printf("Yakin mau batalkan pesanan (ya/tidak); ");
    scanf("%s", pil);

    int i = 0;
    while (fscanf(f, "%s %s %c%d %c %d %d %d",
                  p[i].nama,
                  p[i].kls,
                  &p[i].kursiA,
                  &p[i].kursiY,
                  &p[i].jenisbag,
                  &p[i].h_kelas,
                  &p[i].h_bagasi,
                  &p[i].total_p) == 8)
    {
        i++;
    }

    fclose(f);

    f = fopen("Pemesanan.txt", "w");
    //bakal dicari nama yg user input di file, kalo ketemu pas overwrite file dia bakal diskip
    for (int s = 0; s < i; s++)
    {
        bool skp = false;
        int col = kursi_x(p[s].kursiA);
        int row = p[s].kursiY - 1;
        if (kelas == 1) 
        {
            if (strcmp(usn, p[s].nama) == 0 && (strcmp(p[s].kls, "First")) == 0 && col == kol_x && row == baris_x)
            {
                skp = true;
                if (strcmp(pil, "ya") != 0 && strcmp(pil, "Ya") != 0)
                {printf("Pemesanan tidak dibatalkan atas nama %s kelas %s\n", p[s].nama, p[s].kls);}
                else
                {kursi[row][col] = 0;printf("Pemesanan dibatalkan atas nama %s kelas %s\n", p[s].nama, p[s].kls);continue;}
            }
        }
        else if (kelas == 2)
        {
            if (strcmp(usn, p[s].nama) == 0 && strcmp(p[s].kls, "Business") == 0 && col == kol_x && row == baris_x)
            {
                skp = true;
                if (strcmp(pil, "ya") != 0 && strcmp(pil, "Ya") != 0)
                {printf("Pemesanan tidak dibatalkan atas nama %s kelas %s\n", p[s].nama, p[s].kls);}
                else{kursi[row][col] = 0; printf("Pemesanan dibatalkan atas nama %s kelas %s\n", p[s].nama, p[s].kls);continue;}
            }
        }
        else
        {
            if (strcmp(usn, p[s].nama) == 0 && strcmp(p[s].kls, "Economy") == 0 && col == kol_x && row == baris_x)
            {
                skp = true;
                if (strcmp(pil, "ya") != 0 && strcmp(pil, "Ya") != 0)
                {printf("Pemesanan tidak dibatalkan atas nama %s kelas %s\n", p[s].nama, p[s].kls);}
                else
                {kursi[row][col] = 0;printf("Pemesanan dibatalkan atas nama %s kelas %s\n", p[s].nama, p[s].kls);continue;
                }
            }
        }
        if (!skp)
        {
            fprintf(f, "%s %s %c%d %c %d %d %d\n",
            p[s].nama,
            p[s].kls,
            p[s].kursiA,
            p[s].kursiY,
            p[s].jenisbag,
            p[s].h_kelas,
            p[s].h_bagasi,
            p[s].total_p);
        }
    }
    fclose(f);
}

void statistik(int kelas, int kursi[20][20])
{
 int i, n, harga = 0, b, k = 6, hb = 0, sum = 0;
float pb, pk = 6.0;

if (kelas == 1)
{
    printf("\nDaftar Pemesanan Kursi First:\n");
    i = 0; 
    n = 1; 
    harga = 1500000; 
    b = 2; 
    pb = 2.0;
}
else if (kelas == 2)
{
    printf("\nDaftar Pemesanan Kursi Business:\n");
    i = 2; 
    n = 4; 
    harga = 1000000; 
    b = 3; 
    pb = 3.0;
}
else if (kelas == 3)
{
    printf("\nDaftar Pemesanan Kursi Economy:\n");
    i = 5; 
    n = 14; 
    harga = 600000; 
    b = 10; 
    pb = 10.0;
}
else if (kelas == 4)
{
    printf("\nDaftar Pemesanan Ketiga Kelas (Total Maskapai):\n");
    i = 0; 
    n = 14; 
    b = 15; 
    pb = 15.0;

    tabel_pesawat(kursi);
    printf("\n");

    for (int r = 0; r <= n; r++)
    {
        // menentukan harga dasar berdasarkan baris
        if (r >= 0 && r <= 1) harga = 1500000;
        else if (r >= 2 && r <= 4) harga = 1000000;
        else if (r >= 5 && r <= 14) harga = 600000;

        for (int l = 0; l < 6; l++)
        {
            if (kursi[r][l] == 2)
            {
                sum++;
                printf("Kursi %c%d: Terisi\n", 'A' + l, r + 1);
            }
            else if (kursi[r][l] == 3)
            {
                sum++;
                hb += 100000;
                printf("Kursi %c%d: Terisi dengan Bagasi A\n", 'A' + l, r + 1);
            }
            else if (kursi[r][l] == 4)
            {
                sum++;
                hb += 175000;
                printf("Kursi %c%d: Terisi dengan Bagasi B\n", 'A' + l, r + 1);
            }
            else if (kursi[r][l] == 5)
            {
                sum++;
                hb += 300000;
                printf("Kursi %c%d: Terisi dengan Bagasi C\n", 'A' + l, r + 1);
            }
        }
    }

    printf("\nTotal Kursi: %d", b * k);
    printf("\nTotal Kursi Kosong: %d", (b * k) - sum);
    printf("\nTotal Kursi Terisi: %d", sum);
    printf("\nPersentase Keterisian: %.2f%%", (sum / (pb * pk)) * 100);
    printf("\nTotal Pendapatan: Rp.%d\n", (sum * harga) + hb);

    return; // agar tidak lanjut ke blok bawah
}

if (kelas >= 1 && kelas <= 3)
{
    tabel_pesawat(kursi);

    for (int r = i; r <= n; r++)
    {
        for (int l = 0; l < 6; l++)
        {
            if (kursi[r][l] == 2)
            {
                sum++;
                printf("Kursi %c%d: Terisi\n", 'A' + l, r + 1);
            }
            else if (kursi[r][l] == 3)
            {
                sum++;
                hb += 100000;
                printf("Kursi %c%d: Terisi dengan Bagasi A\n", 'A' + l, r + 1);
            }
            else if (kursi[r][l] == 4)
            {
                sum++;
                hb += 175000;
                printf("Kursi %c%d: Terisi dengan Bagasi B\n", 'A' + l, r + 1);
            }
            else if (kursi[r][l] == 5)
            {
                sum++;
                hb += 300000;
                printf("Kursi %c%d: Terisi dengan Bagasi C\n", 'A' + l, r + 1);
            }
        }
    }

    printf("\nTotal Kursi: %d", b * k);
    printf("\nTotal Kursi Kosong: %d", (b * k) - sum);
    printf("\nTotal Kursi Terisi: %d", sum);
    printf("\nPersentase Keterisian: %.2f%%", (sum / (pb * pk)) * 100);
    printf("\nTotal Pendapatan: Rp.%d\n", (sum * harga) + hb);
}
}

// ngapus semua pemesanan
void reset(pemesanan p[], int kelas, char usn[20], int kursi[20][20])
{
    for (int i = 0; i < 15; i++)
    {
        for (int l = 0; l < 6; l++)
        {kursi[i][l] = 0;}
    }

    FILE *f = fopen("Pemesanan.txt", "w");
    if (f == NULL)
    {
        printf("Gagal membuka file\n");
        return;
    }
    fclose(f);
    printf("Reset Berhasil\n");
}

int main()
{
    pemesanan p[50];
    int kelas = 0;
    int kursi[20][20] = {0};
    int jum_orang;
    int kursix[20];
    int kursiy[20];
    char persetujuan[10], bagasi[10], jenbag;
    int menu;
    char kursia;
    int pilihan;
    bool logad = true;

    do
    {
        printf("\n------------------------- Menu Login --------------------------\n");
        printf("1. Login Admin\n2. Pesan Tiket\n3. Keluar\n");
        printf("Masukkan pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 1)
        {
            while(logad == true){
            admin(&logad);
            }

            do
            {
                printf("\n------------------------- Menu Admin --------------------------");
                baca_file_print(p, kursi);
                printf("\n1. Statistik dan Pendapatan\n2. Reset\n3. Keluar\n");
                printf("Pilih : ");
                scanf("%d", &menu);

                if (menu == 1)
                {
                    do
                    {
                    printf("Pilih kelas penerbangan (1=First, 2=Business, 3=Economy, 4=Ketiganya): ");
                    scanf("%d", &kelas);
                    statistik(kelas, kursi);
                    }while (kelas < 1 || kelas > 4);
                }
                if (menu == 2)
                {
                    reset(p, kelas, persetujuan, kursi);
                }
            } while (menu != 3);
            continue;
        }
        if (pilihan == 2)
        {
            do
            {
                printf("\n---------------------------- Menu ----------------------------");
                baca_file_print(p, kursi);
                printf("\n1. Mencari Kursi\n2. Pesan Kursi\n3. Batalkan Pesanan\n4. Keluar\n");
                printf("Pilih : ");
                scanf("%d", &menu);

                int cek = 0;
                int i = 0, pemesanan = 0;
                if (menu == 1)
                {
                    do
                    {
                        printf("\nFirst Class: Baris 1-2\nBusiness Class: Baris 3-5\nEconomy Class: Baris 6-15\n");
                        char kol;
                        int baris;
                        int lanjut_i = 0;

                        tabel_pesawat(kursi);
                        printf("Kursi mana yang ingin dicek (misal: A 1-15) : ");
                        scanf(" %c %d", &kol, &baris);

                        int col = kursi_x(kol);
                        int row = baris - 1;

                        if (row < 0 || row >= 15 || col < 0 || col >= 6)
                        {
                            printf("Kursi tidak valid! (baris 1-15, kolom A-F)\n");
                        }
                        else
                        {
                            if (kursi[row][col] == 0)
                            {
                                printf("Kosong\n");
                            }
                            else
                            {
                                printf("Sudah ada\n");
                            }
                        }
                        printf("Lanjut Mengecek (ya/tidak) : ");
                        scanf("%s", persetujuan);
                        if (strcmp(persetujuan, "ya") != 0)
                            break;
                        lanjut_i++;
                    } while (true);
                }

                if (menu == 2)
                {
                    tambah_pesanan(p, kursi, kursix, kursiy, kursia, jenbag, kelas);
                    tabel_pesawat(kursi);
                }

                if (menu == 3)
                {
                    char usn[20];
                    char kol;
                    int kol1 = kursi_x(kol);
                    int baris;
                    int kol_x;
                    int baris_x;

                    do
                    {
                        printf("Masukkan nama yang terdaftar pada tiket: ");
                        scanf("%s", usn);
                        printf("Pilih kelas penerbangan (1=First, 2=Business, 3=Economy): ");
                        scanf("%d", &kelas);
                        do
                        {
                            if (kelas == 1)
                            {
                                printf("Masukkan no kursi (Misal A 1-2): ");
                                scanf(" %c %d", &kol, &baris);
                                if (baris < 1 || baris > 2 || kol1 < 1 || kol1 > 6)
                                {
                                    break;
                                }
                                else
                                    printf("Harus baris 1-2\n");
                                continue;
                            }
                            if (kelas == 2)
                            {
                                printf("Masukkan no kursi (Misal A 3-5): ");
                                scanf(" %c %d", &kol, &baris);
                                if (baris < 3 || baris > 5 || kol1 < 1 || kol1 > 6)
                                {
                                    break;
                                }
                                else
                                    printf("Harus baris 3-5\n");
                                continue;
                            }
                            if (kelas == 3)
                            {
                                printf("Masukkan no kursi (Misal A 6-15): ");
                                scanf(" %c %d", &kol, &baris);
                                if (baris < 6 || baris > 15 || kol1 < 1 || kol1 > 6)
                                {
                                    break;
                                }
                                else
                                    printf("Harus baris 6-15\n");
                                continue;
                            }
                        } while (true);
                        kol_x = kursi_x(kol);
                        baris_x = baris - 1;
                    } while (kelas < 1 || kelas > 3);
                    batalkan(p, kelas, usn, kursi, kol_x, baris_x);
                }
            } while (menu != 4);
            continue;
        }
    } while (pilihan != 3);
     printf("\n------------------------ Terima Kasih -------------------------");
                baca_file_print(p, kursi);
    return 0;
}