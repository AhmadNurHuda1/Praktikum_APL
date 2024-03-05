#include <iostream>
using namespace std;

int main(){
	float celsius, reaumur, kelvin, fahrenheit, hasilkonversi;
	int menu;
	string menuc, menuf, menur, menuk, konversi, pilih, ulang;
		while (true) {
		cout<<"Program Konversi Suhu"<<endl;
		cout<<"[1] Celsius"<<endl;
		cout<<"[2] Fahrenheit"<<endl;
		cout<<"[3] Reaumur"<<endl;
		cout<<"[4] Kelvin"<<endl;
		cout<<"Pilih Suhu Yang Mau Dikonversi: ";cin>>menu;
		
		if(menu == 1){
			pilih = "Celsius";
			cout<<"Masukkan Angka Celsius: ";cin>>celsius;
			cout<<"[1] Fahrenheit"<<endl;
			cout<<"[2] Reaumur"<<endl;
			cout<<"[3] Kelvin"<<endl;
			cout<<"Ingin Konversi Celsius Ke Apa: ";cin>>menuc;
			if(menuc == "1"){
				konversi = "Fahrenheit";
				hasilkonversi = ((celsius*9)/5)+32;
				
			} else if (menuc == "2"){
				konversi = "Reaumur";
				hasilkonversi = (celsius*4)/5;
				
			} else if (menuc == "3"){
				konversi = "Kelvin";
				hasilkonversi = celsius + 273.15;
			} else {
				cout<<"Inputan Salah"<<endl;
			}
			
			
		} else if (menu == 2){
			pilih = "Fahrenheit";
			cout<<"Masukkan Angka Fahrenheit: ";cin>>fahrenheit;
			cout<<"[1] Celsius"<<endl;
			cout<<"[2] Reaumur"<<endl;
			cout<<"[3] Kelvin"<<endl;
			cout<<"Ingin Konversi Fahrenheit Ke Apa: ";cin>>menuf;
			if(menuf == "1"){
				konversi = "celsius";
				hasilkonversi = ((fahrenheit - 32)*5)/9;
				
			} else if (menuf == "2"){
				konversi = "Reaumur";
				hasilkonversi = ((fahrenheit - 32)*4)/9;
				
			} else if (menuf == "3"){
				konversi = "Kelvin";
				hasilkonversi = ((fahrenheit + 459.67)*5)/9;
				
			} else {
				cout<<"Inputan Salah"<<endl;
			}
			
			
			
		} else if (menu == 3){
			pilih = "Reaumur";
			cout<<"Masukkan Angka Reaumur: ";cin>>reaumur;
			cout<<"[1] Celsius"<<endl;
			cout<<"[2] Fahrenheit"<<endl;
			cout<<"[3] Kelvin"<<endl;
			cout<<"Ingin Konversi Reaumur Ke Apa: ";cin>>menur;
			if(menur == "1"){
				konversi = "celsius";
				hasilkonversi = reaumur/0.8;
				
			} else if (menur == "2"){
				konversi = "Fahrenheit";
				hasilkonversi = (reaumur*2.25)+32;
				
			} else if (menur == "3"){
				konversi = "Kelvin";
				hasilkonversi = (reaumur/0.8)+273.15;
				
			} else {
				cout<<"Inputan Salah"<<endl;
			}
			
			
			
		} else if (menu == 4){
			pilih = "Kelvin";
			cout<<"Masukkan Angka Kelvin: ";cin>>kelvin;
			cout<<"[1] Celsius"<<endl;
			cout<<"[2] Fahrenheit"<<endl;
			cout<<"[3] Reaumur"<<endl;
			cout<<"Ingin Konversi Kelvin Ke Apa: ";cin>>menuk;
			if(menuk == "1"){
				konversi = "celsius";
				hasilkonversi = kelvin - 273.15;
				
			} else if (menuk == "2"){
				konversi = "Fahrenheit";
				hasilkonversi = (((kelvin-273.15)*9)/5)+32;
				
			} else if (menuk == "3"){
				konversi = "Reaumur";
				hasilkonversi = ((kelvin - 273.15)*4)/5;
				
			} else {
				cout<<"Inputan Salah"<<endl;
			}
			
			
		} else {
			cout<<"Inputan Salah"<<endl;
		}
		cout<<"Hasil Konversi Dari "<<pilih<<" Ke "<<konversi<<" Adalah "<<hasilkonversi<<endl;
		cout<<"Apakah Ingin Konversi Lagi?(Ketik ya atau tidak): ";cin>>ulang;
		
		if(ulang != "ya"){
			break;
			return 0;
		}
		
		
	}
	
	
}