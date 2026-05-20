#include <iostream>
#include <string>
using namespace std;

struct belanjaan {
    string brg;
    int hrg, jml;
    long subttl;
};

int main() {

    belanjaan b[3];

    long total_bayar = 0;
    long bayar, kembalian;
    long diskon = 0;
    long total_setelah_diskon;
    string hadiah;

    for (int i = 0; i < 3; i++) {

        cout << "Masukan nama barang = ";
        cin >> b[i].brg;

        cout << "Masukan harga barang = ";
        cin >> b[i].hrg;

        cout << "Masukan jumlah barang = ";
        cin >> b[i].jml;

        b[i].subttl = b[i].hrg * b[i].jml;

        total_bayar += b[i].subttl;

        cout << "\nSub total harga = "
             << b[i].subttl;

        cout << "\n\n";
    }

    cout << "Total bayar = "
         << total_bayar << endl;

    // DISKON DAN HADIAH
    if (total_bayar > 100000) {

        diskon = total_bayar * 20 / 100;

        hadiah = "payung mini";

        cout << "Anda mendapat diskon 20%" << endl;

        cout << "Hadiah : "
             << hadiah << endl;

    } else if (total_bayar > 75000) {

        diskon = total_bayar * 10 / 100;

        hadiah = "Gantungan Kunci";

        cout << "Anda mendapat diskon 10%" << endl;

        cout << "Hadiah : "
             << hadiah << endl;

    } else if (total_bayar > 50000) {

        diskon = total_bayar * 5 / 100;

        hadiah = "Pulpen";

        cout << "Anda mendapat diskon 5%" << endl;

        cout << "Hadiah : "
             << hadiah << endl;

    } else {

        cout << "Anda tidak mendapat diskon" << endl;

        hadiah = "Tidak ada hadiah";

        cout << "Hadiah : "
             << hadiah << endl;
    }

    cout << "Jumlah diskon = "
         << diskon << endl;

    total_setelah_diskon = total_bayar - diskon;

    cout << "Total setelah diskon = "
         << total_setelah_diskon << endl;

    cout << "Masukan uang bayar = ";
    cin >> bayar;

    if (bayar < total_setelah_diskon) {

        cout << "Uang tidak cukup!" << endl;

        cout << "Kurang = "
             << total_setelah_diskon - bayar << endl;

    } else {

        kembalian = bayar - total_setelah_diskon;

        cout << "Kembalian = "
             << kembalian << endl;
    }

    return 0;
}