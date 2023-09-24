#include <iostream>
using namespace std;

int main() {
    string Nama, alamat, noTelp, kategori, laki , perempuan , kelamin;
    int tahun;
    laki = "LAKI -LAKI";
    perempuan = "PEREMPUAN";

    cout << "======FILKOM TOUR & TRAVEL========" << endl;
    cout << endl;
    cout << "Nama :";
    getline (cin,Nama);
    cout << "Alamat :";
    getline (cin,alamat);
    cout << "No Telepon :";
    cin >> noTelp;
    cout << "Jenis Kelamin (L/P) :";
    cin >> kelamin;
    cout << "Kategori Karyawan :";
    cin >> kategori;
    cout << endl;
    kelamin = kelamin="L"? laki :perempuan ;
    cout << "==========  FILKOM TOUR & TRAVEL ==========" << endl;
    cout << "============= DATA KARYAWAN =============" << endl;
    cout << endl;
    cout << "Nama :";
    cout << Nama << endl;
    cout << "Alamat :";
    cout << alamat << endl;
    cout << "No Telepon :";
    cout << noTelp << endl;
    cout << "Jenis Kelamin (L/P) :";
    cout << kelamin<< endl;
    cout << "Kategori Karyawan :";
    cout << kategori << endl;
    cout << endl;
    cout << "==================================" << endl;
    return 0;
}



