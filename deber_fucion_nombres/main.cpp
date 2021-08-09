#include "iostream"
#include "string"
using namespace std;
void apellidos_nombre (int limite){
    string apellidos [limite];
    string nombres[limite];
for(int i = 0; i < limite; i++)
{
cout << "\n******* Apellidos y nombres " << i + 1 << " ********:\n";
cout <<endl<< "Primer apellido: ";
cin >> apellidos[i];
cout << endl<<"Primer nombre: ";
cin >> nombres[i];
cout<<endl<<apellidos[i]<<" "<<nombres[i]<<endl;
}

}
int main()
{
    int limite;
    cout << "Cuantos datos desea ingresar: ";
    cin>>limite;
    apellidos_nombre(limite);

}