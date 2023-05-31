#include <iostream>
using namespace std;

class Jadwal{
    public:
    string kota_asal;;
    string kota_tujuan;
    string estimasi;
    int harga;

    public:
    Jadwal(string kota_asal, string kota_tujuan, string estimasi, int harga ){
        Jadwal::kota_asal = kota_asal;
        Jadwal::kota_tujuan = kota_tujuan;
        Jadwal::estimasi = estimasi;
        Jadwal::harga = harga;
    }
    public:
    void infojadwal()
    {
        cout<<endl;
        cout << "Kota Keberangkatan: " << kota_asal << endl;       
        cout << "Kota Kedatangan: " << kota_tujuan << endl;    
        cout << "Estimasi Lama Perjalanan: " << estimasi << endl;    
        cout << "Harga per Tiket : " << harga << endl;
    }
};
