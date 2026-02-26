#include <iostream>
using namespace std;

const int MAX = 10;

void ingresar(int m[MAX][MAX], int f, int c)
{
    for (int i = 0; i < f; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];
}

void mostrar(int m[MAX][MAX], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

void sumar(int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX], int f, int c)
{
    for (int i = 0; i < f; i++)
        for (int j = 0; j < c; j++)
            r[i][j] = a[i][j] + b[i][j];
}

void restar(int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX], int f, int c)
{
    for (int i = 0; i < f; i++)
        for (int j = 0; j < c; j++)
            r[i][j] = a[i][j] - b[i][j];
}

void multiplicar(int a[MAX][MAX], int b[MAX][MAX], int r[MAX][MAX], int f, int c)
{
    for (int i = 0; i < f; i++)
        for (int j = 0; j < c; j++)
        {
            r[i][j] = 0;
            for (int k = 0; k < c; k++)
                r[i][j] += a[i][k] * b[k][j];
        }
}

int main()
{
    int A[MAX][MAX], B[MAX][MAX], R[MAX][MAX];
    int f, c;

    cout << "Filas y columnas: ";
    cin >> f >> c;

    cout << "Matriz A:\n";
    ingresar(A, f, c);

    cout << "Matriz B:\n";
    ingresar(B, f, c);

    // Suma
    sumar(A, B, R, f, c);
    cout << "\nResultado de la suma:\n";
    mostrar(R, f, c);

    // Resta
    restar(A, B, R, f, c);
    cout << "\nResultado de la resta:\n";
    mostrar(R, f, c);

    // Multiplicación
    multiplicar(A, B, R, f, c);
    cout << "\nResultado de la multiplicacion:\n";
    mostrar(R, f, c);

    return 0;
}
