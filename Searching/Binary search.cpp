/*
Binary search, also known as half-interval search, logarithmic search, or binary chop, 
is a search algorithm that finds the position of a target value within a sorted array.
1. Let min=1 min = 1 min=1m, i, n, equals, 1and max=n max = n max=nm, a, x, equals, n.
2. Guess the average of max max maxm, a, x and $ min $, rounded down so that it is an integer.
3. If you guessed the number, stop. You found it!
4. If the guess was too low, set $ min $ to be one larger than the guess.
5. If the guess was too high, set $ max $ to be one smaller than the guess.
6. Go back to step two.
*/

#include <iostream>
using namespace std;

const int size = 10;
int arr[size] = {11, 14, 15, 18, 22, 28, 31, 38, 39, 42};
int count = 0;

int binary_search(int startIndex, int endIndex, int value){
    count++;
    int midIndex = (startIndex+endIndex)/2;
    cout<<"Value of middle Index: "<<arr[midIndex]<<endl;

    if(arr[midIndex] == value){
        return midIndex;
    }
    else{
        if(startIndex >= endIndex){
            return -1;
        }
        else{
            if(value < arr[midIndex]){
                cout<<"As value "<<value<<" < "<<arr[midIndex]<<" start index "<<startIndex<<" last index "<<midIndex-1<<" mid index "<<(startIndex+(midIndex-1))/2<<" value "<<value<<endl;
                binary_search(startIndex, midIndex-1, value); /// recursion
            }
            else{
                cout<<"As value "<<value<<" =/> "<<arr[midIndex]<<" start index "<<midIndex+1<<" last index "<<endIndex<<" mid index "<<(endIndex+(midIndex+1))/2<<" value "<<value<<endl;
                binary_search(midIndex+1, endIndex, value); /// recursion
            }
        }
    }
}

int main()
{
    int result = binary_search(0, size-1, 14);
    if(result<0){
        cout<<"Item not found\nSearched "<<count<<" times"<<endl;
    }
    else{
        cout<<"Item found at "<<result<<" index after "<<count<<" times"<<endl;
    }

    return 0;
}

/* OUTPUT:
Value of middle Index: 22
As value 14 < 22 start index 0 last index 3 mid index 1 value 14
Value of middle Index: 14
Item found at 1 index after 2 times
*/
