#include<iostream>
using namespace std;

class Customer{
    public:
    string nama;
    string no_telp;
    string tanggal;

    public:
    Customer(string nama, string no_telp, string tanggal)
    {
        Customer::nama=nama;
        Customer::no_telp=no_telp;
        Customer::tanggal=tanggal;

    }
    
    void infopenumpang()
    {   
        cout << endl;
        cout << "Nama Pemesan : " << nama << endl;       
        cout << "Nomer Handphone : " << no_telp << endl;       
        cout << "Tanggal Keberangkatan: " << tanggal << endl;       
    }
};