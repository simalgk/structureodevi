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
cout<<"�R�N 1 ���N;"<<endl;
cout<<"B�RLE�T�RME G�R�N�Z: ";
cin>>isk1.birlestirme;
cout<<"BOYUT G�R�N�Z: ";
cin>>isk1.boyut;
cout<<"MALZEME G�R�N�Z: ";
cin>>isk1.malzeme;
cout<<"M�KTAR G�R�N�Z: ";
cin>>isk1.miktar;
cout<<"TARZ G�R�N�Z: ";
cin>>isk1.tarz;
	
Kumas kumas1;
cout<<"�PL�K T�P� G�R�N�Z: ";	
cin>>kumas1.ipliktipi;
cout<<"DM2 A�IRLIK G�R�N�Z: ";
cin>>kumas1.dm2agirlik;
cout<<"RENK G�R�N�Z: ";
cin>>kumas1.renk;
cout<<"M�KTAR G�R�N�Z: ";
cin>>kumas1.miktar;
cout<<"DOKUMA T�P� G�R�N�Z: ";
cin>>kumas1.dokumatipi;
cout<<"KAPLAMA G�R�N�Z: ";
cin>>kumas1.kaplama;

Mobilya mob1;
cout<<"ADET G�R�N�Z: ";
cin>>mob1.adet;
cout<<"F�YAT G�R�N�Z: ";
cin>>mob1.fiyat;
	
cout<<"--------------1.�R�N-------------"<<endl;	
cout<<"B�RLE�T�RME: "<<isk1.birlestirme<<endl;
cout<<"BOYUT: "<< isk1.boyut<<endl;
cout<<"MALZEME: "<<isk1.malzeme<<endl;
cout<<"M�KTAR: "<<isk1.miktar<<endl;
cout<<"TARZ: "<<isk1.tarz<<endl;
cout<<"�PL�K T�P�: "<<kumas1.ipliktipi<<endl;
cout<<"DM2 A�IRLIK: "<<kumas1.dm2agirlik<<endl;
cout<<"RENK: "<<kumas1.renk<<endl;
cout<<"M�KTAR: "<<kumas1.miktar<<endl;
cout<<"DOKUMA T�P�: "<<kumas1.dokumatipi<<endl;
cout<<"KAPLAMA: "<<kumas1.kaplama<<endl;
cout<<"ADET: "<<mob1.adet<<endl;
cout<<"F�YAT: "<<mob1.fiyat<<endl;
cout<<"\n";

Iskelet isk2;
cout<<"�R�N 2 ���N;"<<endl;
cout<<"B�RLE�T�RME G�R�N�Z: ";
cin>>isk2.birlestirme;
cout<<"BOYUT G�R�N�Z: ";
cin>>isk2.boyut;
cout<<"MALZEME G�R�N�Z: ";
cin>>isk2.malzeme;
cout<<"M�KTAR G�R�N�Z: ";
cin>>isk2.miktar;
cout<<"TARZ G�R�N�Z: ";
cin>>isk2.tarz;
	
Kumas kumas2;
cout<<"�PL�K T�P� G�R�N�Z: ";	
cin>>kumas2.ipliktipi;
cout<<"DM2 A�IRLIK G�R�N�Z: ";
cin>>kumas2.dm2agirlik;
cout<<"RENK G�R�N�Z: ";
cin>>kumas2.renk;
cout<<"M�KTAR G�R�N�Z: ";
cin>>kumas2.miktar;
cout<<"DOKUMA T�P� G�R�N�Z: ";
cin>>kumas2.dokumatipi;
cout<<"KAPLAMA G�R�N�Z: ";
cin>>kumas2.kaplama;

Mobilya mob2;
cout<<"ADET G�R�N�Z: ";
cin>>mob2.adet;
cout<<"F�YAT G�R�N�Z: ";
cin>>mob2.fiyat;
	
cout<<"--------------2.�R�N-------------"<<endl;	
cout<<"B�RLE�T�RME: "<<isk2.birlestirme<<endl;
cout<<"BOYUT: "<< isk2.boyut<<endl;
cout<<"MALZEME: "<<isk2.malzeme<<endl;
cout<<"M�KTAR: "<<isk2.miktar<<endl;
cout<<"TARZ: "<<isk2.tarz<<endl;
cout<<"�PL�K T�P�: "<<kumas2.ipliktipi<<endl;
cout<<"DM2 A�IRLIK: "<<kumas2.dm2agirlik<<endl;
cout<<"RENK: "<<kumas2.renk<<endl;
cout<<"M�KTAR: "<<kumas2.miktar<<endl;
cout<<"DOKUMA T�P�: "<<kumas2.dokumatipi<<endl;
cout<<"KAPLAMA: "<<kumas2.kaplama<<endl;
cout<<"ADET: "<<mob2.adet<<endl;
cout<<"F�YAT: "<<mob2.fiyat<<endl;

Iskelet isk3;
cout<<"�R�N 3 ���N;"<<endl;
cout<<"B�RLE�T�RME G�R�N�Z: ";
cin>>isk3.birlestirme;
cout<<"BOYUT G�R�N�Z: ";
cin>>isk3.boyut;
cout<<"MALZEME G�R�N�Z: ";
cin>>isk3.malzeme;
cout<<"M�KTAR G�R�N�Z: ";
cin>>isk3.miktar;
cout<<"TARZ G�R�N�Z: ";
cin>>isk3.tarz;
	
Kumas kumas3;
cout<<"�PL�K T�P� G�R�N�Z: ";	
cin>>kumas3.ipliktipi;
cout<<"DM2 A�IRLIK G�R�N�Z: ";
cin>>kumas3.dm2agirlik;
cout<<"RENK G�R�N�Z: ";
cin>>kumas3.renk;
cout<<"M�KTAR G�R�N�Z: ";
cin>>kumas3.miktar;
cout<<"DOKUMA T�P� G�R�N�Z: ";
cin>>kumas3.dokumatipi;
cout<<"KAPLAMA G�R�N�Z: ";
cin>>kumas3.kaplama;

Mobilya mob3;
cout<<"ADET G�R�N�Z: ";
cin>>mob3.adet;
cout<<"F�YAT G�R�N�Z: ";
cin>>mob3.fiyat;
	
cout<<"--------------3.�R�N-------------"<<endl;	
cout<<"B�RLE�T�RME: "<<isk3.birlestirme<<endl;
cout<<"BOYUT: "<< isk3.boyut<<endl;
cout<<"MALZEME: "<<isk3.malzeme<<endl;
cout<<"M�KTAR: "<<isk3.miktar<<endl;
cout<<"TARZ: "<<isk3.tarz<<endl;
cout<<"�PL�K T�P�: "<<kumas3.ipliktipi<<endl;
cout<<"DM2 A�IRLIK: "<<kumas3.dm2agirlik<<endl;
cout<<"RENK: "<<kumas3.renk<<endl;
cout<<"M�KTAR: "<<kumas3.miktar<<endl;
cout<<"DOKUMA T�P�: "<<kumas3.dokumatipi<<endl;
cout<<"KAPLAMA: "<<kumas3.kaplama<<endl;
cout<<"ADET: "<<mob3.adet<<endl;
cout<<"F�YAT: "<<mob3.fiyat<<endl;
cout<<"\n";

Iskelet isk4;
cout<<"�R�N 4 ���N;"<<endl;
cout<<"B�RLE�T�RME G�R�N�Z: ";
cin>>isk4.birlestirme;
cout<<"BOYUT G�R�N�Z: ";
cin>>isk4.boyut;
cout<<"MALZEME G�R�N�Z: ";
cin>>isk4.malzeme;
cout<<"M�KTAR G�R�N�Z: ";
cin>>isk4.miktar;
cout<<"TARZ G�R�N�Z: ";
cin>>isk4.tarz;
	
Kumas kumas4;
cout<<"�PL�K T�P� G�R�N�Z: ";	
cin>>kumas4.ipliktipi;
cout<<"DM2 A�IRLIK G�R�N�Z: ";
cin>>kumas4.dm2agirlik;
cout<<"RENK G�R�N�Z: ";
cin>>kumas4.renk;
cout<<"M�KTAR G�R�N�Z: ";
cin>>kumas4.miktar;
cout<<"DOKUMA T�P� G�R�N�Z: ";
cin>>kumas4.dokumatipi;
cout<<"KAPLAMA G�R�N�Z: ";
cin>>kumas4.kaplama;

Mobilya mob4;
cout<<"ADET G�R�N�Z: ";
cin>>mob4.adet;
cout<<"F�YAT G�R�N�Z: ";
cin>>mob4.fiyat;
	
cout<<"--------------4.�R�N-------------"<<endl;	
cout<<"B�RLE�T�RME: "<<isk4.birlestirme<<endl;
cout<<"BOYUT: "<< isk4.boyut<<endl;
cout<<"MALZEME: "<<isk4.malzeme<<endl;
cout<<"M�KTAR: "<<isk4.miktar<<endl;
cout<<"TARZ: "<<isk4.tarz<<endl;
cout<<"�PL�K T�P�: "<<kumas4.ipliktipi<<endl;
cout<<"DM2 A�IRLIK: "<<kumas4.dm2agirlik<<endl;
cout<<"RENK: "<<kumas4.renk<<endl;
cout<<"M�KTAR: "<<kumas4.miktar<<endl;
cout<<"DOKUMA T�P�: "<<kumas4.dokumatipi<<endl;
cout<<"KAPLAMA: "<<kumas4.kaplama<<endl;
cout<<"ADET: "<<mob4.adet<<endl;
cout<<"F�YAT: "<<mob4.fiyat<<endl;
cout<<"\n";

Iskelet isk5;
cout<<"�R�N 5 ���N;"<<endl;
cout<<"B�RLE�T�RME G�R�N�Z: ";
cin>>isk5.birlestirme;
cout<<"BOYUT G�R�N�Z: ";
cin>>isk5.boyut;
cout<<"MALZEME G�R�N�Z: ";
cin>>isk5.malzeme;
cout<<"M�KTAR G�R�N�Z: ";
cin>>isk5.miktar;
cout<<"TARZ G�R�N�Z: ";
cin>>isk5.tarz;
	
Kumas kumas5;
cout<<"�PL�K T�P� G�R�N�Z: ";	
cin>>kumas5.ipliktipi;
cout<<"DM2 A�IRLIK G�R�N�Z: ";
cin>>kumas5.dm2agirlik;
cout<<"RENK G�R�N�Z: ";
cin>>kumas5.renk;
cout<<"M�KTAR G�R�N�Z: ";
cin>>kumas5.miktar;
cout<<"DOKUMA T�P� G�R�N�Z: ";
cin>>kumas5.dokumatipi;
cout<<"KAPLAMA G�R�N�Z: ";
cin>>kumas5.kaplama;

Mobilya mob5;
cout<<"ADET G�R�N�Z: ";
cin>>mob5.adet;
cout<<"F�YAT G�R�N�Z: ";
cin>>mob5.fiyat;
	
cout<<"--------------5.�R�N-------------"<<endl;	
cout<<"B�RLE�T�RME: "<<isk5.birlestirme<<endl;
cout<<"BOYUT: "<< isk5.boyut<<endl;
cout<<"MALZEME: "<<isk5.malzeme<<endl;
cout<<"M�KTAR: "<<isk5.miktar<<endl;
cout<<"TARZ: "<<isk5.tarz<<endl;
cout<<"�PL�K T�P�: "<<kumas5.ipliktipi<<endl;
cout<<"DM2 A�IRLIK: "<<kumas5.dm2agirlik<<endl;
cout<<"RENK: "<<kumas5.renk<<endl;
cout<<"M�KTAR: "<<kumas5.miktar<<endl;
cout<<"DOKUMA T�P�: "<<kumas5.dokumatipi<<endl;
cout<<"KAPLAMA: "<<kumas5.kaplama<<endl;
cout<<"ADET: "<<mob5.adet<<endl;
cout<<"F�YAT: "<<mob5.fiyat<<endl;
cout<<"\n";	

cout<<"TOPLAM F�YAT: "<<mob1.fiyat+mob2.fiyat+mob3.fiyat+mob4.fiyat+mob5.fiyat<<endl;
	system("pause");
	return 0;
}
