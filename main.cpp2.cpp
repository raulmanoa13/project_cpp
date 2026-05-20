#include <iostream>
#include <string>
using namespace std;

struct hotel {
    string nama;
    int harga_per_malam, jumlah_malam;
    long subtotal;
    long diskon;
    long total_bayar;
    long bayar;
    long kembalian;
    string bonus;
};

int main() {

    hotel h[3];

    cout << "===== SISTEM PEMBAYARAN HOTEL =====\n\n";

    for (int i = 0; i < 3; i++) {

        cout << "Data Pemesanan Ke-" << i + 1 << endl;

        cout << "Masukan nama tamu = ";
        cin >> h[i].nama;

        cout << "Masukan harga per malam = ";
        cin >> h[i].harga_per_malam;

        cout << "Masukan jumlah malam = ";
        cin >> h[i].jumlah_malam;

        h[i].subtotal =
            h[i].harga_per_malam * h[i].jumlah_malam;

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

        h[i].total_bayar =
            h[i].subtotal - h[i].diskon;

        cout << "Subtotal = "
             << h[i].subtotal << endl;

        cout << "Diskon = "
             << h[i].diskon << endl;

        cout << "Total Bayar = "
             << h[i].total_bayar << endl;

        cout << "Bonus = "
             << h[i].bonus << endl;

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

    // STRUK SEMUA DATA
    cout << "\n===== STRUK PEMBAYARAN =====\n\n";

    for (int i = 0; i < 3; i++) {

        cout << "Pemesanan Ke-" << i + 1 << endl;

        cout << "Nama kamar = "
             << h[i].nama << endl;

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