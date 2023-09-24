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
    cout << "Noplat : "<< noplat << endl;
    cout << "Merek : "<< merek << endl;
    cout << "Type : "<< type << endl;
    cout << "Warna Mobil : "<< warna << endl;
    cout << "Tahun Keluaran : "<< tahun << endl;
    cout << "==================================" << endl;
    return 0;
}
