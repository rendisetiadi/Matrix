#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	system("CLS");
	cout<<"---------PROGRAM INPUT DATA MATRIX-----------\n\n";
	cout<<"-------------------PENJUMLAHAN---------------\n\n";

	int M[3][3]; 	/*[kolom][baris] */
	int M1[3][3]; 	/*[kolom][baris] */
	int M2[3][3]; 	/*[kolom][baris] */

//-----------------LOOPING INPUT---------------------------//
	for (int i =0; i<3; i++) //OPERASI KOLOM
	{
		for (int j =0; j<3; j++) //OPERASI BARIS
		{
			cout<<"Masukan Matrix-1 Baris-"<<j<<" Kolom ke-"<<i<<":   ";
			cin>>M1[i][j]; /*PENGULANGAN M*/
			cout<<"Masukan Matrix-2 Baris-"<<j<<" Kolom ke-"<<i<<":   ";
			cin>>M2[i][j]; /*PENGULANGAN M*/
		}
	}
	system("CLS");

	cout<<"---------PROGRAM INPUT DATA MATRIX-----------\n\n";
	cout<<"------------------PENJUMLAHAN----------------\n\n";
	cout<<"Ordo: 3x3\n\n";
//-----------------LOOPING OUTPUT---------------------------//

	for (int i =0; i<3; i++) //OPERASI KOLOM
	{
		for (int j =0; j<3; j++) //OPERASI BARIS
		{
			M[i][j] = M1[i][j]+M2[i][j]; /*Penjumlahan Matrix*/
		}
	}
//------------------LOOPING OUTPUT--------------------------//
	cout<<M[1][1];
	return 0;
}