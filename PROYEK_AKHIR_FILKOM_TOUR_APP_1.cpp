#include <iostream>
#include <iomanip>

using namespace std;

double gaji(int kategori , int lembur){
    double gaji_pokok ,uang_lembur ,gaji_sesudah_pajak , gaji_sebelum_pajak ;
    switch (kategori)
    {
    case 1:
        gaji_pokok = 1500000;
        uang_lembur = 50000 * lembur;
        gaji_sebelum_pajak = gaji_pokok + uang_lembur;
        gaji_sesudah_pajak = gaji_sebelum_pajak*0.95;
        break;
    case 2:
        gaji_pokok = 1750000;
        uang_lembur = 45000 * lembur;
        gaji_sebelum_pajak = gaji_pokok + uang_lembur ;
        gaji_sesudah_pajak = gaji_sebelum_pajak*0.94;
        break;
    case 3:
        gaji_pokok = 2000000;
        uang_lembur = 40000 * lembur;
        gaji_sebelum_pajak = gaji_pokok + uang_lembur ;
        gaji_sesudah_pajak = gaji_sebelum_pajak*0.93;
        break;
    default:
        gaji_sesudah_pajak = 0 ;
        break;
    }
    return gaji_sesudah_pajak ;
}

int main(){
    int jumlah = 0 , pilih , gol , lembur;
    char jenis_kelamin[100] ;
    string nama[100],alamat[100],agama[100], role [100] , tlp [100];
    int umur[100] ;
    menu:
    cout << "=====================================================" << endl;
    cout << "                    FILKOM TOUR APP                   " << endl;
    cout << "=====================================================" << endl;
    cout << "Silahkan Pilih Menu di Bawah" << endl;
    cout << "1. Input Data Karyawan" << endl;
    cout << "2. Data Karyawan" << endl;
    cout << "3. Kalkulator Gaji" << endl ;
    cout << "4. Keluar" << endl;
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
            cout << "====================Karyawan ["<< (i+1) <<"]====================" << endl;
            cout << "Nama : ";
            getline(cin,nama[i]);
            cout << "Jenis Kelamin (l/p) : "; 
            cin >> jenis_kelamin[i];
            cout << "Umur : " ; 
            cin >> umur[i];
            cout << "Agama : "; 
            cin >>agama[i];
            cin.ignore();
            cout << "Alamat : ";
            getline(cin,alamat[i]);
            cout << "No Telepon : " ;
            getline(cin,tlp[i]);
            cout << "Kategori Karyawan (Supir travel , Supir Travel , Admin ) : " ;
            getline(cin,role[i]);
            cout << "=====================================================" << endl; 
        }
        goto menu;
        break;
    case 2:
        cout << "=====================DATA KARYAWAN====================" << endl;
        for (int i = 0; i < jumlah; i++)
        {
            cout << "Nama          : " << nama[i] << endl;
            cout << "Jenis Kelamin : " << ((jenis_kelamin[i]=='l')? "Laki - Laki" : "Perempuan") << endl;
            cout << "Umut          : " << umur[i] << endl;
            cout << "Agama         : " << agama[i] << endl;
            cout << "Alamat        : " << alamat[i] << endl;
            cout << "Telepon       : " << tlp[i] << endl;
            cout << "role          : " << role[i] << endl;
            cout << "=====================================================" << endl;
        }
        goto menu;
        break;
    case 3:
            cout << "====================Kalkulator Gaji===================" << endl;
            cout << "Masukkan Kategori Karyawan" << endl;
            cout << "(1.Supir travel , 2.Supir Travel , 3.Admin ) : " ;
            cin >> gol;
            cout << "Masukkan Jam Lembur : " ;
            cin >> lembur ;
            cout << "=====================================================" << endl;
            cout << "Gaji Bersih Karyawan Adalah : Rp." << fixed << setprecision(0) << gaji(gol,lembur) << endl;
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
