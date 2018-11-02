#include <iostream>

using namespace std;

int main()
{
    char pembelian;
int kode, N, jumlah, banyak;
long int total,diskon,akhir, bayar, harga,uang,kembalian;
atas:
cout<<"   ===================LEON KOMPUTER==================\n";
cout<<"\n";
cout<<"                  100% BARANG ORI BOSSKU\n";
cout<<"\n";
cout<<" ======================PRODUCT LIST=======================\n";
cout<<" 1. Asus ROG\n";
cout<<" 2. Asus Zenbook\n";
cout<<" 3. Ipad Pro 2018\n";
cout<<" 4. Headphone JBL\n";
cout<<" 5. HDD External 1TB\n";
cout<<" 6. Tas Laptop\n";
cout<<" 7. Macbook Pro 2018\n";
cout<<" 8. Cooling Pad Laptop\n";
cout<<" 9. Charger Laptop Asus\n";
cout<<" 10.RAM SO-DIMM DDR4 4GB\n";
cout<<"  ===================LEON KOMPUTER====================\n";
cout<<"\n";
cout<<"Jumlah Barang Yang Dipesan = ";
cin>>banyak;
jumlah=1;
bayar=0;
for(jumlah=1;jumlah<=banyak;jumlah++)
{ulang:
 cout<<" \n\nMasukan Kode Barang = ";
cin>>kode;
cout<<"\n";
    if (kode==1)
{
    cout<<" Nama Barang     = Asus ROG\n";
    cout<<" Harga           = Rp. 17500000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=17500000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==2)
{
    cout<<" Nama Barang     = Asus Zenbook\n";
    cout<<" Harga           = Rp. 9800000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=9800000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==3)
{
    cout<<" Nama Barang     = Ipad Pro\n";
    cout<<" Harga           = Rp. 11600000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=11600000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==4)
{
    cout<<" Nama Barang      = Headphone JBL\n";
    cout<<" Harga            = Rp. 849000,-\n";
    cout<<" Jumlah Barang    = ";
    cin>>N;
    harga=849000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==5)
{
    cout<<" Nama Barang     = HDD External 1TB\n";
    cout<<" Harga           = Rp. 700000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=700000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==6)
{
    cout<<" Nama Barang     = Tas Laptop\n";
    cout<<" Harga           = Rp. 185000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=185000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==7)
{
    cout<<" Nama Barang     = Macbook Pro 2018\n";
    cout<<" Harga           = Rp. 28000000,-\n";
    cout<<" Jumlah Baran    = ";
    cin>>N;
    harga=28000000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==8)
{
    cout<<" Nama Barang     = Cooling Pad Laptop\n";
    cout<<" Harga           = Rp. 95000,-\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=95000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==9)
{
    cout<<" Nama Barang     = Charger Laptop Asus\n";
    cout<<" Harga           = Rp. 350000\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=350000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";
}
else
    if (kode==10)
{
    cout<<" Nama Barang     = RAM SO-DIMM DDR4 4GB\n";
    cout<<" Harga           = Rp. 600000\n";
    cout<<" Jumlah Barang   = ";
    cin>>N;
    harga=600000;
    total=harga*N;
    cout<<" Total Harga  = Rp"<<total;
    cout<<"\n";

}
else
{
    cout<<"-Invalid Number-\a";
goto ulang;
}
bayar=bayar+total;
}
    cout<<"\nTotal Bayar\t\t        = Rp"<<bayar<<",-";
    cout<<"\n\n\Masukan Pembayaran  = Rp";cin>>uang;
if((bayar>1000000)){
diskon = bayar*0.10;
cout<<"\nAnda Mendapatkan Diskon 10%\t";
}else
    if((bayar>=501000)&& (bayar<=1000000)){
diskon = bayar*0.05;
cout<<"\nAnda Mendapatkan Diskon 5%\t";
}else
    if((bayar<501000)){
diskon = 0;
cout<<"\nAnda Mendapatkan Diskon 0%\t";
}
else {
diskon = 0;
}
akhir       =bayar-diskon;
kembalian   =uang-akhir;

cout<<"\nNominal Diskon Anda\t    = Rp"<<diskon<<",-";
cout<<"\nKembalian Anda\t         = Rp"<<kembalian<<",-";
cout<<"\n\n\t\t\t((((TERIMA KASIH))))";
cout<<"\n\n\n\n\nPembelian Baru [y/t] ";cin>>pembelian;
if (pembelian=='y'||pembelian=='Y')
goto atas;
else
cout<<"\n\n\t\t\tProgram Logging Off....";
}
