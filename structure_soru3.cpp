#include <iostream>
#include <locale.h>

using namespace std;

struct Kisiselbilgiler
{string ad_soyad;
string alim_adresi;
string telefon_no;
string gonderim_adresi;
};
struct Gonderi
{string gonderi_no;
float agirlik;
float hacim;
bool garanti;
float ucret;
};
struct Kurye
{string ad_soyad;
string telefon_no;
};
int main()
{
	setlocale(LC_ALL,"Turkish");
	
Kisiselbilgiler	alim1={"�imal G�kda�","ISPARTA","59302809849","ESK��EH�R"};
Gonderi gonderi1={"152",105,100,true,825};
Kurye kurye1={"Mehmet Y�lmaz","05728910421"};	
cout<<"ALICI ADI SOYADI: "<<alim1.ad_soyad<<endl;
cout<<"ALIM ADRES�: "<<alim1.alim_adresi<<endl;
cout<<"ALICI TELEFON NO: "<<alim1.telefon_no<<endl;
cout<<"G�NDER�M ADRES�: "<<alim1.gonderim_adresi<<endl;	
cout<<"G�NDER� NO: "<<gonderi1.gonderi_no<<endl;
cout<<"A�IRLIK: "<<gonderi1.agirlik<<endl;
cout<<"HAC�M: "<<gonderi1.hacim<<endl;
cout<<"GARANT�: "<<gonderi1.garanti<<endl;
cout<<"�CRET: "<<gonderi1.ucret<<endl;	
cout<<"\n";	
	
Kisiselbilgiler	alim2={"Veli K�l��","ADANA","59302892039","MU�"};
Gonderi gonderi2={"19503",8,5,false,2.68};
Kurye kurye2={"Merve Halilo�lu","05728903420"};	
cout<<"ALICI ADI SOYADI: "<<alim2.ad_soyad<<endl;
cout<<"ALIM ADRES�: "<<alim2.alim_adresi<<endl;
cout<<"ALICI TELEFON NO: "<<alim2.telefon_no<<endl;
cout<<"G�NDER�M ADRES�: "<<alim2.gonderim_adresi<<endl;	
cout<<"G�NDER� NO: "<<gonderi2.gonderi_no<<endl;
cout<<"A�IRLIK: "<<gonderi2.agirlik<<endl;
cout<<"HAC�M: "<<gonderi2.hacim<<endl;
cout<<"GARANT�: "<<gonderi2.garanti<<endl;
cout<<"�CRET: "<<gonderi2.ucret<<endl;	
cout<<"\n";

	
Kisiselbilgiler	alim3={"Emre Erkal","AYDIN","0581298949","�ZM�R"};
Gonderi gonderi3={"193209",15,160,true,75};
Kurye kurye3={"Simge �z","057298654"};	
cout<<"ALICI ADI SOYADI: "<<alim3.ad_soyad<<endl;
cout<<"ALIM ADRES�: "<<alim3.alim_adresi<<endl;
cout<<"ALICI TELEFON NO: "<<alim3.telefon_no<<endl;
cout<<"G�NDER�M ADRES�: "<<alim3.gonderim_adresi<<endl;	
cout<<"G�NDER� NO: "<<gonderi3.gonderi_no<<endl;
cout<<"A�IRLIK: "<<gonderi3.agirlik<<endl;
cout<<"HAC�M: "<<gonderi3.hacim<<endl;
cout<<"GARANT�: "<<gonderi3.garanti<<endl;
cout<<"�CRET: "<<gonderi3.ucret<<endl;	
cout<<"\n";
		
Kisiselbilgiler	alim4={"Michael Scofield","Meksika","3024089895","UTAH"};
Gonderi gonderi4={"10002",10,100,false,10210};
Kurye kurye4={"Glenn Rhee","02938942802"};	
cout<<"ALICI ADI SOYADI: "<<alim4.ad_soyad<<endl;
cout<<"ALIM ADRES�: "<<alim4.alim_adresi<<endl;
cout<<"ALICI TELEFON NO: "<<alim4.telefon_no<<endl;
cout<<"G�NDER�M ADRES�: "<<alim4.gonderim_adresi<<endl;	
cout<<"G�NDER� NO: "<<gonderi4.gonderi_no<<endl;
cout<<"A�IRLIK: "<<gonderi4.agirlik<<endl;
cout<<"HAC�M: "<<gonderi4.hacim<<endl;
cout<<"GARANT�: "<<gonderi4.garanti<<endl;
cout<<"�CRET: "<<gonderi4.ucret<<endl;	
cout<<"\n";		

Kisiselbilgiler	alim5={"Ezgi Sava�","BURDUR","0563828782","YE��LDERE"};
Gonderi gonderi5={"1240",5,19,false,100};
Kurye kurye5={"Sinan Kaya","058291949"};	
cout<<"ALICI ADI SOYADI: "<<alim5.ad_soyad<<endl;
cout<<"ALIM ADRES�: "<<alim5.alim_adresi<<endl;
cout<<"ALICI TELEFON NO: "<<alim5.telefon_no<<endl;
cout<<"G�NDER�M ADRES�: "<<alim5.gonderim_adresi<<endl;	
cout<<"G�NDER� NO: "<<gonderi5.gonderi_no<<endl;
cout<<"A�IRLIK: "<<gonderi5.agirlik<<endl;
cout<<"HAC�M: "<<gonderi5.hacim<<endl;
cout<<"GARANT�: "<<gonderi5.garanti<<endl;
cout<<"�CRET: "<<gonderi5.ucret<<endl;	
cout<<"\n";			
	system("pause");
	return 0;
}
