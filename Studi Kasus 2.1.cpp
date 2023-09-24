#include <iostream>
using namespace std;

int main() {
    string noplat, merek, type, warna;
    int tahun;
   
	cout << "======FILKOM TOUR & TRAVEL========" << endl;
    cout << endl;
    cout << "Noplat :";
    getline (cin,noplat);
    cout << "Merek :";
    cin >> merek;
    cout << "Type :";
    cin >> type;
    cout << "Warna :";
    cin >> warna;
    cout << "Tahun Keluaran :";
    cin >> tahun;
    cout << endl;
    cout << "========== FILKOM TOUR & TRAVEL ==========" << endl;
    cout << "============= DATA MOBIL =============" << endl;
    cout << endl;
    cout << "Noplat : ";
    cout << noplat << endl;
    cout << "Merek : ";
    cout << merek << endl;
    cout << "Type : ";
    cout << type << endl;
    cout << "Warna Mobil : ";
    cout << warna << endl;
    cout << "Tahun Keluaran : ";
    cout << tahun << endl;
    return 0;
}
