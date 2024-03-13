#include <iostream>
using namespace std;

class Sumadora {
    public:
    //Metodo para realizar la suma
    void sumar(){
        //Solicitar al usuario que ingrese el primer valor
        cout<<"Ingrese primer valor:";
        cin>>numero1;
        //Solicitar al usuario que ingrese el segundo valor
        cout<<"Ingrese el segundo valor:" ;
        cin>>numero2;
        //Realizar la suma de los dos valores
        suma=numero1+numero2;
        
        //Mostrar el resultado en la salida estandar
        cout<<"La suma de "<<numero1<<"y"<<numero2<<"es:"<<suma<<endl;
    }
        private:
        //Variables para almacenar los dos valores y el resultado de la suma
        int numero1, numero2, suma;
        
    };
    int main() {
        //Crear un objeto de la clase Sumadora
        Sumadora sumadora;
        
        //Lamar al metodo sumar del objeto
        sumadora.sumar();
        return 0;
    }
