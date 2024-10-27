#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string nombre, correo;
    int cedula, N;
    cout<<"Ingrese la cantidad de registros: ";
    cin>>N;
    cin.ignore();

    ofstream archivo("Data.txt");
    if(archivo.is_open()){
        for (int i=0; i<N; i++) {
            cout<<"Ingrese el nombre de la persona "<<i+1<<": ";
            cin>>nombre;
            cout<<"Ingrese la cédula de la persona "<<i+1<<": ";
            cin>>cedula;
            cout<<"Ingrese el correo de la persona " <<i+1<<": ";
            cin>>correo;
            archivo<<nombre<<" "<<cedula<<" "<<correo<<endl;
        }
        archivo.close();
    }else{
        cout<<"No se pudo crear el archivo Data.txt."<<endl;
        return 1;
    }
    ifstream leerArchivo("Data.txt");
    if(leerArchivo.is_open()){
        while(leerArchivo>>nombre>>cedula>>correo) {
            cout<<"Mi nombre es "<<nombre <<", número de cédula: "<<cedula<<", mi correo es "<<correo<<endl;
        }
        leerArchivo.close();
    }else{
        cout<<"No se pudo abrir el archivo Data.txt para leer."<<endl;
    }

    return 0;
}