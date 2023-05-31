#include <iostream>
using namespace std;

class Pengemudi{
    public:
    string id_pengemudi; 
    string nama;
    string no_telp;
    public:
    Pengemudi(string id_pengemudi,string nama,string no_telp){
        Pengemudi::id_pengemudi=id_pengemudi; 
        Pengemudi::nama=nama;
        Pengemudi::no_telp=no_telp;
    }
    void infopengemudi()
    {
        cout<<endl;
        cout << "Nomor Pengemudi: " << id_pengemudi << endl;       
        cout << "Nama: " << nama << endl;
        cout << "Nomor Handphone: " << no_telp << endl;
    }
};