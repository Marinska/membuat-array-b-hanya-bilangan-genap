#include <iostream> //Nama Umar Ibnu Zainal M
using namespace std; //NIM 311810909

void logika()  //dari soal array a = array b
{ 				//akan dibuat array b = nilai genap dari nilai array a
	int a[5];
	int b[5];
	for(int i = 1;i<=5;i++)
	{
		cout<<"Masukan nilai indeks ke-"<<i-1<<" : ";
		cin>>a[i];
	b[i]=a[i];
	}	
	cout<<"Array a[5] = {";
	for(int j=1;j<=5;j++)
	{
		cout<<a[j]<<",";
	}
	cout<<"\b}\n";
	
	cout<<"Array b[5] = {";
	for(int k=1;k<=5;k++)
	{
		if(b[k]%2==0)
		cout<<b[k]<<",";
		else
		cout<<"_,";
	}
	cout<<"\b}";
}

int main()
{
	logika();
}
