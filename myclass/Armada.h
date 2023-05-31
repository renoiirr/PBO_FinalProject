#include<iostream>
using namespace std;

class Armada{
    public:
    string jenis;
    string nama;
    public:
    Armada(string jenis,string nama){
        Armada::jenis=jenis;
        Armada::nama=nama;
    }
    void infoarmada()
    {
        cout<<endl;
        cout << "Jenis Armada: "<< jenis << endl;
        cout << "Nama Armada: "<< nama << endl;
    }
};