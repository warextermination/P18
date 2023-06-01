// P18.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>
#include <locale>
#include <random>

int main()
{
    srand(time(NULL));
    int EM;
    int mat[3][3];
    int mth[5][5];
    int math[10][10];

    std::cout << "Bienvenido a las matrices. \n";
    std::cout << "Elige 1, 2 o 3 para mostrarte una matriz \n";
    std::cin >> EM;

    switch (EM)
    {
    case 1:
        std::cout << "Elegiste la matriz de 3x3 \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {

                mat[i][j] = rand() % 10;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;
    case 2:
        std::cout << "Elegiste la matriz de 5x5 \n";
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                mth[i][j] = rand() % 10;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                std::cout << mth[i][j] << " ";
            }
            std::cout << std::endl;
        }
            break;
    case 3:
        std::cout << "Elegiste la matriz de 10x10 \n";
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                math[i][j] = rand() % 10;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                std::cout << math[i][j] << " ";
            }
            std::cout << std::endl;
        }
            break;
    }


}