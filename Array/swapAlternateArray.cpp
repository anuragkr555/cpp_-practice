#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    

    for (int i = 0; i < size; i += 2)
    {
        if (i+1 < size)
        {
           swap(arr[i], arr[i+1]);
        }
    }
     

}
    


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
}
int main () {

    int arr[6] = {5,7,3,-33,0,1};
    int brr[5] = {5,7,541,4,1};

    reverse(arr, 6);
    reverse(brr, 5);
    
    printArray(arr, 6);
    printArray(brr, 5);
    
    return 0;
    
}