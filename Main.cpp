#include"Templo.cpp"
#include"Reposteria.cpp"
#include<iostream>
using namespace std;
int main(){
	char opcion;
	string stringval;
	cout<<"\nnombre reposteria: ";
	getline(cin,stringval);
	cout<<endl;
	Reposteria*reposteria=new Reposteria(stringval,10000);
	
	
	
	do{
		cout<<"\n1-hacer click\n2-comprar granja\n3-comprar banco\n4-comprar templo\n5-comprar oreo\n6-comprar migajas\n7-mostrar edificios\n8-salir\n?:";
		cin>>opcion;
		switch(opcion){
			case '1':
			//clic
				break;
			case '2':
				//add granja
				reposteria->comprarGranja();
				break;
			case'3':
				reposteria->comprarBanco();
				break;
			case'4'	:
				reposteria->comprarTemplo();
				break;
			case'5'	:
				break;
			case'6'	:
				break;
			case'7'	:
				//listar
				cout<<"edificios"<<endl;
				reposteria->mostrar_edificios();
				break;
			case'8'	:
				//salir
				break;
			default:
				cout<<"\nla opcion no es valida\n";	
		}
		
	}while(opcion!='8');	
	
	
	
	return 0;
}
