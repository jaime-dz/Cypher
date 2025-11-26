#include <iostream>
#include <cstring>
#include <limits>
#include "cypher.h"

using namespace std;

int main()
{
    string input, output;
    char resp;
    unsigned opc,num;
    do{
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
        cout<<"\nIntroduzca una cadena:\n";
        cin>>ws;
        getline(cin,input);
        cout<<"Introduce el número de posiciones a desplazar:\n";
        cin>>num;
        cout<<"¿Qué desea hacer?\n1)Cifrar\n2)Descifrar\n\n";
        cin>>opc;
        switch(opc)
        {
            case 1:
                output=cifrar(input,num);
                cout<<"Resultado: "<<output<<endl;
                break;
            case 2:
                output=descifrar(input,num);
                cout<<"Resultado: "<<output<<endl;
                break;
            default:
                cout<<"Operación no válida\n";
                break;
        }

        cout<<"Desea repetir?\n";
        cin>>resp;
    }while(resp=='s' || resp=='S');

    return 0;
}