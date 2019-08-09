#ifndef MEJORA_CPP
#define MEJORA_CPP
	#include<string>
	using namespace std;
	class Mejora{
		private:
			string nombre;
			int precio;
		public:
			Mejora(string nombre,int precio){
				this->nombre=nombre;
				this->precio=precio;
			}
			
			void setNombre(string nombre){
				this->nombre=nombre;
			}
			string getNombre(){
				return nombre;
			}
			void setPrecio(int precio){
				this->precio=precio;
			}
			int getPrecio(){
				return precio;
			}
			
				
	};
#endif
