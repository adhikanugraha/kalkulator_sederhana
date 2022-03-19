#include<iostream>
using namespace std;
//fungsi penjumlahan dengan 2 parameter
int tambah(int a, int b){
	int hasil;
	return hasil = a+b;
}

//fungsi pengurangan dengan 2 parameter
int kurang(int a, int b){
	int hasil;
	return hasil = a-b;
} 

//fungsi perkalian dengan 2 parameter
int kali(int a,int b){
	int hasil;
	return hasil = a*b;
}

//fungsi pembagian dengan 2 parameter
int bagi(int a,int b){
	int hasil;
	return hasil = a/b;
}

int main(){
	int a,b;
	string operasi;
	int hasil;
	int ulang;
	
//tampilan kalkulator  
//minta user masukkan variable a,b dan operator menggunakan cin
ulang:
	cout <<"====Kalkulator===="<<endl;
	cout <<"Masukkan Bilangan Pertama = ";
	cin >>a;
	cout <<"Masukan Operasi aritmatika (+,-,*,/) = ";
	cin >> operasi;
	cout <<"Masukkan Bilangan Kedua = ";
	cin >>b;
	
	

//logic memanggil fungsi
//gunakan penkondisian untuk memanggil fungsi berdasarkan variable operator
 	if( operasi =="+"){
 		hasil=tambah(a,b);
	}
	else if(operasi =="-"){
		hasil=kurang(a,b);
	}
	else if(operasi =="*"){
		hasil=kali(a,b);
	}
	else if(operasi =="/"){
		hasil=bagi(a,b);
	}
	
	//menampilkan hasil
	cout<<"Hasil dari "<< a <<" "<< operasi <<" "<<b<<" = "<<hasil<<endl;
	cout<<"Tekan 1 kemudian enter jika ingin memakai kalkulator lagi "<<endl;
	
	cin>>ulang;
	if(ulang==1){
		goto ulang;
	}

	
	
	
}


