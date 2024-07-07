

#include <iostream>
using namespace std;
int main()
{
    int matriz[3][3] = { {1,2,3},
                          {4,5,6},
                          {7,8,9} };
    cout << "arreglo original\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<"[" << matriz[i][j]<<"] ";
        }
        cout << endl;
    }
    cout << endl;
    while (true)
    {
        cout << "1.- izquierda\n2.- Derecha\n [+] Selecione: ";
        int opcion;
        cin>> opcion;
        cout << endl;
        if (opcion == 1) {
            int temp[3][3];
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    temp[2 - j][i] = matriz[i][j];
                }
            }


            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                   matriz[i][j] = temp[i][j];
                }
                
            }

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << "[" << matriz[i][j] << "] ";
                }
                cout << endl;
            }
            cout << endl;
        }
        if (opcion == 2) {
            int temp[3][3];
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    temp[j][2-i] = matriz[i][j];
                }
            }


            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    matriz[i][j] = temp[i][j];
                }

            }

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << "[" << matriz[i][j] << "] ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }

    return 0;
}

