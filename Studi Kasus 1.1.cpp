#include <iostream>
using namespace std;
//tes
//tes1
int main() {
    string Nama, alamat, noTelp, kategori , kelamin;
    int gaji , umur;

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
    cout << "Umur :";
    cin >> umur;
    cout << "Kategori Karyawan :";
    cin >> kategori;
    cout << "Gaji :";
    cin >> gaji;
    cout << endl;
    kelamin = kelamin="L"? "LAKI -LAKI" :  "PEREMPUAN" ;
    cout << "==========  FILKOM TOUR & TRAVEL ==========" << endl;
    cout << "============= DATA KARYAWAN =============" << endl;
    cout << "Nama : " << Nama << endl;;
    cout << "Alamat : "<< alamat << endl;
    cout << "No Telepon : "<< noTelp << endl;
    cout << "Jenis Kelamin : "<< kelamin<< endl;
    cout << "Umur : "<< umur<< endl;
    cout << "Kategori Karyawan : "<< kategori << endl;
    cout << "Gaji : Rp"<< gaji << endl;
    cout << "==================================" << endl;
    return 0;
}



