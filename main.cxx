#include <iostream>
#include <cmath>

using namespace std;

//Calculadora 1

int main(void)
{
    int opcion1;
    double numero1, numero2;
    string texto1 = "Primer numero: ";
    string texto2 = "Segundo numero: ";
    string texto3 = "Resultado: ";
    cout<< R"(
      ______ ______
    _/      Y      \_
   // ~~ ~~ | ~~ ~  \\
  // ~ ~ ~~ | ~~~ ~~ \\      Calculadora basica usando <cmath>
 //________.|.________\\     Hecho por el Hector Diaz
`----------`-'----------'

 Opciones:
     1. Suma
     2. Resta
     3. Division
     4. Multiplicacion
     5. Raiz Cuadrada
     6. Tangente
     7. Coseno
     8. Seno

              )"<<'\n';
    cout<<"Ingrese la opcion: ";
    cin>>opcion1;

    switch(opcion1){
    case 1:
        cout<<"Selecciono la opcion suma, ingrese los numero: "<<endl;
        cout<<texto1; cin>>numero1;
        cout<<texto2; cin>>numero2;
        cout<<"Resultado: "<<numero1+numero2<<endl;
        break;
    case 2:
        cout<<"Selecciono la opcion resta, ingrese los numero: "<<endl;
        cout<<texto1; cin>>numero1;
        cout<<texto2; cin>>numero2;
        cout<<"Resultado: "<<numero1-numero2<<endl;
        break;
    case 3:
        cout<<"Selecciono la opcion division, ingrese los numero: "<<endl;
        cout<<texto1; cin>>numero1;
        cout<<texto2; cin>>numero2;
        cout<<"Resultado: "<<numero1/numero2<<endl;
        break;
    case 4:
        cout<<"Selecciono la opcion multplicacion, ingrese los numero: "<<endl;
        cout<<texto1; cin>>numero1;
        cout<<texto2; cin>>numero2;
        cout<<"Resultado: "<<numero1*numero2<<endl;
        break;
    case 5:
        cout<<"Selecciono la opcion raiz cuadrada, ingrese el numero: "<<endl;
        cout<<texto1; cin>>numero1;
        cout<<"Resultado: "<<sqrt(numero1)<<endl;
        break;
    case 6:
        cout<<"Selecciono la opcion tangente, ingrese el numero: "<<endl;
        cout<<texto1; cin>>numero1;
        cout<<"Resultado: "<<tan(numero1)<<endl;
        break;
    case 7:
        cout<<"Selecciono la opcion coseno, ingrese el numero: "<<endl;
        cout<<texto1; cin>>numero1;
        cout<<"Resultado: "<<cos(numero1)<<endl;
        break;
    case 8:
        cout<<"Selecciono la opcion seno, ingrese el numero: "<<endl;
        cout<<texto1; cin>>numero1;
        cout<<"Resultado: "<<sin(numero1)<<endl;
        break;
    default:
        cout<<"No hay numero que resolver"<<endl;
    }
    return 0;
}
