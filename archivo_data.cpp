#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nombre, correo;
    int cedula;
    int N;

    cout << "Ingrese la cantidad de registros: ";
    cin >> N;

    ofstream archivo("Data.txt");

    if (archivo.is_open()) {
        for (int i = 0; i < N; i++) {
            cout << "Ingrese el nombre de la persona " << i + 1 << ": ";
            cin >> nombre;

            cout << "Ingrese la cédula de la persona " << i + 1 << ": ";
            cin >> cedula;

            cout << "Ingrese el correo de la persona " << i + 1 << ": ";
            cin >> correo;

            archivo << nombre << " " << cedula << " " << correo << endl;
        }

        archivo.close();
        cout << "El archivo Data.txt se ha creado con " << N << " registros." << endl;
    } else {
        cout << "No se pudo crear el archivo Data.txt." << endl;
    }

    return 0;
}