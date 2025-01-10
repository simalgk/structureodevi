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
cout<<"B�NEK MARKA G�R�N�Z"<<endl;
getline(cin,binek.marka);
cout<<"B�NEK MODEL G�R�N�Z"<<endl;
getline(cin,binek.model);
cout<<"B�NEK YIL G�R�N�Z"<<endl;
cin>>binek.yil;
cout<<"B�NEK K�LOMETRE G�R�N�Z"<<endl;
cin>>binek.km;	
cout<<"B�NEK F�YAT G�R�N�Z"<<endl;
cin>>binek.fiyat;
binek.yakit=B;	

cout<<"---------------B�NEK-------------"<<endl;
cout<<"MARKA: "<<binek.marka<<endl;	
cout<<"MODEL: "<<binek.model<<endl;		
cout<<"YIL: "<<binek.yil<<endl;	
cout<<"K�LOMETRE: "<<binek.km<<endl;
cout<<"F�YAT: "<<binek.fiyat<<endl;

if(binek.yakit==0)
cout<<"YAKIT: "<<'B'<<endl;
else if (binek.yakit==1)
cout<<"YAKIT: "<<'D'<<endl;
else if (binek.yakit==2)
cout<<"YAKIT: "<<'G'<<endl;
else if (binek.yakit==3)
cout<<"YAKIT: "<<'H'<<endl;
	
Otomobil suv;
cout<<"\n SUV MARKA G�R�N�Z"<<endl;
cin>>suv.marka;
cout<<"SUV MODEL G�R�N�Z"<<endl;
cin>>suv.model;
cout<<"SUV YIL G�R�N�Z"<<endl;
cin>>suv.yil;
cout<<"SUV K�LOMETRE G�R�N�Z"<<endl;
cin>>suv.km;	
cout<<"SUV F�YAT G�R�N�Z"<<endl;
cin>>suv.fiyat;
suv.yakit=H; 
	
cout<<"---------------SUV-------------"<<endl;
cout<<"MARKA: "<<suv.marka<<endl;	
cout<<"MODEL: "<<suv.model<<endl;		
cout<<"YIL: "<<suv.yil<<endl;	
cout<<"K�LOMETRE: "<<suv.km<<endl;
cout<<"F�YAT: "<<suv.fiyat<<endl;

if(suv.yakit==0)
cout<<"YAKIT: "<<'B'<<endl;
else if (suv.yakit==1)
cout<<"YAKIT: "<<'D'<<endl;
else if (suv.yakit==2)
cout<<"YAKIT: "<<'G'<<endl;
else if (suv.yakit==3)
cout<<"YAKIT: "<<'H'<<endl;


Otomobil ticari;
cout<<"\n T�CAR� MARKA G�R�N�Z"<<endl;
cin>>ticari.marka;
cout<<"T�CAR� MODEL G�R�N�Z"<<endl;
cin>>ticari.model;
cout<<"T�CAR� YIL G�R�N�Z"<<endl;
cin>>ticari.yil;
cout<<"T�CAR� K�LOMETRE G�R�N�Z"<<endl;
cin>>ticari.km;	
cout<<"T�CAR� F�YAT G�R�N�Z"<<endl;
cin>>ticari.fiyat;
ticari.yakit=G;	

cout<<"---------------T�CAR�-------------"<<endl;
cout<<"MARKA: "<<ticari.marka<<endl;	
cout<<"MODEL: "<<ticari.model<<endl;		
cout<<"YIL: "<<ticari.yil<<endl;	
cout<<"K�LOMETRE: "<<ticari.km<<endl;
cout<<"F�YAT: "<<ticari.fiyat<<endl;

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
