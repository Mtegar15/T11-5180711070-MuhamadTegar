#include <iostream>
using namespace::std;

main()
{
    string nama,nb,nomor[4]{"A001","A002","A003","A004"},nama2[5]{"Bayu","irvan","Susiati","Roni"},data;
    int diketahui,harg,harga[11],status,jumlah,jmlh[11],tmp,total,barang,j,tot,diskon;
    char mengulang;

mengulang:
     cout<<"Selamat Datanng di Toko kami "<<endl;
     cout<<"1. Member/2. Non Member?";
     cin>>status;
     if (status==2)
     {
         cout<<"Masukkan Nama :";cin>>nama;
         cout<<"Berapa Macam Barang yang Dibeli?";cin>>barang;
     for(int i=0;i<barang;i++)
     {
         cout<<"Harganya  :";cin>>harg;
         cout<<"Jumlahnya :";cin>>jumlah;
         total=total+harg*jumlah;
     }
        cout<<"Total yang harus dibayar :"<<total;
     }
     else if(status==1)
     {
        cout<<"\nMasukan Nomor:";
        cin>>data;
        diketahui=0;
        for(int i=0;i<5;i++)
        {
            if(data == nomor[i])
            {   diketahui=1;
                cout<<"Nama Member:"<<nama2[i];}
        }
        cout<<"\nMasukan Jumlah Barang Yang DiBeli : "; cin>>jumlah;

        for(int i=1;i<=jumlah;i++)
        {
            cout<<"\nMasukan nama barang : ";
            cin>>nb;
            cout<<"\nMasukan Harga Barang: Rp. ";
            cin>>harga[i];
            cout<<"\nMasukan Jumlah      : ";
            cin>>jmlh[i];j=jmlh[i]*harga[i];
            tot=tot+j;

        }
        cout<<"Total                 : Rp."<<tot;
        cout<<"\nAnda Mendapatkan Diskon 5%";diskon=tot*0.05;
        total=tot-diskon;
        cout<<"\nTotal Setelah Diskon: Rp."<<total;
        for(int i=1;i<=jumlah;++i)
        {
            for(int j=1;j<=(jumlah-i);++j)
                if(harga[j]>harga[j+1])
                {
                    tmp=harga[j];
                    harga[j]=harga[j+1];
                    harga[j+1]=tmp;
                }
        }
        cout<<"\nHarga Diurutkan Dari termurah-termahal:";
        for(int i=1;i<=jumlah;i++)
        cout<<"\nRp."<<harga[i]<<endl;
        cout<<"\nNama anda       :"<<nomor[5];
        cout<<"\nJumlah Belanjaan:"<<jumlah;
        cout<<"\nTotal Harga Sebelum Di Diskon: Rp."<<tot;
        cout<<"\nTotal Harga Di Diskon        : Rp."<<total;
     }

    else
    {
        cout<<"Perintah yang anda masukkan salah!"<<endl;
        cout<<"ulang = y";cin>>mengulang;
            goto mengulang;
            return 'y';

    }



     }


