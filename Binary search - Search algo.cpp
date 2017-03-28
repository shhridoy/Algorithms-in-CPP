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
    int result = binary_search(0, size-1, 40);
    if(result<0){
        cout<<"Item not found\nSearched "<<count<<" times"<<endl;
    }
    else{
        cout<<"Item found at "<<result<<" index after "<<count<<" times"<<endl;
    }

    return 0;
}
