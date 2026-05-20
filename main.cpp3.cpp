#include <iostream>
#include <string>
using namespace std;

struct hotel {
    string nama_tamu;
    string nama_kamar;
    int harga_per_malam;
    int jumlah_malam;
    long subtotal;
    long diskon;
    long total_bayar;
    long bayar;
    long kembalian;
    string bonus;
};

int main() {

    hotel h[3];
    int pilihan;

    cout << "===== SISTEM PEMESANAN HOTEL =====\n\n";

    for (int i = 0; i < 3; i++) {

        cout << "Pemesanan Ke-" << i + 1 << endl;

        // INPUT NAMA TAMU
        cout << "Masukan nama tamu = ";
        cin >> h[i].nama_tamu;

        cout << "\nPilih Jenis Kamar\n";
        cout << "1. kelas bawwah   = 300000\n";
        cout << "2. kelas menengah = 600000\n";
        cout << "3. kelas atas     = 12000000\n";
        cout << "Masukan pilihan = ";
        cin >> pilihan;

        // MENENTUKAN KAMAR
        if (pilihan == 1) {

            h[i].nama_kamar = "kelas bawah";
            h[i].harga_per_malam = 300000;

        } else if (pilihan == 2) {

            h[i].nama_kamar = "kelas menengah";
            h[i].harga_per_malam = 600000;

        } else if (pilihan == 3) {

            h[i].nama_kamar = "kelas atas";
            h[i].harga_per_malam = 1200000;

        } else {

            cout << "Pilihan tidak tersedia!\n\n";
            i--;
            continue;
        }

        cout << "Jumlah malam = ";
        cin >> h[i].jumlah_malam;

        // HITUNG SUBTOTAL
        h[i].subtotal =
            h[i].harga_per_malam *
            h[i].jumlah_malam;

        // DISKON DAN BONUS
        if (h[i].subtotal > 1000000) {

            h[i].diskon =
                h[i].subtotal * 20 / 100;

            h[i].bonus =
                "Gratis Sarapan + Kolam Renang";

            cout << "Diskon 20%\n";

        } else if (h[i].subtotal > 750000) {

            h[i].diskon =
                h[i].subtotal * 10 / 100;

            h[i].bonus =
                "Gratis Sarapan";

            cout << "Diskon 10%\n";

        } else if (h[i].subtotal > 500000) {

            h[i].diskon =
                h[i].subtotal * 5 / 100;

            h[i].bonus =
                "Free WiFi Premium";

            cout << "Diskon 5%\n";

        } else {

            h[i].diskon = 0;

            h[i].bonus =
                "Tidak ada bonus";

            cout << "Tidak mendapat diskon\n";
        }

        // TOTAL BAYAR
        h[i].total_bayar =
            h[i].subtotal - h[i].diskon;

        cout << "Subtotal = "
             << h[i].subtotal << endl;

        cout << "Diskon = "
             << h[i].diskon << endl;

        cout << "Total bayar = "
             << h[i].total_bayar << endl;

        cout << "Bonus = "
             << h[i].bonus << endl;

        // INPUT PEMBAYARAN
        cout << "Masukan uang pembayaran = ";
        cin >> h[i].bayar;

        if (h[i].bayar < h[i].total_bayar) {

            cout << "Uang tidak cukup!\n";

            cout << "Kurang = "
                 << h[i].total_bayar - h[i].bayar
                 << endl;

        } else {

            h[i].kembalian =
                h[i].bayar - h[i].total_bayar;

            cout << "Kembalian = "
                 << h[i].kembalian << endl;
        }

        cout << "\n=============================\n\n";
    }

    // STRUK PEMBAYARAN
    cout << "\n===== STRUK PEMBAYARAN HOTEL =====\n\n";

    for (int i = 0; i < 3; i++) {

        cout << "Pemesanan Ke-" << i + 1 << endl;

        cout << "Nama tamu = "
             << h[i].nama_tamu << endl;

        cout << "Jenis kamar = "
             << h[i].nama_kamar << endl;

        cout << "Harga per malam = "
             << h[i].harga_per_malam << endl;

        cout << "Jumlah malam = "
             << h[i].jumlah_malam << endl;

        cout << "Subtotal = "
             << h[i].subtotal << endl;

        cout << "Diskon = "
             << h[i].diskon << endl;

        cout << "Total bayar = "
             << h[i].total_bayar << endl;

        cout << "Bayar = "
             << h[i].bayar << endl;

        cout << "Kembalian = "
             << h[i].kembalian << endl;

        cout << "Bonus = "
             << h[i].bonus << endl;

        cout << "-----------------------------\n";
    }

    return 0;
}