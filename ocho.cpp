#include <bits/stdc++.h>
using namespace std;
int main()
{
//DECLARACION DE VARIABLES. X SIGNIFICA EL NUMERO DE NUMEROS QUE VAN A LEER.
int x;
int arreglo[100];
cin>>x;

//CICLO PARA LEER LOS X NUMEROS.
for(int i=0; i<x; i++){
    cin>>arreglo[i];
}

// EL CONTANDOR SE VA UTILIZAR PARA CONTAR LOS OCHOS.
int Contador = 0;

// CICLO PARA CHECAR CUALES NUMEROS SON OCHOS Y CUALES NO.
for(int i=0; i<=x; i++){
 if(arreglo[i]==8){
    Contador++;
}
}
// IMPRIME EL NUMERO DE OCHOS QUE SE ENCONTRARON.
 cout<<Contador<<endl;
}
