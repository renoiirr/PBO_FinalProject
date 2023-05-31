#include <iostream>
using namespace std;

class Jam{
    public:
    string jam_keberangkatan;

    public:
    Jam(string jam_keberangkatan){
        Jam::jam_keberangkatan=jam_keberangkatan;
    }
    void infojam(){
        cout<<endl;
        cout<<"Jam Keberangkatan : "<<jam_keberangkatan<<endl;
    }
};