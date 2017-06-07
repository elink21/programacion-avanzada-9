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
			a<<"<meta charset='UTF-8'>\n";
			a<<"<title>\n;Cambiar el icono</title>\n";
			a<<"<style type='text/css'>\n";
			a<<".primera ul li {\n";
				a<<"list-style: url(flecha.gif)}\n";
		a<<"</style>\n";
		a<<"</head>\n";
		a<<"<body>\n";
			a<<"<div class='primera'>\n";
				a<<"<ul>\n";
					a<<"<li>Primero</li>\n";
					a<<"<li>Segundo</li>\n";
					a<<"<li>Tercer</li>\n";
				a<<"</ul>\n";
			a<<"</div>\n";
		a<<"</body>\n";
		a<<"</html>\n";
		a.close();
		return true;
	}
	else return false;


}