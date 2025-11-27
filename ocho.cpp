#include <bits/stdc++.h>
using namespace std;
int main()
{
int x;
int arreglo[100];
cin>>x;

for(int i=0; i<x; i++){
    cin>>arreglo[i];
}

int Contador = 0;

for(int i=0; i<=x; i++){
 if(arreglo[i]==8){
    Contador++;
}
}
 cout<<Contador<<endl;
}
