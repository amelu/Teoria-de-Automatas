#include"bits/stdc++.h"
using namespace std;
bool validar(string cadena){
    bool x;
    for (int k = 0; k < cadena.size(); k++) {
            if(cadena[k]=='a'||cadena[k]=='b'){
                    x=true;
            }
            else{
                x=false;
                break;
            }
	}

    return x;

}
string inversa(string cadena){
    validar(cadena);
    string alreves;
    for(int i=cadena.size();i>=0;i--){
        alreves=alreves+cadena[i];
    }
    return alreves;
}
string concatenar(string cadena1,string cadena2){
    string cadena3=cadena1+cadena2;
    return cadena3;
}
string potencia(string cadena,int pot){
    string cadenaaux=cadena;
    for(int i=0;i<pot-1;i++){
        cadenaaux+=cadena;
    }
    return cadenaaux;

}
string potencia_ab(char a,char b,int pot){
        string aux;
        if(a=='a'||b=='b'){
            for(int i=0;i<pot;i++){
                aux+='a';
            }
            for(int i=0;i<pot;i++){
                aux+='b';
            }
            return aux;
        }

}
int contar_a(string cadena){
  int contador=0;
  for(int i=0;i<cadena.size();i++){
    if(cadena[i]=='a'){
        contador++;
    }
  }
  return contador;
}
int contar_b(string cadena){
  int contador=0;
  for(int i=0;i<cadena.size();i++){
    if(cadena[i]=='b'){
        contador++;
    }
  }
  return contador;
}


main(){
    if(validar("waba")==true){
        cout<<contar_a("baba")<<"\n";
        cout<<contar_b("baba")<<"\n";
    }
    else{
        cout<<"Mijo pon bien la cadena";
    }

}
