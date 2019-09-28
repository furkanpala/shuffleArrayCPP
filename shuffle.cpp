#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " | " << arr[i] << " | ";
    }
    cout << "\n";
}

void shuffle(int *arr, int size)
{
    for (int i = 0; i < 100; i++)
    {
        int n1 = rand() % size;
        int n2 = rand() % size;
        swap(arr + n1, arr + n2);
    }
}

int main()
{
    srand(time(NULL));
    int arr[] = {1, 2, 3, 4, 5};
    const int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    shuffle(arr, size);
    printArray(arr, size);

    return 0;
}