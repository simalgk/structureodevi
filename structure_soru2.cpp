#include <iostream>
#include <locale.h>
using namespace std;

struct Iskelet
{string malzeme;
string birlestirme;
string tarz;
float boyut;
int miktar;
};

Iskelet iskelet;

struct Kumas
{string ipliktipi;
float dm2agirlik;
string dokumatipi;
string renk;
int miktar;
string kaplama;
};
Kumas kumas;

struct Mobilya
{Kumas kaplama;
Iskelet malzeme;
int fiyat;
int adet;
};
Mobilya mobilya;

int main()
{
	setlocale(LC_ALL,"Turkish");
Iskelet isk1;
cout<<"ÜRÜN 1 ÝÇÝN;"<<endl;
cout<<"BÝRLEÞTÝRME GÝRÝNÝZ: ";
cin>>isk1.birlestirme;
cout<<"BOYUT GÝRÝNÝZ: ";
cin>>isk1.boyut;
cout<<"MALZEME GÝRÝNÝZ: ";
cin>>isk1.malzeme;
cout<<"MÝKTAR GÝRÝNÝZ: ";
cin>>isk1.miktar;
cout<<"TARZ GÝRÝNÝZ: ";
cin>>isk1.tarz;
	
Kumas kumas1;
cout<<"ÝPLÝK TÝPÝ GÝRÝNÝZ: ";	
cin>>kumas1.ipliktipi;
cout<<"DM2 AÐIRLIK GÝRÝNÝZ: ";
cin>>kumas1.dm2agirlik;
cout<<"RENK GÝRÝNÝZ: ";
cin>>kumas1.renk;
cout<<"MÝKTAR GÝRÝNÝZ: ";
cin>>kumas1.miktar;
cout<<"DOKUMA TÝPÝ GÝRÝNÝZ: ";
cin>>kumas1.dokumatipi;
cout<<"KAPLAMA GÝRÝNÝZ: ";
cin>>kumas1.kaplama;

Mobilya mob1;
cout<<"ADET GÝRÝNÝZ: ";
cin>>mob1.adet;
cout<<"FÝYAT GÝRÝNÝZ: ";
cin>>mob1.fiyat;
	
cout<<"--------------1.ÜRÜN-------------"<<endl;	
cout<<"BÝRLEÞTÝRME: "<<isk1.birlestirme<<endl;
cout<<"BOYUT: "<< isk1.boyut<<endl;
cout<<"MALZEME: "<<isk1.malzeme<<endl;
cout<<"MÝKTAR: "<<isk1.miktar<<endl;
cout<<"TARZ: "<<isk1.tarz<<endl;
cout<<"ÝPLÝK TÝPÝ: "<<kumas1.ipliktipi<<endl;
cout<<"DM2 AÐIRLIK: "<<kumas1.dm2agirlik<<endl;
cout<<"RENK: "<<kumas1.renk<<endl;
cout<<"MÝKTAR: "<<kumas1.miktar<<endl;
cout<<"DOKUMA TÝPÝ: "<<kumas1.dokumatipi<<endl;
cout<<"KAPLAMA: "<<kumas1.kaplama<<endl;
cout<<"ADET: "<<mob1.adet<<endl;
cout<<"FÝYAT: "<<mob1.fiyat<<endl;
cout<<"\n";

Iskelet isk2;
cout<<"ÜRÜN 2 ÝÇÝN;"<<endl;
cout<<"BÝRLEÞTÝRME GÝRÝNÝZ: ";
cin>>isk2.birlestirme;
cout<<"BOYUT GÝRÝNÝZ: ";
cin>>isk2.boyut;
cout<<"MALZEME GÝRÝNÝZ: ";
cin>>isk2.malzeme;
cout<<"MÝKTAR GÝRÝNÝZ: ";
cin>>isk2.miktar;
cout<<"TARZ GÝRÝNÝZ: ";
cin>>isk2.tarz;
	
Kumas kumas2;
cout<<"ÝPLÝK TÝPÝ GÝRÝNÝZ: ";	
cin>>kumas2.ipliktipi;
cout<<"DM2 AÐIRLIK GÝRÝNÝZ: ";
cin>>kumas2.dm2agirlik;
cout<<"RENK GÝRÝNÝZ: ";
cin>>kumas2.renk;
cout<<"MÝKTAR GÝRÝNÝZ: ";
cin>>kumas2.miktar;
cout<<"DOKUMA TÝPÝ GÝRÝNÝZ: ";
cin>>kumas2.dokumatipi;
cout<<"KAPLAMA GÝRÝNÝZ: ";
cin>>kumas2.kaplama;

Mobilya mob2;
cout<<"ADET GÝRÝNÝZ: ";
cin>>mob2.adet;
cout<<"FÝYAT GÝRÝNÝZ: ";
cin>>mob2.fiyat;
	
cout<<"--------------2.ÜRÜN-------------"<<endl;	
cout<<"BÝRLEÞTÝRME: "<<isk2.birlestirme<<endl;
cout<<"BOYUT: "<< isk2.boyut<<endl;
cout<<"MALZEME: "<<isk2.malzeme<<endl;
cout<<"MÝKTAR: "<<isk2.miktar<<endl;
cout<<"TARZ: "<<isk2.tarz<<endl;
cout<<"ÝPLÝK TÝPÝ: "<<kumas2.ipliktipi<<endl;
cout<<"DM2 AÐIRLIK: "<<kumas2.dm2agirlik<<endl;
cout<<"RENK: "<<kumas2.renk<<endl;
cout<<"MÝKTAR: "<<kumas2.miktar<<endl;
cout<<"DOKUMA TÝPÝ: "<<kumas2.dokumatipi<<endl;
cout<<"KAPLAMA: "<<kumas2.kaplama<<endl;
cout<<"ADET: "<<mob2.adet<<endl;
cout<<"FÝYAT: "<<mob2.fiyat<<endl;

Iskelet isk3;
cout<<"ÜRÜN 3 ÝÇÝN;"<<endl;
cout<<"BÝRLEÞTÝRME GÝRÝNÝZ: ";
cin>>isk3.birlestirme;
cout<<"BOYUT GÝRÝNÝZ: ";
cin>>isk3.boyut;
cout<<"MALZEME GÝRÝNÝZ: ";
cin>>isk3.malzeme;
cout<<"MÝKTAR GÝRÝNÝZ: ";
cin>>isk3.miktar;
cout<<"TARZ GÝRÝNÝZ: ";
cin>>isk3.tarz;
	
Kumas kumas3;
cout<<"ÝPLÝK TÝPÝ GÝRÝNÝZ: ";	
cin>>kumas3.ipliktipi;
cout<<"DM2 AÐIRLIK GÝRÝNÝZ: ";
cin>>kumas3.dm2agirlik;
cout<<"RENK GÝRÝNÝZ: ";
cin>>kumas3.renk;
cout<<"MÝKTAR GÝRÝNÝZ: ";
cin>>kumas3.miktar;
cout<<"DOKUMA TÝPÝ GÝRÝNÝZ: ";
cin>>kumas3.dokumatipi;
cout<<"KAPLAMA GÝRÝNÝZ: ";
cin>>kumas3.kaplama;

Mobilya mob3;
cout<<"ADET GÝRÝNÝZ: ";
cin>>mob3.adet;
cout<<"FÝYAT GÝRÝNÝZ: ";
cin>>mob3.fiyat;
	
cout<<"--------------3.ÜRÜN-------------"<<endl;	
cout<<"BÝRLEÞTÝRME: "<<isk3.birlestirme<<endl;
cout<<"BOYUT: "<< isk3.boyut<<endl;
cout<<"MALZEME: "<<isk3.malzeme<<endl;
cout<<"MÝKTAR: "<<isk3.miktar<<endl;
cout<<"TARZ: "<<isk3.tarz<<endl;
cout<<"ÝPLÝK TÝPÝ: "<<kumas3.ipliktipi<<endl;
cout<<"DM2 AÐIRLIK: "<<kumas3.dm2agirlik<<endl;
cout<<"RENK: "<<kumas3.renk<<endl;
cout<<"MÝKTAR: "<<kumas3.miktar<<endl;
cout<<"DOKUMA TÝPÝ: "<<kumas3.dokumatipi<<endl;
cout<<"KAPLAMA: "<<kumas3.kaplama<<endl;
cout<<"ADET: "<<mob3.adet<<endl;
cout<<"FÝYAT: "<<mob3.fiyat<<endl;
cout<<"\n";

Iskelet isk4;
cout<<"ÜRÜN 4 ÝÇÝN;"<<endl;
cout<<"BÝRLEÞTÝRME GÝRÝNÝZ: ";
cin>>isk4.birlestirme;
cout<<"BOYUT GÝRÝNÝZ: ";
cin>>isk4.boyut;
cout<<"MALZEME GÝRÝNÝZ: ";
cin>>isk4.malzeme;
cout<<"MÝKTAR GÝRÝNÝZ: ";
cin>>isk4.miktar;
cout<<"TARZ GÝRÝNÝZ: ";
cin>>isk4.tarz;
	
Kumas kumas4;
cout<<"ÝPLÝK TÝPÝ GÝRÝNÝZ: ";	
cin>>kumas4.ipliktipi;
cout<<"DM2 AÐIRLIK GÝRÝNÝZ: ";
cin>>kumas4.dm2agirlik;
cout<<"RENK GÝRÝNÝZ: ";
cin>>kumas4.renk;
cout<<"MÝKTAR GÝRÝNÝZ: ";
cin>>kumas4.miktar;
cout<<"DOKUMA TÝPÝ GÝRÝNÝZ: ";
cin>>kumas4.dokumatipi;
cout<<"KAPLAMA GÝRÝNÝZ: ";
cin>>kumas4.kaplama;

Mobilya mob4;
cout<<"ADET GÝRÝNÝZ: ";
cin>>mob4.adet;
cout<<"FÝYAT GÝRÝNÝZ: ";
cin>>mob4.fiyat;
	
cout<<"--------------4.ÜRÜN-------------"<<endl;	
cout<<"BÝRLEÞTÝRME: "<<isk4.birlestirme<<endl;
cout<<"BOYUT: "<< isk4.boyut<<endl;
cout<<"MALZEME: "<<isk4.malzeme<<endl;
cout<<"MÝKTAR: "<<isk4.miktar<<endl;
cout<<"TARZ: "<<isk4.tarz<<endl;
cout<<"ÝPLÝK TÝPÝ: "<<kumas4.ipliktipi<<endl;
cout<<"DM2 AÐIRLIK: "<<kumas4.dm2agirlik<<endl;
cout<<"RENK: "<<kumas4.renk<<endl;
cout<<"MÝKTAR: "<<kumas4.miktar<<endl;
cout<<"DOKUMA TÝPÝ: "<<kumas4.dokumatipi<<endl;
cout<<"KAPLAMA: "<<kumas4.kaplama<<endl;
cout<<"ADET: "<<mob4.adet<<endl;
cout<<"FÝYAT: "<<mob4.fiyat<<endl;
cout<<"\n";

Iskelet isk5;
cout<<"ÜRÜN 5 ÝÇÝN;"<<endl;
cout<<"BÝRLEÞTÝRME GÝRÝNÝZ: ";
cin>>isk5.birlestirme;
cout<<"BOYUT GÝRÝNÝZ: ";
cin>>isk5.boyut;
cout<<"MALZEME GÝRÝNÝZ: ";
cin>>isk5.malzeme;
cout<<"MÝKTAR GÝRÝNÝZ: ";
cin>>isk5.miktar;
cout<<"TARZ GÝRÝNÝZ: ";
cin>>isk5.tarz;
	
Kumas kumas5;
cout<<"ÝPLÝK TÝPÝ GÝRÝNÝZ: ";	
cin>>kumas5.ipliktipi;
cout<<"DM2 AÐIRLIK GÝRÝNÝZ: ";
cin>>kumas5.dm2agirlik;
cout<<"RENK GÝRÝNÝZ: ";
cin>>kumas5.renk;
cout<<"MÝKTAR GÝRÝNÝZ: ";
cin>>kumas5.miktar;
cout<<"DOKUMA TÝPÝ GÝRÝNÝZ: ";
cin>>kumas5.dokumatipi;
cout<<"KAPLAMA GÝRÝNÝZ: ";
cin>>kumas5.kaplama;

Mobilya mob5;
cout<<"ADET GÝRÝNÝZ: ";
cin>>mob5.adet;
cout<<"FÝYAT GÝRÝNÝZ: ";
cin>>mob5.fiyat;
	
cout<<"--------------5.ÜRÜN-------------"<<endl;	
cout<<"BÝRLEÞTÝRME: "<<isk5.birlestirme<<endl;
cout<<"BOYUT: "<< isk5.boyut<<endl;
cout<<"MALZEME: "<<isk5.malzeme<<endl;
cout<<"MÝKTAR: "<<isk5.miktar<<endl;
cout<<"TARZ: "<<isk5.tarz<<endl;
cout<<"ÝPLÝK TÝPÝ: "<<kumas5.ipliktipi<<endl;
cout<<"DM2 AÐIRLIK: "<<kumas5.dm2agirlik<<endl;
cout<<"RENK: "<<kumas5.renk<<endl;
cout<<"MÝKTAR: "<<kumas5.miktar<<endl;
cout<<"DOKUMA TÝPÝ: "<<kumas5.dokumatipi<<endl;
cout<<"KAPLAMA: "<<kumas5.kaplama<<endl;
cout<<"ADET: "<<mob5.adet<<endl;
cout<<"FÝYAT: "<<mob5.fiyat<<endl;
cout<<"\n";	

cout<<"TOPLAM FÝYAT: "<<mob1.fiyat+mob2.fiyat+mob3.fiyat+mob4.fiyat+mob5.fiyat<<endl;
	system("pause");
	return 0;
}
