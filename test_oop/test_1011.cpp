#include <iostream>
using namespace std;
int partition (int arr[],int start, int end){
   int pivot = arr[start];
   int cout = 0;
   for( int i = start +1; i <= end; i++){
        if (arr[pivot] < arr[i])
        ++cout;
   }
   int pivotIndex = start + cout;
   swap(arr[pivotIndex],arr[start]);
   int i = start, j= end;
   while (i < pivotIndex && j > pivotIndex)
   {
        while( )
   }
   
}
void quickSort(int arr[], int start, int end){
    if (start >= end){
        return;
    }
    int p = partition(arr, start, end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1, end);
}
int main() {
    int arr[] = {23,1,32,42,1,8};
    int n = 6;
    quickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}