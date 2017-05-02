
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	system("CLS");
	cout<<"---------PROGRAM INPUT DATA MATRIX-----------\n\n";
	cout<<"-----------Masukan Ordo Matrix:--------------\n\n";

	int M[3][3]; 	/*[kolom][baris] */

//-----------------LOOPING INPUT---------------------------//
	for (int i =0; i<3; i++) //OPERASI KOLOM
	{
		for (int j =0; j<3; j++) //OPERASI BARIS
		{
			cout<<"Masukan Matrix-1 Baris-"<<j<<" Kolom ke-"<<i<<":   ";
			cin>>M[i][j]; /*PENGULANGAN M*/
		}
	}
	system("CLS");

	cout<<"---------PROGRAM INPUT DATA MATRIX-----------\n\n";
	cout<<"---------------------------------------------\n\n";
	cout<<"Ordo: 3x3\n\n";
//-----------------LOOPING OUTPUT---------------------------//
	cout<<M[1][1];
	return 0;
}
