#include<iostream>
using namespace std;
#define size 5

int main()
{
    int array[size] = {23, 6, 9, 19, 3};
    int key,i;

    cout<<"The given array is: "<<endl;
    for(int a=0; a<size; a++){
        cout<< "array[ " << a << " ]  =  " << array[a] <<endl;
    }

    cout<<"Enter element To Search  in Array: ";
    cin>>key;
    for(i=0; i<size; i++){
        if(key == array[i]){
            break;
        }
    }

    if(i != size){
        cout<<"\nElement FOUND at index :  "<<i<<endl;
    }
    else{
        cout<<"\nElement NOT FOUND in Array  "<<endl;
    }

    return 0;
}

/* OUTPUT:
The given array is:
array[ 0 ]  =  23
array[ 1 ]  =  6
array[ 2 ]  =  9
array[ 3 ]  =  19
array[ 4 ]  =  3
Enter element To Search  in Array: 9

Element FOUND at index :  2
*/
