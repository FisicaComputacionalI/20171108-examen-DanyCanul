//Examen
//Autor: Daniela Canul Garcia
//08 de Noviembre del 2017
//Es un programa que evalua si es menor que 5, si lo es revisa si es divisible entre 3
//Imprime los numeros primos menores que 5
#include <iostream>
using namespace std;
int main (){
 int x=1;

do{while(x<=5){
  if((x%3)==0){  
   x=x+2;
}
else{
cout<<x<<endl;
 x=x+2;
}
}
}while (x>5);

return 0;
}


