#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

struct pasien {
    char nama_pasien[100], keluhan[50];
    int umur_pasien,id_pasien, tgl_pasien;
    pasien *next;
};

struct dokter {
    char nama_dokter[100], spesialis[50];
    int umur_dokter, id_dokter, tgl_dokter;
    dokter *next;
};


void Linkedlist_pasien() {
}

void Linkedlist_dokter(){
}

void tambahakhir_pasien() {
}

void tambahakhir_dokter() {
}

void simpan_file_pasien() {
}

void simpan_file_dokter() {
}

void load_file_pasien() {

}

void load_file_dokter() {

}

void tampil_dokter() {

}

void tampil_pasien() {

}

int main() {
    int pilih;
    do {
        system("cls");
        cout << "--------------Menu--------------" << endl;
        cout << "1. Buat daftar pasien" << endl;
        cout << "2. Buat daftar dokter" << endl;
        cout << "3. Tambah pasien di Akhir " << endl;
        cout << "4. Tambah dokter di Akhir " << endl;
        cout << "5. Hapus pasien" << endl;
        cout << "6. Hapus dokter" << endl;
        cout << "7. cari pasien" << endl;
        cout << "8. cari dokter" << endl;
        cout << "9. list kunjungan" << endl;
        cout << "10. tampilkan data" <<  endl;
        cout << "11. keluar program" <<  endl;
        cout << "pilih menu: ";
        cin >> pilih;
        cin.ignore();

        switch (pilih) {
            case 1:
                break;
            
            case 2:
                break;

            case 3: 
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                break;
            
            case 8:
                break;

            case 9:
                break;

            case 10:
                break;

            case 11:
                break;

        }

    }
}