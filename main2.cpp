#include <iostream>

using namespace std;
/* Ingresar las horas trabajadas, el pago por hora y calcular el salario una deduccion del 5% del salario y el total a pagar es el sueldo restando las deducciones.
   */
int main()
{ int horas;
double pxh, salario, deduccion,tp;

    cout << "Ingresar las horas...>" ;
    cin>> horas;
    cout<< "Ingresar el pago por hora...>";
    cin>> pxh;

    salario= horas * pxh;
    deduccion= salario *0.05;
    tp= salario - deduccion;

    cout<<"Salario"<<salario<<"\n";
    cout<<"Deduccion"<<deduccion<<"\n";
    cout<<"Total a pagar"<<total<<"\n";
    return 0;

}
