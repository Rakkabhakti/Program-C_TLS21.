 //Rakka Bhakti Lugina
// Floyd
//Program untuk memesan makanan
//link youtube https://youtu.be/pcfPOGsXkvk
#include <iostream>
using namespace std;
int main()
{
    int pesan, y, jml,harga,total,var;
    total=0;
    cout<<"Hallo selamat datang di Restoran Rakka\n";
    cout<<"silahkan pilih makanan yang akan anda pesan\n";
    cout<<"-------------------------------------------\n";
    cout<<"|        Menu         |         Harga     |\n";
    cout<<"-------------------------------------------\n";
    cout<<"|1.Nasi putih         |       Rp.4000     |\n";
    cout<<"|2.Mie Instan         |       Rp.5000     |\n";
    cout<<"|3.Nasi Goreng        |       Rp.7000     |\n";
    cout<<"|4.Ayam Goreng        |       Rp.10000    |\n";
    cout<<"|5.Ayam Bakar         |       Rp.10000    |\n";
    cout<<"|6.Es teh Manis       |       Rp.3000     |\n";
    cout<<"|7.Kopi               |       Rp.4000     |\n";
    cout<<"|8.Lemon Tea          |       Rp.4000     |\n";
    cout<<"|9.Es kelapa          |       Rp.5000     |\n";
    cout<<"-------------------------------------------\n";
    cout<<"silahkan masukkan jumlah pesanan : ";
    cin>>pesan;
   for(y=1;y<=pesan;y++){
                cout<<"\nPesanan ke "<<y<<endl;
                cout<<"Masukkan angka Makanan/Minuman yang ingin dipesan : ";cin>>var;
                cout<<"Masukkan jumlah yang dipesan                      : ";cin>>jml;

        if (var==1){harga=4000*jml;}
 
            else if (var==2){ harga=5000*jml;}
 
                else if (var==3){harga=7000*jml;}
 
                    else if (var==4){harga=10000*jml;}
 
                       else if (var==5){harga=10000*jml;}
 
                            else if (var==6){harga=3000*jml;}
                    
                                else if (var==7){harga=4000*jml;}
                    
                                  else if (var==8){harga=4000*jml;}
        
                                        else if (var==9){harga=5000*jml;}
                                            else{cout<<"pesanan tidak ditemukan"<<endl;}
        total+=harga;
        
            
}
cout<<"total yang harus anda bayar adalah                : "<<total;
cout<<"\nterimakasih telah makan di Restoran Rakka";
}