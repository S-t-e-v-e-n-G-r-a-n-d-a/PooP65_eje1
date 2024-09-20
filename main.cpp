#include <iostream>
using namespace std;
//funciones
string promedio (int n1, int n2, int n3, int n4, int p){
    if (p>7 && p<=10){
        return"el estudiante esta aprobado:";
    }else if (p>=5 && p<7){
        return"el estudiante esta suspendido:";
    }else if (p>=1 && p<5){
        return"el estudiante esta reprobado:";
    }else{
        return " ";
    }
}
//main
int main(){
    int n1, n2, n3, n4,p;
    string est;

    cout<<"ingrese la nota del estudiante en deberes:";
    cin>>n1;
    cout<<"ingrese la nota del estudiante en trabajos:";
    cin>>n2;
    cout<<"ingrese la nota del estudiante en pruebas:";
    cin>>n3;
    cout<<"ingrese la nota del estudiante en examenes:";
    cin>>n4;
    p=(n1+n2+n3+n4)/4;
    cin>>p;

    if (p>7 && p<=10){
        cout<<"el estudiante esta aprobado:";
    }else if (p>=5 && p<7){
        cout<<"el estudiante esta suspendido:";
    }else if (p>=1 && p<5){
        cout<<"el estudiante esta reprobado:";
    }
    cout<<p<<endl;
    return 0;
}
