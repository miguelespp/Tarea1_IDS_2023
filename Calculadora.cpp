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
 void multiplicacion(int a, int b){
	cout<<"\nLa multiplicacion resultante => "<<a*b<<endl;
}
 void division(float a, float b){
	cout<<"\nLa division resultante => "<<a/b<<endl;
}
 void resta(int a, int b){
	cout<<"\nLa resta resultante => "<<a-b<<endl;
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
				break;
			}

			case '2' : {
				system("cls");
				cout<<"\nIntroduzca el primer numero => ";
				cin>>a;
				cout<<"\nIntroduzca el segundo numero => ";
				cin>>b;
				resta(a,b);
				break;
			}
			
			
			case '3' : {
				system("cls");
				cout<<"\nIntroduzca el primer numero => ";
				cin>>a;
				cout<<"\nIntroduzca el segundo numero => ";
				cin>>b;
				multiplicacion(a,b);
				break;
			}

			case '4' : {
				system("cls");
				cout<<"\nIntroduzca el primer numero => ";
				cin>>a;
				cout<<"\nIntroduzca el segundo numero => ";
				cin>>b;
				division(a,b);
				break;
			}

		}
		system("PAUSE");
		system("cls");
	}while(opc!='0');
	return 0;
}
