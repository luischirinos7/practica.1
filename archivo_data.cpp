#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream archivo("Data.txt");

    if(archivo.is_open()) {
        archivo<<"Contenido del archivo"<<endl;
        
        archivo.close();

        cout<<"El archivo Data.txt se ha creado correctamente."<<endl;
    } else {
        cout<<"No se pudo crear el archivo Data.txt."<<endl;
    }

    return 0;
    }