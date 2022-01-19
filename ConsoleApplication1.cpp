﻿#include <iostream>

using namespace std;


int Create_random_arr(size_t size, int* arr)
{
    srand(static_cast<unsigned int>(time(0)));
    cout << endl;

    for (size_t i = 0; i < size; i++)
    {
        int rnd_num = rand() % 51;
        arr[i] = rnd_num;
    }

    return 0;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                               //
//  1.Написать функцию которая выводит массив double чисел на экран. Параметры функции это сам массив и его размер. Вызвать эту функцию из main. //
//                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double Print_double_arr(size_t size, double arr[])
{
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
 }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                               //
//  2. Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [1, 1, 0, 0, 1, 0, 1, 1, 0, 0] .                                     //
//  Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0. Выводить на экран массив до изменений и после.                               //
//                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Reverse_arr(int* arr, size_t size)
{    

    cout << endl;
        
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    cout << endl;

    for (size_t i = 0; i < size; i++) {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    cout << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                               //
//  3. Задать пустой целочисленный массив размером 8. Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22.    // 
//  Вывести массив на экран.                                                                                                                     //
//                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Create_arr(size_t size, int arr[])
{
    int count = 1;

    cout << endl;

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = count;
        count += 3;
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                               //
//  4. * Написать функцию, которой на вход подаётся одномерный массив и число n(может быть положительным, или отрицательным),                    //
//  при этом метод должен циклически сместить все элементы массива на n позиций.                                                                 //
//                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Move_arr(size_t size, int arr[], int n)
{
    
    int temp_arr[50]{ 0 };

    cout << endl;  
    
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    cout << endl;

    if (n < 0)
    {
        int s = n + size, x = size - s;

        int b = 0;

        for (s; s < size; s++)
        {            
            temp_arr[s] = arr[b];
            b++;
        }

        s = s - b;
        

        for (int j = 0; j < s; j++)
        {
            temp_arr[j] = arr[b];
            b++;
        }
    }
    else
    {
        int s = n, x = size - s;

        int b = 0;

        for (s; s < size; s++)
        {
            temp_arr[s] = arr[b];
            b++;
        }

        s = s - b;

        for (int j = 0; j < s; j++)
        {
            temp_arr[j] = arr[b];
            b++;
        }
    }  

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = temp_arr[i];
    }

    for (size_t i = 0; i < size; i++)
    {
        std::cout << temp_arr[i] << " ";
    }    

    cout << endl;

    return 0;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                               //
//  5. * *Написать функцию, которой передается не пустой одномерный целочисленный массив, она должна вернуть истину если в массиве есть место,   // 
//  в котором сумма левой и правой части массива равны.Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance([2, 1, 1, 2, 1]) → false,  //
//  checkBalance([10, || 1, 2, 3, 4]) → true.Абстрактная граница показана символами || , эти символы в массив не входят.                         //
//                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Equality(size_t size, int arr[])
{   

    std::cout << std::endl;

    int sum_left = 0;
    int sum_right = 0;

    if (size != 0)
    {
        for (size_t i = 0; i < size; i++)
        {
            sum_left += arr[i];
            for (size_t j = i + 1; j < size; j++)
            {
                sum_right += arr[j];                
            }
            cout << sum_left << " " << sum_right << endl;
            if (sum_left == sum_right)
            {
                cout << "Equality" << endl;
                break;
            }
            else
            {
                cout << "no Equality" << endl;
            }
            
            sum_right = 0;
        } 
    }
    else
    {
        cout << "arr is empty " << endl;
    }


    

    

    return 0;
}



int main()
{ 

    const int SIZE{ 8 };

    double arr[SIZE]
    {
        10.1,
        22.4,
        54.1,
        65.1,
        123.3,
        43.2,
        45.5,
        1245,
    };

    Print_double_arr(SIZE, arr);


    int bool_arr[SIZE]
    {
        0,
        1,
        1,
        1,
        0,
        1,
        0,
        0
    };    
    
    Reverse_arr(bool_arr, SIZE);

    int empty_arr[SIZE];

    Create_arr(SIZE, empty_arr);


    int random_arr[SIZE];

    Create_random_arr(SIZE, random_arr);


    Move_arr(SIZE, random_arr, 2);

    Equality(SIZE, random_arr);

    
    



    
    


    


}
