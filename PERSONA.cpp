#include  <iostream>
using namespace std;
class Persona{
	// caracteristicas
	protected : string nombres,apellidos,direccion;
				int telefono ;
	// constructor
	protected:
		Persona (){
		}
		Persona (string nom,string ape,string dir,int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
		}
	
	// m�todos
	void  mostrar ();
	
};
