//Examen: Programa que calcula la velocidad 
//Autor: Daniela Canul Garcia
//08 de Noviembre del 2017
#include <iostream>
using namespace std;
int main (){
 int dis;
 int tim;
 
cout<<"Dame un valor para la distancia: "<<endl;
cin>>dis;

cout<<"Dame un valor para el tiempo: "<<endl;
cin>>tim;


cout<<"El valor de la velocidad es: "<<float(dis)/float(tim)<<endl;
return 0;
}

//para este programa tenia la opciòn de declarar una tercera variable y definir mi formula como V=dis/tim 
//pero solo me arrojaba valores enteros, para que me arrojara valores con decimales decidi utilizar float
