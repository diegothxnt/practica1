#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;
int main(){
int x;
string nombre, correo;
int cedula;
ofstream escritura("./Data/data.txt");
if(!escritura.is_open()){
    cout<<"el documento no se pudo crear"<<endl;
    return 0;
}
cout<<"Coloque el numero de personas que va a registrar"<<endl;
cin>>x;
for( int i=0; i<x; i++){
    cout<<"ingrese su nombre"<<endl;
    cin>>nombre;
cout<<"ingrese su cedula"<<endl;
cin>>cedula;
cout<<"ingrese su correo"<<endl;
cin>>correo;
escritura<<nombre<<" "<<cedula<<" "<<correo<<endl; 
}
return -1;
}
