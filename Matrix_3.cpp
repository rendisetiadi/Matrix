
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	system("CLS");
	int a,b,x,y;
	cout<<"---------PROGRAM INPUT DATA MATRIX-----------\n\n";
	cout<<"-----------Masukan Ordo Matrix:--------------\n\n";
	cout<<"Baris: "; cin>>b;
	cout<<"Kolom: "; cin>>a;

	int M[a][b]; 	/*[kolom][baris] */

//-----------------LOOPING INPUT---------------------------//
	for (int i =0; i<a; i++) //OPERASI KOLOM
	{
		for (int j =0; j<b; j++) //OPERASI BARIS
		{
			cout<<"Masukan Matrix-1 Baris-"<<j<<" Kolom ke-"<<i<<":   ";
			cin>>M[i][j]; /*PENGULANGAN M*/
		}
	}
	system("CLS");

	cout<<"---------PROGRAM INPUT DATA MATRIX-----------\n\n";
	cout<<"---------------------------------------------\n\n";
	cout<<"Ordo: "<<b<<" x "<<a<<"\n\n";
//-----------------LOOPING OUTPUT---------------------------//
	for (int j =0; j<b; j++) //PENAMPIL TABEL
	{
		cout<<"+---+";
	}
	cout<<"\n";

	for (int i =0; i<a; i++) //OPERASI KOLOM
	{
		for (int j =0; j<b; j++) //OPERASI BARIS
		{
			cout<<"| "<<M[i][j]<<" |"; /*Penjumlahan Matrix*/
		}
		cout<<"\n";

		for (int j =0; j<b; j++) //PENAMPIL TABEL
		{
			cout<<"+---+";
		}
		cout<<"\n";
	}
//------------------LOOPING OUTPUT--------------------------//

	return 0;
}