#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream lectura("./Data/data.txt"); 

    if (!lectura.is_open()) { 
        cerr << "No se pudo abrir el archivo." << endl;
        return 1; 
    }

    string linea;
    
    while (getline(lectura, linea)) {
        string nombre, cedula, correo;
        stringstream ss(linea);

       
        getline(ss, nombre, ' ');
        getline(ss, cedula, ' ');
        getline(ss, correo, ' ');

        cout << "Mi nombre es: " << nombre << endl;
        cout << "Mi cedula es: " << cedula << endl;
        cout << "Mi correo es: " << correo << endl;
    }
    
    lectura.close();
    return 0;
}
