#include<iostream>
#include<stdlib.h>
using namespace std;
void menu(){
	cout<<"Dadas las siguientes operaciones posibles"<<endl;
	cout<<"1. Suma"<<endl;
	cout<<"2. Resta"<<endl;
	cout<<"3. Multiplicacion"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"0. Salir"<<endl;
	cout<<"Ingrese la opcion a elegir => ";
}
void suma(int a,int b){
	cout<<"\nLa suma resultante => "<<a+b<<endl;
}
int main(){
	char opc=' ';
	int a,b;
	do{
		menu();
		do{
			cin>>opc;
		}while(opc!='0'&&opc!='1'&&opc!='2'&&opc!='3'&&opc!='4');
		
		switch(opc){
			case '0' : break;
			case '1' : {
				system("cls");
				cout<<"\nIntroduzca el primer numero => ";
				cin>>a;
				cout<<"\nIntroduzca el segundo numero => ";
				cin>>b;
				suma(a,b);
			};break;
			
		}
		system("PAUSE");
		system("cls");
	}while(opc!='0');
	return 0;
}
prueba jeje