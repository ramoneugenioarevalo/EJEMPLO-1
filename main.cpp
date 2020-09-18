#include <iostream>
#include <cstdlib>
#include <cstring>

aca agrego una linea
 ajdajaj
 asdad

int main(){
    int opc;
    while(true){
        system("cls");
        cout << "---MENU ALUMNOS---" << endl;
        cout << "1. ALTA ALUMNO" << endl;
        cout << "2. BAJA ALUMNO" << endl;
        cout << "3. MODIFICAR EMAIL" << endl;
        cout << "4. LISTAR ALUMNOS" << endl;
        cout << "0. FIN DEL PROGRAMA" << endl;
        cout << "--------------------" << endl;
        cout << "INGRESE UNA OPCION: " << endl;
        cin>>opc;
        system("cls");
        switch(opc){
                case 1: if(altaAlumno()==true){
                            cout<<"SE AGREGO EL ALUMNO"<<endl;
                        }
                        else{
                            cout<<"NO SE PUDO AGREGAR EL ALUMNO"<<endl;
                        }
                        break;
                case 2: if(bajaAlumno()==true){
                            cout<<"BAJA REALIZADO"<<endl;
                            }
                        else{
                            cout<<"NO SE PUDO HACER LA BAJA"<<endl;
                        }
                        break;
                case 3: if(modificarEmailAlumno()==true){
                                cout<<"MODIFICACION CORRECTA"<<endl;
                            }
                        else{
                            cout<<"NO SE PUDO MODIFICAR"<<endl;
                        }
                        break;
                case 4: if(listarAlumnos()==false){
                            cout<<"NO SE PUDO LEER EL ARCHIVO"<<endl;
                            }
                        break;
                case 0:return 0;
                        break;

        }
        system("pause");
    }
    return 0;
}
