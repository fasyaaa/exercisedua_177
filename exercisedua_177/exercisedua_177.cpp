#include <iostream>
#include <vector>
#include "semua kelas.h"
using namespace std;


int main() {
    Penerbit penerbit1("Gama Press");
    Penerbit penerbit2("Intan Pariwara");

    Pengarang pengarang1("Joko");
    Pengarang pengarang2("Lia");
    Pengarang pengarang3("Giga");
    Pengarang pengarang4("Asroni");

    pengarang1.tambahPenerbit(&penerbit1);
    pengarang1.tambahPenerbit(&penerbit2);
    pengarang2.tambahPenerbit(&penerbit1);
    pengarang3.tambahPenerbit(&penerbit2);
    pengarang4.tambahPenerbit(&penerbit2);

    cout << "\nDaftar pengarang pada penerbit \"" << penerbit1.getNamaPenerbit() << "\": \n" << pengarang1.getNamaPengarang() << endl;
    cout << pengarang2.getNamaPengarang() << endl;
    cout << pengarang3.getNamaPengarang() << endl;

    cout << "\nDaftar pengarang pada penerbit \"" << penerbit2.getNamaPenerbit() << "\": \n" << pengarang4.getNamaPengarang() << endl;
    cout << pengarang3.getNamaPengarang() << endl;

    Buku buku1("Fisika", &pengarang1);
    Buku buku2("Algoritma", &pengarang1);
    Buku buku3("Basisdata", &pengarang2);
    Buku buku4("Dasar Pemrograman", &pengarang4);
    Buku buku5("Matematika", &pengarang3);
    Buku buku6("Multimedia 1", &pengarang3);

    cout << "\nDaftar penerbit yang diikuti \"" << pengarang3.getNamaPengarang() << "\" : " << endl;
    cout << penerbit1.getNamaPenerbit() << endl;
    cout << penerbit2.getNamaPenerbit() << endl;

    buku1.displayInfoBuku();
    buku2.displayInfoBuku();
    buku3.displayInfoBuku();
    buku4.displayInfoBuku();
    buku5.displayInfoBuku();
    buku6.displayInfoBuku();

    return 0;
}
