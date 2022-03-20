#include <iostream>

using namespace std;
int main ()
{
	float a,b,hasil;
	char aritmatika,ret;
	
start:
	cout<<"Kalkulator Aritmatika Sederhana"<<endl;
	cout<<"Masukan angka yang ingin dihitung"<<endl;
	cin >> a;
	cin >> aritmatika;
	cin >> b;
	
	if (aritmatika =='+'){
		hasil = a+b;
	}else if (aritmatika =='-'){
		hasil = a-b;
	}else if (aritmatika =='*'){
		hasil = a*b;
	}else if (aritmatika =='/'){
		hasil = a/b;
	}else{
		cout<<"hanya ada kali,bagi,tambah,kurang"<<endl;
	}
	
	cout <<"hasilnya: "<< hasil << endl;
	
	cout<<"Ketik y jika ingin melakukan lagi"<<endl;
	cin >> ret;
	if (ret=='y'){
		cout<<endl;
		cout<<endl;
		goto start;
	}else{
		goto end;
	}
	end:
	return 0;
}
