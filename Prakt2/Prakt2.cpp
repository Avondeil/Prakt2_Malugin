

#include <iostream>
using namespace std;

void editArray(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
        array[i] = sum;
    }
}


int main()
{ 
    setlocale(LC_ALL, "rus");
    int firstArray [] = {1,2,3,4,5};
    int size = sizeof(firstArray) / sizeof(firstArray[0]);
    cout << "Первый массив: ";
    for (int i = 0; i < size; i++)
    {
        cout << firstArray[i] << " ";
    }
    cout << endl;

    editArray(firstArray, size);

    cout << "Измененный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << firstArray[i] << " ";
    }
    cout << endl;
    return 0;
}


