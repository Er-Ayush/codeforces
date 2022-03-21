#include <iostream>
using namespace std;

void moVe(int *xp, int *yp)
{
    int tempo = *xp;
    *xp = *yp;
    *yp = tempo;
}

void inpUt(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            moVe(&arr[j], &arr[j+1]);
}
void print(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    cout << arr[i] << " ";
    cout << endl;
}
int main()
{
 int arr[] = {6040, 304, 256, 1, 28, 111, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    inpUt(arr, n);
    cout<<"Sorted array: \n";
    print(arr, n);
    return 0;

}