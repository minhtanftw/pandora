#include <iostream>

using namespace std;

void merge(int arr[], int const left, int const mid, int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
    for(auto i = 0; i < subArrayOne; i++)
        leftArray[i] = arr[left+i];
    for(auto j = 0; j < subArrayTwo; j ++)
        rightArray[j] = arr[mid + 1 + j];
    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo  = 0;
    int indexOfMergedArray = left;

    while(indexOfSubArrayOne < subArrayOne &&
           indexOfSubArrayTwo < subArrayTwo)
    {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
        {
            arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else{
            arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    while (indexOfSubArrayOne < subArrayOne)
    {
        arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfSubArrayTwo++;
    }
    while (indexOfSubArrayTwo < subArrayTwo)
    {
        arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayOne++;
        indexOfSubArrayTwo++;
    }
    delete [] leftArray;
    delete [] rightArray;
    
}
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    cout << A[i] << " ";
    cout << endl;
}
void mergeSort(int arr[], int const begin, int const end)
{
    if ( begin >= end)
        return;
    int mid = begin + (end - begin)/2;
    mergeSort(arr,begin,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,begin,mid,end);
}
int main()
{
    int arr[] = {23,11,32,-42,24,53};
    int arr_size = sizeof(arr)/sizeof(int);
    cout << "Given arr haha is \n";
    printArray(arr,arr_size);
    mergeSort(arr,0,arr_size-1);
    cout <<"\nSorted array \n";
    printArray(arr,arr_size);
    return 0;
}
