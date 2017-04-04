/**Merge sort is a sorting technique based on divide and conquer technique.
Merge sort first divides the array into equal halves and then combines them in a sorted manner.
Merge sort keeps on dividing the list into equal halves until it can no more be divided.
By definition, if it is only one element in the list, it is sorted.
Then, merge sort combines the smaller sorted lists keeping the new list sorted too.
**/

#include <iostream>
using namespace std;
#define MAX 10
int a[10] = {10, 19, 42, 26, 27, 14, 31, 33, 35, 44};
int b[10];

///The key to Merge Sort is merging two sorted lists into one
int merging(int low, int mid, int high){
    int l1, l2, i;
    for(l1=low, l2=mid+1, i=low; l1<=mid && l2<=high; i++){
        if(a[l1] <= a[l2]){
            b[i] = a[l1++];
        }
        else{
            b[i] = a[l2++];
        }
    }

    while(l1 <= mid){
        b[i++] = a[l1++];
    }

    while(l2 <= high){
        b[i++] = a[l2++];
    }

    for(i=low; i<=high; i++){
        a[i] = b[i];
    }
}

void sort(int low, int high){
    int mid;
    if(low < high){
        mid = (low+high)/2;
        sort(low, mid);
        sort(mid+1, high);
        merging(low, mid, high);
    }
    else{
        return;
    }
}

int main()
{
    cout<<"List before sorting"<<endl;
    for(int i=0; i<=MAX; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    sort(0, MAX);
    cout<<"List after sorting"<<endl;
    for(int i=0; i<=MAX; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}

/*output:
List before sorting
10 19 42 26 27 14 31 33 35 44 0
List after sorting
0 10 14 19 26 27 31 33 35 42 44
*/
