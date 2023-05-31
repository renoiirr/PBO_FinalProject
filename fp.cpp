#include<iostream>
#include "myclass/Customer.h"
#include "myclass/Jadwal.h"
#include "myclass/Armada.h"
#include "myclass/Jam.h"
#include "myclass/Pengemudi.h"

using namespace std;

int main()
{ 
    int asal, tujuan, jumlahtiket, jam_berangkat, harga_final;
    string nama, no_telp, tanggal, lanjut;

    cout << "Nama: ";
    getline(cin, nama);

    cout << "No Handphone: ";
    getline(cin, no_telp);

    cout << "Tanggal Keberangkatan: ";
    getline(cin, tanggal);

    cout << "Jumlah Penumpang: ";
    cin >> jumlahtiket;
    
    Jam jam1("08:00");
    Jam jam2("12:00");
    Jam jam3("15:00");
    
    Pengemudi pengemudi1("002333", "Andi Jajang", "+62 866-1515-5071");
    Pengemudi pengemudi2("007845", "Kasim Ramadhan", "+62 867-8094-98061");
    Pengemudi pengemudi3("002308", "Galang Wibisono", "+62 876-8959-109");
    Pengemudi pengemudi4("007823", "Panca Iswahyudi", "+62 816-712-835");
    Pengemudi pengemudi5("004573", "Vega Saputra", "+62 876-144-681");
    Pengemudi pengemudi6("002348", "Ega Simanjuntak", "+62 851-7121-3755");
    Pengemudi pengemudi7("002573", "Sabar Prasetyo", "+62 871-4802-511");
    Pengemudi pengemudi8("008345", "Saiful Nugroho", "+62 857-201-620");
    Pengemudi pengemudi9("004123", "Sabar Simbolon", "+62 812-085-542");
    Pengemudi pengemudi10("009567", "Rahman Manullang", "+62 813-4332-03027");
    Pengemudi pengemudi11("002827", "Lamar Situmorang", "+62 818-9348-181");
    Pengemudi pengemudi12("008567", "Cakrawalan Maulana", "+62 858-2608-7946");
    Pengemudi pengemudi13("009458", "Darimin Pradana", "+62 837-476-445");
    Pengemudi pengemudi14("002345", "Gambira Mansur", "+62 831-2379-11829");
    Pengemudi pengemudi15("009086", "Mulyono Gunawan", "+62 859-3115-4312");
    Pengemudi pengemudi16("009978", "Ismail Simbolon", "+62 895-0644-6564");
    Pengemudi pengemudi17("004263", "Jaswadi Firmansyah", "+62 832-5430-3248");
    Pengemudi pengemudi18("009845", "Radit Sitohang", "+62 811-4933-347");

    Armada armada1("Toyota Hiace","KenjeranTrans");
    Armada armada2("Bus Mercedes Benz OH1526","KenjeranTrans");

    Jadwal jadwal1("Surabaya","Denpasar","13H",298000);
    Jadwal jadwal2("Denpasar","Surabaya","13H",298000);
    Jadwal jadwal3("Surabaya", "Sumenep","5H 30M ", 75000);
    Jadwal jadwal4("Sumenep", "Surabaya","5H 30M ", 75000);
    Jadwal jadwal5("Surabaya", "Semarang","5H", 100000);
    Jadwal jadwal6("Semarang", "Surabaya", "5H", 100000);
    
    cout << endl;
    cout<<"   Kota Keberangkatan\n";
    cout<<"+==============+\n";
    cout<<"  1. Surabaya\n";
    cout<<"  2. Denpasar\n";
    cout<<"  3. Sumenep\n";
    cout<<"  4. Semarang\n";
    cout<<"+==============+\n";
    
    cout << endl;
    cout << "Silahkan Pilih Kota Keberangkatan: "; cin >> asal;

    cout << endl;
    if (asal==1)
    {
    cout<<"   Kota Tujuan\n";
    cout<<"+==============+\n";
    cout<<"  2. Denpasar\n";
    cout<<"  3. Sumenep\n";
    cout<<"  4. Semarang\n";
    cout<<"+==============+\n";
    }else{
        cout<<"+==============+\n";
        cout<<"1.Surabaya\n";
        cout<<"+==============+\n";
    }

    cout << endl;
    cout << "Silahkan Pilih Kota Tujuan: ";cin >> tujuan;

    cout << endl;
    cout << "Silahkan pilih jam keberangkatan: " << endl;
    cout << "1. 08:00 " << endl;
    cout << "2. 12:00 " << endl;
    cout << "3. 15:00 " << endl;
    cout<<"Pilihan : "; cin >> jam_berangkat;

    system("cls");
    cout << "============================================" << endl;
    cout << "              Detail Perjalanan" << endl;
    cout << "============================================" << endl;
    cout << "Silahkan Check Kembali Detail Order Anda" << endl << endl;

    Customer customer(nama, no_telp, tanggal);
    customer.infopenumpang();
    cout << "Jumlah Penumpang: " << jumlahtiket << endl;

    cout << endl;
    if(jam_berangkat==1){
        jam1.infojam();
    }else if(jam_berangkat==2){
        jam2.infojam();
    }else{
        jam3.infojam();
    }

    if (asal==1 &&  tujuan==2)
    {
        jadwal1.infojadwal();
        armada1.infoarmada();
    }else if(asal==2 &&  tujuan==1){
        jadwal2.infojadwal();
        armada2.infoarmada();
    }else if(asal==1 &&  tujuan==3){
        jadwal3.infojadwal();
        armada1.infoarmada();
    }else if(asal==3 &&  tujuan==1){
        jadwal4.infojadwal();
        armada2.infoarmada();
    }else if(asal==1 &&  tujuan==4){
        jadwal5.infojadwal();
        armada1.infoarmada();
    }else{
        jadwal6.infojadwal();
        armada2.infoarmada();
    }

    
    cout << "Apakah Anda Ingin Lanjut Ke Pembayaran(y/n): "; cin >> lanjut;
    system("cls");
    if(lanjut=="y" || lanjut=="Y")
    {
        cout << "============================================" << endl;
        cout << "               Pembayaran" << endl;
        cout << "============================================" << endl;

        customer.infopenumpang();
        cout << "Jumlah Penumpang: " << jumlahtiket << endl;

        if (asal==1 &&  tujuan==2)
        {
            jadwal1.infojadwal();
            harga_final=jadwal1.harga;
        }else if(asal==2 &&  tujuan==1){
            jadwal2.infojadwal();
             harga_final=jadwal2.harga;
        }else if(asal==1 &&  tujuan==3){
            jadwal3.infojadwal();
            harga_final=jadwal3.harga;
        }else if(asal==3 &&  tujuan==1){
            jadwal4.infojadwal();
            harga_final=jadwal4.harga;
        }else if(asal==1 &&  tujuan==4){
            jadwal5.infojadwal();
            harga_final=jadwal5.harga;
        }else{
            jadwal6.infojadwal();
            harga_final=jadwal6.harga;
        }
    cout <<"Harga Total :"<<jumlahtiket * harga_final;

    cout << endl;
    system("cls");
    cout << "============================================" << endl;
    cout << "           Detail Perjalanan Anda" << endl;
    cout << "============================================" << endl;
    
    customer.infopenumpang();
    cout << "Jumlah Penumpang: " << jumlahtiket << endl;

    if (asal==1 &&  tujuan==2)
    {
        jadwal1.infojadwal();
        armada1.infoarmada();
        if(jam_berangkat==1){
            pengemudi1.infopengemudi();
        }else if(jam_berangkat==2){
            pengemudi2.infopengemudi();
        }else if(jam_berangkat==3){
            pengemudi3.infopengemudi();
        }
    }else if(asal==2 &&  tujuan==1){
        jadwal2.infojadwal();
        armada2.infoarmada();
        if(jam_berangkat==1){
            pengemudi4.infopengemudi();
        }else if(jam_berangkat==2){
            pengemudi5.infopengemudi();
        }else if(jam_berangkat==3){
            pengemudi6.infopengemudi();
        }
    }else if(asal==1 &&  tujuan==3){
        jadwal3.infojadwal();
        armada1.infoarmada();
        if(jam_berangkat==1){
            pengemudi7.infopengemudi();
        }else if(jam_berangkat==2){
            pengemudi8.infopengemudi();
        }else if(jam_berangkat==3){
            pengemudi9.infopengemudi();
        }
    }else if(asal==3 &&  tujuan==1){
        jadwal4.infojadwal();
        armada2.infoarmada();
        if(jam_berangkat==1){
            pengemudi10.infopengemudi();
        }else if(jam_berangkat==2){
            pengemudi11.infopengemudi();
        }else if(jam_berangkat==3){
            pengemudi12.infopengemudi();
        }
    }else if(asal==1 &&  tujuan==4){
        jadwal5.infojadwal();
        armada1.infoarmada();
        if(jam_berangkat==1){
            pengemudi13.infopengemudi();
        }else if(jam_berangkat==2){
            pengemudi14.infopengemudi();
        }else if(jam_berangkat==3){
            pengemudi15.infopengemudi();
        }
    }else{
        jadwal6.infojadwal();
        armada2.infoarmada();
        if(jam_berangkat==1){
            pengemudi16.infopengemudi();
        }else if(jam_berangkat==2){
            pengemudi17.infopengemudi();
        }else if(jam_berangkat==3){
            pengemudi18.infopengemudi();
        }
    }
    }else{
        return 0;
    }
    return 0;
}