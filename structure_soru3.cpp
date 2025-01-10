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
	
Kisiselbilgiler	alim1={"Þimal Gökdað","ISPARTA","59302809849","ESKÝÞEHÝR"};
Gonderi gonderi1={"152",105,100,true,825};
Kurye kurye1={"Mehmet Yýlmaz","05728910421"};	
cout<<"ALICI ADI SOYADI: "<<alim1.ad_soyad<<endl;
cout<<"ALIM ADRESÝ: "<<alim1.alim_adresi<<endl;
cout<<"ALICI TELEFON NO: "<<alim1.telefon_no<<endl;
cout<<"GÖNDERÝM ADRESÝ: "<<alim1.gonderim_adresi<<endl;	
cout<<"GÖNDERÝ NO: "<<gonderi1.gonderi_no<<endl;
cout<<"AÐIRLIK: "<<gonderi1.agirlik<<endl;
cout<<"HACÝM: "<<gonderi1.hacim<<endl;
cout<<"GARANTÝ: "<<gonderi1.garanti<<endl;
cout<<"ÜCRET: "<<gonderi1.ucret<<endl;	
cout<<"\n";	
	
Kisiselbilgiler	alim2={"Veli Kýlýç","ADANA","59302892039","MUÞ"};
Gonderi gonderi2={"19503",8,5,false,2.68};
Kurye kurye2={"Merve Haliloðlu","05728903420"};	
cout<<"ALICI ADI SOYADI: "<<alim2.ad_soyad<<endl;
cout<<"ALIM ADRESÝ: "<<alim2.alim_adresi<<endl;
cout<<"ALICI TELEFON NO: "<<alim2.telefon_no<<endl;
cout<<"GÖNDERÝM ADRESÝ: "<<alim2.gonderim_adresi<<endl;	
cout<<"GÖNDERÝ NO: "<<gonderi2.gonderi_no<<endl;
cout<<"AÐIRLIK: "<<gonderi2.agirlik<<endl;
cout<<"HACÝM: "<<gonderi2.hacim<<endl;
cout<<"GARANTÝ: "<<gonderi2.garanti<<endl;
cout<<"ÜCRET: "<<gonderi2.ucret<<endl;	
cout<<"\n";

	
Kisiselbilgiler	alim3={"Emre Erkal","AYDIN","0581298949","ÝZMÝR"};
Gonderi gonderi3={"193209",15,160,true,75};
Kurye kurye3={"Simge Öz","057298654"};	
cout<<"ALICI ADI SOYADI: "<<alim3.ad_soyad<<endl;
cout<<"ALIM ADRESÝ: "<<alim3.alim_adresi<<endl;
cout<<"ALICI TELEFON NO: "<<alim3.telefon_no<<endl;
cout<<"GÖNDERÝM ADRESÝ: "<<alim3.gonderim_adresi<<endl;	
cout<<"GÖNDERÝ NO: "<<gonderi3.gonderi_no<<endl;
cout<<"AÐIRLIK: "<<gonderi3.agirlik<<endl;
cout<<"HACÝM: "<<gonderi3.hacim<<endl;
cout<<"GARANTÝ: "<<gonderi3.garanti<<endl;
cout<<"ÜCRET: "<<gonderi3.ucret<<endl;	
cout<<"\n";
		
Kisiselbilgiler	alim4={"Michael Scofield","Meksika","3024089895","UTAH"};
Gonderi gonderi4={"10002",10,100,false,10210};
Kurye kurye4={"Glenn Rhee","02938942802"};	
cout<<"ALICI ADI SOYADI: "<<alim4.ad_soyad<<endl;
cout<<"ALIM ADRESÝ: "<<alim4.alim_adresi<<endl;
cout<<"ALICI TELEFON NO: "<<alim4.telefon_no<<endl;
cout<<"GÖNDERÝM ADRESÝ: "<<alim4.gonderim_adresi<<endl;	
cout<<"GÖNDERÝ NO: "<<gonderi4.gonderi_no<<endl;
cout<<"AÐIRLIK: "<<gonderi4.agirlik<<endl;
cout<<"HACÝM: "<<gonderi4.hacim<<endl;
cout<<"GARANTÝ: "<<gonderi4.garanti<<endl;
cout<<"ÜCRET: "<<gonderi4.ucret<<endl;	
cout<<"\n";		

Kisiselbilgiler	alim5={"Ezgi Savaþ","BURDUR","0563828782","YEÞÝLDERE"};
Gonderi gonderi5={"1240",5,19,false,100};
Kurye kurye5={"Sinan Kaya","058291949"};	
cout<<"ALICI ADI SOYADI: "<<alim5.ad_soyad<<endl;
cout<<"ALIM ADRESÝ: "<<alim5.alim_adresi<<endl;
cout<<"ALICI TELEFON NO: "<<alim5.telefon_no<<endl;
cout<<"GÖNDERÝM ADRESÝ: "<<alim5.gonderim_adresi<<endl;	
cout<<"GÖNDERÝ NO: "<<gonderi5.gonderi_no<<endl;
cout<<"AÐIRLIK: "<<gonderi5.agirlik<<endl;
cout<<"HACÝM: "<<gonderi5.hacim<<endl;
cout<<"GARANTÝ: "<<gonderi5.garanti<<endl;
cout<<"ÜCRET: "<<gonderi5.ucret<<endl;	
cout<<"\n";			
	system("pause");
	return 0;
}
