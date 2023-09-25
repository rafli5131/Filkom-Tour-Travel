#include <iostream>
using namespace std;

int main() {
    string noplat, merek, type, warna;
    int tahun; 
	float modifikasi;
   
	cout << "====== FILKOM TOUR & TRAVEL ========" << endl;
    cout << "Nomor Plat : ";
    getline (cin, noplat);
    cout << "Merek : ";
    getline (cin, merek);
    cout << "Tipe : ";
    cin >> type;
    cout << "Warna : ";
    cin >> warna;
    cout << "Tahun Keluaran : ";
    cin >> tahun;
    cout << "Modifikasi : ";
    cin >> modifikasi;
    cout << "          " << endl;
    
    cout << "====== FILKOM TOUR & TRAVEL ========" << endl;
	cout << "============ DATA MOBIL ============" << endl;
    cout << "Nomor Plat : " << noplat << endl;
    cout << "Merek : " << merek << endl;
    cout << "Tipe : " << type << endl;
    cout << "Warna : " << warna << endl;
    cout << "Tahun Keluaran : " << tahun << endl;
    cout << "Modifikasi : " << modifikasi << endl;
    cout << "==================================" << endl;
    return 0;
}
