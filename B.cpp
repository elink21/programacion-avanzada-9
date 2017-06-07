#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
bool writeInFile();

int main()
{
	cout<<writeInFile();
	system("ejemplo.html");
	return 0;
}


bool writeInFile()
{
	ofstream a("ejemplo.html",ios::out);
	if(a)
	{

		a<<"<!DOCTYPE html>\n";
		a<<"<html lang='en'>\n";
		a<<"<head>\n";
		a<<"<meta name='viewport' content='width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0'>\n";
		a<<"<meta charset='UTF-8'>\n";
		a<<"<meta name='keywords' content='flores, jardin, arbol'>\n";

		a<<"<title>Jardin</title>\n";
		a<<"</head>\n";
		a<<"<body>\n";
		a<<"<hgroup>\n";
		a<<"<h1>Jardin bello</h1>\n";
		a<<"<h5>Apoyando la belleza del entorno desde 2001</h5>\n";
		a<<"</hgroup>\n";

	a<<"<p>\n<em>\nBienvenidos al <b>JARDIN BELLO</b> esperamos que pueda encontrar sus productos </p>\n";
	a<<"<h2>Vengan a nuestra tienda</h2>\n";
	a<<"<p>Nuestra direccion es: <br>\n";
	a<<"Calle de las flores num 12 San Lorenzo Tlacotepec Atlacomulco, Mex</p>\n";
	a<<"<p>Puede visitarnos desde los <strong><i>Lunes</i> a sabado desde las 7 a 8 <sup>1</sup></strong> </p>\n";
	a<<"<p>Nota <sub>1</sub> Cerramos a las 6 el 1 <sup>o</sup> de enero</p>\n";
	a<<"</body>\n";
	a<<"</html>\n";	
	a.close();
		return true;
	}
	else return false;


}