#include <iostream>
#include <locale.h>

using namespace std;

enum Yakit {B,D,G,H};

struct Otomobil
{string marka;
string model;
int yil;
float km;
int fiyat;
Yakit yakit;
};

int main()
{
	setlocale(LC_ALL,"Turkish");

Otomobil binek;
cout<<"BÝNEK MARKA GÝRÝNÝZ"<<endl;
getline(cin,binek.marka);
cout<<"BÝNEK MODEL GÝRÝNÝZ"<<endl;
getline(cin,binek.model);
cout<<"BÝNEK YIL GÝRÝNÝZ"<<endl;
cin>>binek.yil;
cout<<"BÝNEK KÝLOMETRE GÝRÝNÝZ"<<endl;
cin>>binek.km;	
cout<<"BÝNEK FÝYAT GÝRÝNÝZ"<<endl;
cin>>binek.fiyat;
binek.yakit=B;	

cout<<"---------------BÝNEK-------------"<<endl;
cout<<"MARKA: "<<binek.marka<<endl;	
cout<<"MODEL: "<<binek.model<<endl;		
cout<<"YIL: "<<binek.yil<<endl;	
cout<<"KÝLOMETRE: "<<binek.km<<endl;
cout<<"FÝYAT: "<<binek.fiyat<<endl;

if(binek.yakit==0)
cout<<"YAKIT: "<<'B'<<endl;
else if (binek.yakit==1)
cout<<"YAKIT: "<<'D'<<endl;
else if (binek.yakit==2)
cout<<"YAKIT: "<<'G'<<endl;
else if (binek.yakit==3)
cout<<"YAKIT: "<<'H'<<endl;
	
Otomobil suv;
cout<<"\n SUV MARKA GÝRÝNÝZ"<<endl;
cin>>suv.marka;
cout<<"SUV MODEL GÝRÝNÝZ"<<endl;
cin>>suv.model;
cout<<"SUV YIL GÝRÝNÝZ"<<endl;
cin>>suv.yil;
cout<<"SUV KÝLOMETRE GÝRÝNÝZ"<<endl;
cin>>suv.km;	
cout<<"SUV FÝYAT GÝRÝNÝZ"<<endl;
cin>>suv.fiyat;
suv.yakit=H; 
	
cout<<"---------------SUV-------------"<<endl;
cout<<"MARKA: "<<suv.marka<<endl;	
cout<<"MODEL: "<<suv.model<<endl;		
cout<<"YIL: "<<suv.yil<<endl;	
cout<<"KÝLOMETRE: "<<suv.km<<endl;
cout<<"FÝYAT: "<<suv.fiyat<<endl;

if(suv.yakit==0)
cout<<"YAKIT: "<<'B'<<endl;
else if (suv.yakit==1)
cout<<"YAKIT: "<<'D'<<endl;
else if (suv.yakit==2)
cout<<"YAKIT: "<<'G'<<endl;
else if (suv.yakit==3)
cout<<"YAKIT: "<<'H'<<endl;


Otomobil ticari;
cout<<"\n TÝCARÝ MARKA GÝRÝNÝZ"<<endl;
cin>>ticari.marka;
cout<<"TÝCARÝ MODEL GÝRÝNÝZ"<<endl;
cin>>ticari.model;
cout<<"TÝCARÝ YIL GÝRÝNÝZ"<<endl;
cin>>ticari.yil;
cout<<"TÝCARÝ KÝLOMETRE GÝRÝNÝZ"<<endl;
cin>>ticari.km;	
cout<<"TÝCARÝ FÝYAT GÝRÝNÝZ"<<endl;
cin>>ticari.fiyat;
ticari.yakit=G;	

cout<<"---------------TÝCARÝ-------------"<<endl;
cout<<"MARKA: "<<ticari.marka<<endl;	
cout<<"MODEL: "<<ticari.model<<endl;		
cout<<"YIL: "<<ticari.yil<<endl;	
cout<<"KÝLOMETRE: "<<ticari.km<<endl;
cout<<"FÝYAT: "<<ticari.fiyat<<endl;

if(ticari.yakit==0)
cout<<"YAKIT: "<<'B'<<endl;
else if (ticari.yakit==1)
cout<<"YAKIT: "<<'D'<<endl;
else if (ticari.yakit==2)
cout<<"YAKIT: "<<'G'<<endl;
else if (ticari.yakit==3)
cout<<"YAKIT: "<<'H'<<endl;


	
	system("pause");
	return 0;
}
