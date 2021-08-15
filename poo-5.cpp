#include<iostream>
#include<stdlib.h>
/*
herencia
*/
using namespace std;
//clase padre
class Rectangulo
{
	protected://atributos manipulados por clases heredadas
	//encapsulamiento
		float largo,ancho;
	public://metodos
		//metodo contructor
		//inicializar los atributos y variables
		//mismo nombre
		Rectangulo(float,float);//contructor1
		//Rectangulo(long);//constructor2
		//destructor
		~Rectangulo();
		void setRectangulo(float,float);
		float getRectangulo();
		void mostrar();
};
//clase heredada
class Alumno : public Rectangulo
{
	//atributos
	private:
		string codigo;
	public://metodos
		Alumno(float,float,string);
		void mostrar();
};
//ininicializar el contructor 1
Rectangulo::Rectangulo(float _largo,float _ancho)
{
	largo=_largo;
	ancho=_ancho;
}
Alumno::Alumno(float _largo,float _ancho,string _codigo):Rectangulo(_largo,_ancho)
{
	codigo=_codigo;
}
//15012
//ininicializar el contructor 2
/*Rectangulo::Rectangulo(long un_dato)
{
	largo=int(un_dato/1000);
	ancho=int((un_dato-largo*1000));
}*/
//inicializar destructor
Rectangulo::~Rectangulo()
{
	
}
//setter, establecer valores a atributos
/*void Rectangulo::setRectangulo(float _largo,float _ancho)
{
	largo=_largo;
	ancho=_ancho;
}*/
float Rectangulo::getRectangulo()
{
	return largo;
}
void Rectangulo::mostrar()
{
	cout<<largo<<endl;
}
void Alumno::mostrar()
{
	cout<<codigo<<endl;
}
int main(void)
{
	//inincializar objeto
	Rectangulo r1(45,4);
	Alumno a1(4,8,"458");
	a1.mostrar();
	//r1.setRectangulo(45,56);
	//cout<<r1.getRectangulo()<<endl;
	r1.mostrar();
	r1.~Rectangulo();
	getchar();
	return 0;
}
