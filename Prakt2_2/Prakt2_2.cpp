

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int arr[3][2]
    {
        {1, 2},     
        {4, 5},     
        {7, 8}  
    };
    int str = sizeof(arr) / sizeof(arr[0]);
    cout << "Вывод изначального двумерного массива:" << endl;
    for (int i = 0; i < str; i++)
    {
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }

    cout << "Вывод перевернутого двумерного массива:" << endl;
    for (int i = 0; i < str; i++)
    {
        int save = arr[i][0];
        arr[i][0] = arr[i][1];
        arr[i][1] = save;
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }
    return 0;
}

