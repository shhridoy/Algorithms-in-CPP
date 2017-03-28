/*
Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm
that repeatedly steps through the list to be sorted, compares each pair of adjacent items 
and swaps them if they are in the wrong order.
*/

#include <iostream>
using namespace std;

int main()
{
    int temp;
    int arr[5] = {75, 13, 55, 74, 51};

    cout<<"Array before sorting ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(arr[j] > arr[j+1]){ ///swap the values
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            
            //for showing the internal occurance
            cout<<"sorting.......... ";
            for(int i=0; i<5; i++){
                cout<<arr[i]<<"   ";
            }
            cout<<endl;
        }
        
        //for showing the internal changes
        static int count = 1;
        cout<<"Array after "<<count<<" pass "<<endl;
        for(int i=0; i<5; i++){
            cout<<"\t\t\t Index "<<i<<" Value:   "<<arr[i]<<endl;
        }
        count++;
    }
    
    // print the sorted array
    cout<<"Array after sorting ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"   ";
    }

    return 0;
}

/* OUTPUT:

Array before sorting 75 13 55 74 51
sorting.......... 13   75   55   74   51
sorting.......... 13   55   75   74   51
sorting.......... 13   55   74   75   51
sorting.......... 13   55   74   51   75
Array after 1 pass
                         Index 0 Value:   13
                         Index 1 Value:   55
                         Index 2 Value:   74
                         Index 3 Value:   51
                         Index 4 Value:   75
sorting.......... 13   55   74   51   75
sorting.......... 13   55   74   51   75
sorting.......... 13   55   51   74   75
sorting.......... 13   55   51   74   75
Array after 2 pass
                         Index 0 Value:   13
                         Index 1 Value:   55
                         Index 2 Value:   51
                         Index 3 Value:   74
                         Index 4 Value:   75
sorting.......... 13   55   51   74   75
sorting.......... 13   51   55   74   75
sorting.......... 13   51   55   74   75
sorting.......... 13   51   55   74   75
Array after 3 pass
                         Index 0 Value:   13
                         Index 1 Value:   51
                         Index 2 Value:   55
                         Index 3 Value:   74
                         Index 4 Value:   75
sorting.......... 13   51   55   74   75
sorting.......... 13   51   55   74   75
sorting.......... 13   51   55   74   75
sorting.......... 13   51   55   74   75
Array after 4 pass
                         Index 0 Value:   13
                         Index 1 Value:   51
                         Index 2 Value:   55
                         Index 3 Value:   74
                         Index 4 Value:   75
Array after sorting 13   51   55   74   75

*/
