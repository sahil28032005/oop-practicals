#include <iostream>
using namespace std;
template <class dt>
void selectionSort(dt *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // [12,2,34,23]
        int min;
        int j;
        for (j = i; j < size - 1; j++)
        {

            if (arr[j] <= arr[j + 1])
            {
                min = j;
            }
            else
            {
                min = j + 1;
            }
        }
        // cout << min << endl;
        swap(arr[i], arr[min]);
    }
}
template <class g>
void printArray(g *ptr, int size)
{
    int i = 0;
    while (i < size)
    {
        cout << ptr[i] << endl;
        i++;
    }
}
int main()
{
    int a[] = {12, 34, 56, 78, 1, 563};
    float b[] = {12.5, 34.34, 56.9, 78.32, 1.09, 563.43};
    int size = sizeof(a) / sizeof(a[0]);
    selectionSort(b, size);
    printArray(b, size);
    return 0;
}