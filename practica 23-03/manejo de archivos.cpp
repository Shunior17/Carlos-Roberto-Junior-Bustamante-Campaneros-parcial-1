//
// Created by Junior on 23/03/2024.
//
#include "iostream"
#include "fstream"
using namespace std;
string texto;
void leerarchivo1(string directorio){
    ifstream archivo;
    archivo.open(directorio);
    if(archivo.is_open()){
        while (getline(archivo, texto)){
            cout<<"archivo leido==> "<<endl;
        }
        archivo.close();
    } else{
        cout<<"archivo no encontrado";
    }
}

void modificarArchivo2(string directorio){
    ofstream archivo;
    archivo.open(directorio, ios::app);
    if(archivo.is_open()){
        archivo<<texto<<endl;
        for (int i=1; i<=10; i++){
            archivo<<i<<" X "<<5<<" = "<<i*5<<endl;
        }
        archivo.close();
        cout<<"archivo 2 modificado";
    }else{
        cout<<"Error al leer el archivo";
    }
}