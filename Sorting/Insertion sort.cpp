/*
Insertion sort is a simple sorting algorithm that builds the final sorted array (or list)
one item at a time. It is much less efficient on large lists than more advanced algorithms
such as quicksort, heapsort, or merge sort. ... Efficient for (quite) small data sets, much 
like other quadratic sorting algorithms.
*/

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size] = {5, 4, 1, 2, 3};
    int temp, j, count=0;
    cout<<"Given array is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<size; i++){
        count++;
        j = i;
        //cout<<"After "<<count<<" pass"<<endl;
        while(j>0 && arr[j]<arr[j-1]){ /// swap the value
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;

            /*for(int k=0; k<size; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;*/
        } //end of while loop
    } // end of for loop

    cout<<"\nFinal array after sorting is: ";
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    return 0;
}

/* OUTPUT:
Given array is: 5 4 1 2 3

Final array after sorting is: 1 2 3 4 5
*/
