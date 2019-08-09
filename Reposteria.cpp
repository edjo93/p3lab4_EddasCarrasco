#ifndef REPOSTERIA_CPP
#define REPOSTERIA_CPP
	#include"Templo.cpp"
	#include"Granja.cpp"
	#include"Banco.cpp"
	#include<vector>
	#include<iostream>
	using namespace std;
	class Reposteria{
		private:
			string nombre_jugador;
			int	numero_galletas;
			vector<Edificio*>edificios;
		public:
			
			Reposteria(string nombre_jugador,int numero_galletas){
				this->nombre_jugador=nombre_jugador;
				this->numero_galletas=numero_galletas;
				
			}
			
			void mostrar_edificios(){
				if(edificios.empty()){
					cout<<"\nno hay edificios aun\n";
				}else{
					for(int i=0;i<edificios.size();i++){
						cout<<"["<<i<<"] "<<edificios[i]->getNombre()<<endl;
						
					}		
				}
				
			}
			
			void comprarTemplo()	{
				Templo*templo_temp=new Templo();
				int templos=0;
				//buscamos templos para gestionar el valor del siguiente	
				for(int i=0;i<edificios.size();i++){
					if(edificios[i]->getNombre()=="templo"){
						templos++;
					}
				}
				//dependiendo de los templos calculamos el precio
				int precio=0;
				
				precio=templos*templo_temp->getAumento()+templo_temp->getPrecio_base();
				
				//verificamos que se pueda comprar si tenemos las galletas necesaria
				if(precio<=numero_galletas){
					//add
					edificios.push_back(new Templo());
					numero_galletas-=precio;
				}else{
					cout<<"\nno se puede comprar un templo revise sus galletas\n";
				}
				
			}
			
			void clic(){
				
				Templo*temp_templo=new Templo;
				Granja*temp_granja;
				Banco*temp_banco;
				
				
				//calculo
				numero_galletas+=findTemplo()*temp_templo->getProduccion_base()+findGranja()*temp_granja->getProduccion_base()+findBanco()*temp_banco->getProduccion_base()+1;
				if(!edificios.empty()){
					//producir
					
				}
			}
			
			int findTemplo(){
				int templos=0;
				for(int i=0;i<edificios.size();i++){
					if(edificios[i]->getNombre()=="templo")	{
						templos++;
					}
				}
				return templos;
			}
			int findBanco(){
				int bancos=0;
				for(int i=0;i<edificios.size();i++){
					if(edificios[i]->getNombre()=="banco")	{
						bancos++;
					}
				}
				return bancos;
			}
			int findGranja(){
				int granjas=0;
				for(int i=0;i<edificios.size();i++){
					if(edificios[i]->getNombre()=="granja")	{
						granjas++;
					}
				}
				return granjas;
			}
			
			
			void comprarBanco()	{
				Banco*banco_temp=new Banco();
				int bancos=0;
				//buscamos bancos para gestionar el valor del siguiente	
				for(int i=0;i<edificios.size();i++){
					if(edificios[i]->getNombre()=="banco"){
						bancos++;
					}
				}
				//dependiendo de los bancos calculamos el precio
				int precio=0;
				
				precio=bancos*banco_temp->getAumento()+banco_temp->getPrecio_base();
				
				//verificamos que se pueda comprar si tenemos las galletas necesaria
				if(precio<=numero_galletas){
					//add
					edificios.push_back(new Banco());
					numero_galletas-=precio;
				}else{
					cout<<"\nno se puede comprar un banco revise sus galletas\n";
				}
				
			}
			 string getNombre_jugador() {
		        return nombre_jugador;
		    }
		
		     void setNombre_jugador(string nombre_jugador) {
		        this->nombre_jugador = nombre_jugador;
		    }
		
		     int getNumero_galletas() {
		        return numero_galletas;
		    }
		
		     void setNumero_galletas(int numero_galletas) {
		        this->numero_galletas = numero_galletas;
		    }
			void comprarGranja()	{
				Granja*granja_temp=new Granja();
				int granjas=0;
				//buscamos granjas para gestionar el valor del siguiente	
				for(int i=0;i<edificios.size();i++){
					if(edificios[i]->getNombre()=="granja"){
						granjas++;
					}
				}
				//dependiendo de los granjas calculamos el precio
				int precio=0;
				
				precio=granjas*granja_temp->getAumento()+granja_temp->getPrecio_base();
				
				//verificamos que se pueda comprar si tenemos las galletas necesaria
				if(precio<=numero_galletas){
					//add
					edificios.push_back(new Granja());
					numero_galletas-=precio;
				}else{
					cout<<"\nno se puede comprar un granja revise sus galletas\n";
				}
				
			}
	};
#endif
