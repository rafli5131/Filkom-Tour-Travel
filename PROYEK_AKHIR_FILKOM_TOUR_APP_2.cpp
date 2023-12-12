#include <iostream>
#include <iomanip>

using namespace std;

void on_the_route(int tujuan , int sewa){
     double base,total;
    // 1.Surabaya – Malang : 100.000
    // 2.Madura – Malang : 200.000
    // 3.Banyuwangi – Malang : 250.000
    // 4.Situbondo – Malang : 175.000
    // 5.Tulungagung – Malang :125.000

    switch (tujuan)
    {
    case 1:
        base = 100000;
        break;
    case 2:
        base = 200000;
        break;
    case 3:
        base = 250000;
        break;
    case 4:
        base = 175000;
        break;
    case 5:
        base = 125000;
        break;
    default:
        cout << "Invalid Tujuan" << endl;
        break;
    }

    if(sewa<=5){
        total = base + 400000 + 100000 ;  
    }else{
        total = base + 500000 + 150000;
    }

    cout << "Total Biaya Adalah : " << fixed << setprecision(0) << total << endl;
}


int main(){
    string noplat[100] , merek[100],type[100],warna[100],modifikasi[100];
    int tahun[100];
    int pilih,jumlah=0,tujuan,lama_sewa;
    menu:
    cout << "=====================================================" << endl;
    cout << "                    FILKOM TOUR APP                   " << endl;
    cout << "=====================================================" << endl;
    cout << "Silahkan Pilih Menu di Bawah" << endl;
    cout << "1. Input Data Kendaraan" << endl;
    cout << "2. Data Kendaraan" << endl;
    cout << "3. Kalkulasi Biaya" << endl ;
    cout << "5. Keluar" << endl;
    cout << "=====================================================" << endl;
    cout << "Masukkan Pilihan Menu : " ;
    cin >> pilih ;
    switch (pilih)
    {
    case 1:
        cout << "Masukkan Jumlah Karyawan Yang Akan Diinput : ";
        cin >> jumlah;
        cin.ignore();
        for (int i = 0; i < jumlah; i++)
        {
            cout << "====================KENDARAAN ["<< (i+1) <<"]====================" << endl;
            cout << "Nomor Plat : ";
            getline (cin, noplat[i]);
            cout << "Merek : ";
            getline (cin, merek[i]);
            cout << "Tipe : ";
            cin >> type[i];
            cout << "Warna : ";
            cin >> warna[i];
            cout << "Tahun Keluaran : ";
            cin >> tahun[i];
            cout << "Modifikasi : ";
            cin >> modifikasi[i];
        }
        goto menu;
        break;
    case 2:
        cout << "=====================DATA KENDARAAN====================" << endl;
        for (int i = 0; i < jumlah; i++)
        {
            cout << "Nomor Plat     : " << noplat[i] << endl;
            cout << "Merek          : " << merek[i] << endl;
            cout << "Tipe           : " << type[i] << endl;
            cout << "Warna          : " << warna[i] << endl;
            cout << "Tahun Keluaran : " << tahun[i] << endl;
            cout << "Modifikasi     : " << modifikasi[i] << endl;
            cout << "=====================================================" << endl;
        }
        goto menu;
        break;
    case 3:
        cout << "=====================KALKULASI BIAYA====================" << endl;
        cout << "---------- Silahkan Pilih Destinasi ----------" << endl;
        cout << "1.Surabaya - Malang" << endl;
        cout << "2.Madura - Malang" << endl;
        cout << "3.Banyuwangi - Malang" << endl;
        cout << "4.Situbondo - Malang" << endl;
        cout << "5.Tulungagung - Malang" << endl;
        cout << "Pilih Salah Satu (1/2/3/4/5) : ";
        cin >> tujuan;
        cout << "Masaukkan Lama Sewa (jam) : ";
        cin >> lama_sewa;
        on_the_route(tujuan,lama_sewa);
        goto menu;
        break;
    case 4:
        exit(0);
        break;
    default:
        cout << "Invalid Menu" << endl;
        goto menu;
        break;
    }
}
