//Examen
//Autor: Daniela Canul Garcia
//08 de Noviembre del 2017

//Es un programa que evalua si es menor que 5, si lo es revisa si es divisible entre 3
//Imprime los numeros primos menores que 5
//Tu descripción no es correcta. Los números que imprime el programa son : 1 y 5. Los números primos menores a o iguales a 5 son : 1, 3, 5. Por lo tanto tu explicación del programa no corresponde a lo que hace el programa.

#include <iostream>
using namespace std;
int main (){
 int x=1;

 // el ciclo do de afuera no tiene sentido, y de hecho hace que tu programa no termine nunca porque dado que 5 del primer ciclo es menor a 5, cuando entras al siguiente ciclo el valor de x nunca cambia, siempre es menor a 5 y por eso tu programa nunca se cierra. Sí lo comentas, tu programa hace lo que se espera y termina. 

 //do{
while(x<=5){
  if((x%3)==0){  
   x=x+2;
}
else{
cout<<x<<endl;
 x=x+2;
}
}
  //}while (x>5);

return 0;
}


