// Nama : Kevin Bryan Kalengkongan
// NIM : 22021106016

#include <iostream>
using namespace std;

int main() {
    int gaji_pokok = 1500000;
    int tunjangan = 200000;
    int transport = 50000;
    int kompensasi = 10000;

    int lembur2j = gaji_pokok / 100 * 3;
    int lembur5j = (gaji_pokok / 100 * 9) + kompensasi;
    int lembur7j = gaji_pokok / 100 * 14;

    int l2j, l5j, l7j;

    cout << "Masukkan Jumlah Lembur 2 Jam = "; 
    cin >> l2j;
    cout << "Masukkan Jumlah Lembur 5 Jam = ";
    cin >> l5j;
    cout << "Masukkan Jumlah Lembur 7 Jam = ";
    cin >> l7j;

    int total_lembur = (l2j * lembur2j) + (l5j * lembur5j) + (l7j * lembur7j);

    int hari_masuk;
    cout << "Masukkan Hari Masuk = ";
    cin >> hari_masuk;

    int total_gaji = gaji_pokok + total_lembur + (hari_masuk * transport) + tunjangan;

    int lebar_garis = 43;

    cout << "+-------[Total Gaji Bulanan Karyawan]-------+" << endl;
    cout << "|                                           |" << endl;
    cout << "| Gaji kamu bulan ini adalah :              |" << endl;
    cout << "|                                           |" << endl;

    // Baris lembur 2 jam
    cout << "| > Banyak lembur 2 jam = " << l2j;
    cout << string(lebar_garis - 25 - to_string(l2j).length(), ' ') << "|" << endl;

    // Baris lembur 5 jam
    cout << "| > Banyak lembur 5 jam = " << l5j;
    cout << string(lebar_garis - 25 - to_string(l5j).length(), ' ') << "|" << endl;

    // Baris lembur 7 jam
    cout << "| > Banyak lembur 7 jam = " << l7j;
    cout << string(lebar_garis - 25 - to_string(l7j).length(), ' ') << "|" << endl;

    // Baris total uang lembur
    cout << "| > Total uang lembur = " << total_lembur;
    cout << string(lebar_garis - 23 - to_string(total_lembur).length(), ' ') << "|" << endl;

    // Baris hari masuk
    cout << "| > Hari masuk = " << hari_masuk;
    cout << string(lebar_garis - 16 - to_string(hari_masuk).length(), ' ') << "|" << endl;

    // Baris total uang transport
    cout << "| > Total uang transport = " << hari_masuk * transport;
    cout << string(lebar_garis - 26 - to_string(hari_masuk * transport).length(), ' ') << "|" << endl;

    cout << "|                                           |" << endl;
    cout << "| ----------------------------------------  |" << endl;

    // Baris total gaji bulan ini
    cout << "| Total Gaji bulan ini = " << total_gaji;
    cout << string(lebar_garis - 24 - to_string(total_gaji).length(), ' ') << "|" << endl;

    cout << "| ----------------------------------------  |" << endl;
    cout << "|                                           |" << endl;
    cout << "| *Catatan : GAJI BELUM TERMASUK POTONGAN   |" << endl;
    cout << "+-------------------------------------------+" << endl;


    system("pause");
}
