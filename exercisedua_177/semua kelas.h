#pragma
#ifndef KELAS_H
#define KELAS_H
#include <iostream>
#include <vector>
using namespace std;

class Penerbit {
public:
    string namaPenerbit;
    Penerbit(string nama) : namaPenerbit(nama) {}
    string getNamaPenerbit() {
        return namaPenerbit;
    }
};

class Pengarang {
public:
    string namaPengarang;
    vector<Penerbit*> penerbitDiikuti;
    Pengarang(string nama) : namaPengarang(nama) {}
    void tambahPenerbit(Penerbit* penerbit) {
        penerbitDiikuti.push_back(penerbit);
    }

    void displayPenerbitDiikuti() {
        cout << "Daftar penerbit yang diikuti \"" << namaPengarang << "\": ";
        for (Penerbit* penerbit : penerbitDiikuti) {
            cout << penerbit->getNamaPenerbit() << " ";
        }
        cout << endl;
    }

    string getNamaPengarang() {
        return namaPengarang;
    }
};

class Buku {
public:
    string judulBuku;
    Pengarang* pengarang;
    Buku(string judul, Pengarang* pengarang) : judulBuku(judul), pengarang(pengarang) {}
    void displayInfoBuku() {
        cout << "\nDaftar buku yang dikarang \"" << pengarang->getNamaPengarang() << "\": " << judulBuku << endl;
    }
};

#endif
