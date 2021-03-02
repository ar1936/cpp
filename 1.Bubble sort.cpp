#include <iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    // ________BUBBLE SORT ALGORITHM______
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

}
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for (int i= 0; i < n; i++)
    {
        cin>>arr[i];
    }

    

   bubble_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}