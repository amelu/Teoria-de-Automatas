#include"bits/stdc++.h"
using namespace std;


string validar(string cadena){
    string aux;
    int cont=0;
    for (int k = 0; k < cadena.size(); k++) {
            if(cadena[k]=='a'||cadena[k]=='b'){
                aux=aux+cadena[k];
                cont++;

            }
            else{
                break;
            }
	}

        return aux;

}
void inversa(string cadena){
    validar(cadena);
    string alreves;
    for(int i=cadena.size();i>=0;i--){
        alreves=alreves+cadena[i];
    }
    cout<<alreves;
}
void concatenar(string cadena1,string cadena2){
    string cadena3=validar(cadena1)+validar(cadena2);
    cout<<cadena3;
}

main(){
    concatenar("abaa","baba");

}
