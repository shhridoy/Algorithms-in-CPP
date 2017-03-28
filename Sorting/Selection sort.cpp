/*
Selection sort is a simple sorting algorithm. 
This sorting algorithm is an in-place comparison-based algorithm in which the 
list is divided into two parts, the sorted part at the left end and the unsorted part at the right end.

Step 1 − Set MIN to location 0 
Step 2 − Search the minimum element in 		the list 
Step 3 − Swap with value at location MIN Step 4 − Increment MIN to point to next 			element 
Step 5 − Repeat until list is sorted
*/

#include <iostream>
using namespace std;
#define size 7
int arr[size] = {4, 6, 3, 2, 1, 9, 7};

void display(){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(){
    int indexMin, i, j;
    for(i=0; i<size-1; i++){
        indexMin = i;
        for(j=i+1; j<size; j++){
            if(arr[j] < arr[indexMin]){
                indexMin = j;
            }
        }
        if(indexMin != i){
            cout<<"\nItem swapped: "<<arr[i]<<", "<<arr[indexMin]<<endl;

            /// swap the numbers
            int temp = arr[indexMin];
            arr[indexMin] = arr[i];
            arr[i] = temp;
        }

        cout<<"Iteration "<<i+1<<"#: ";
        display();
    }
}

int main()
{
    cout<<"Given array: ";
    display();

    selectionSort();

    cout<<"\nOutput array after selection sort: ";
    display();
    return 0;
}

/* OUTPUT:
Given array: 4 6 3 2 1 9 7

Item swapped: 4, 1
Iteration 1#: 1 6 3 2 4 9 7

Item swapped: 6, 2
Iteration 2#: 1 2 3 6 4 9 7
Iteration 3#: 1 2 3 6 4 9 7

Item swapped: 6, 4
Iteration 4#: 1 2 3 4 6 9 7
Iteration 5#: 1 2 3 4 6 9 7

Item swapped: 9, 7
Iteration 6#: 1 2 3 4 6 7 9

Output array after selection sort: 1 2 3 4 6 7 9
*/
