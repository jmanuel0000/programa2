#include <iostream>

using namespace std;
/*
   Ingresar la nota acumulada y examen y luego calcular la nota final y la observacion de aprobados o reprobados
*/

int main()
{int notaA,notaE,notaF;

    cout << "Ingresar nota Acumulada..:" ;
    cin>> notaA;
    cout << "Ingresar nota Examen..:" ;
    cin>> notaE;
    notaF= notaA + notaE ;
    if (notaF>60)
    {
        cout<<"Aprobado" ;
    }
    else
    {
        cout<<"Reprobado" ;
    }
    cout<<"\n" ;
    cout<<"Nota Final es "<<notaF<<"\n";

    return 0;
}
