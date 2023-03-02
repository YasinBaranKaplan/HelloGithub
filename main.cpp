#include <iostream>

using namespace std;

int main()
{
    cout<<"<<<<<Ortalama hesaplayici>>>>>"<<endl;

    int ogrenciSayisi;

    cout<<"ogrenci sayisini giriniz. "<<endl;
    cin>>ogrenciSayisi;

    int ortalama;
    int ogrencilerinNotlari[ogrenciSayisi];
    int toplam;

    for(int i=0;i<ogrenciSayisi;i++){
        cout<<i+1<<". ogrencinin notu = "<<endl;
        cin>>ogrencilerinNotlari[i];
          toplam+=ogrencilerinNotlari[i];
    }

    ortalama=(float)toplam/ogrenciSayisi;

cout<<"Ogrencilerin not ortalamasi = "<<(float)toplam/ogrenciSayisi<<endl;
cout<<"---------------------------------"<<endl;

for(int j=0;j<ogrenciSayisi;j++){
    if(ogrencilerinNotlari[j]>=ortalama){
        cout<<j+1<<". OGRENCI BASARILIDIR."<<endl;
    }
    else{
        cout<<j+1<<". OGRENCI BASARISIZDIR."<<endl;
    }



}




}
