//Examen
//Autor: Daniela Canul Garcia
//08 de Noviembre del 2017
//Es un programa que evalua si es menor que 5, si lo es revisa si es divisible entre 3

//La línea de abajo es correcta, la descripción anterior es confusa porque de entrada le das el valor de 1 a x, así que no hay mucha evaluación.
//Imprime los numeros primos menores que 5

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


