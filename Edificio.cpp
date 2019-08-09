#ifndef EDIFICIO_CPP
#define EDIFICIO_CPP
	#include<string>
	using namespace std;
	class Edificio{
		private:
			string nombre;
			int precio_base;
			int produccion_base;
			int aumento;	
		public:
			Edificio(string nombre,int precio_base,int produccion_base,int aumento){
				this->nombre=nombre;
				this->precio_base=precio_base;
				this->produccion_base=produccion_base;
				this->aumento=aumento;
			}
			
			
			 string getNombre() {
		        return nombre;
		    }
		
		     void setNombre(string nombre) {
		        this->nombre = nombre;
		    }
		
		     int getPrecio_base() {
		        return precio_base;
		    }
		
		     void setPrecio_base(int precio_base) {
		        this->precio_base = precio_base;
		    }
		
		     int getProduccion_base() {
		        return produccion_base;
		    }
		
		     void setProduccion_base(int produccion_base) {
		        this->produccion_base = produccion_base;
		    }
		
		     int getAumento() {
		        return aumento;
		    }
		
		     void setAumento(int aumento) {
		        this->aumento = aumento;
		    }
			
	};
#endif

