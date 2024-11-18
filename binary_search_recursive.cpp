#include<iostream>
using namespace std;
int BS_Rec(int arr[], int x, int low, int high){
    
    if(low > high){
        return -1;
    }
    
    else{
        int mid = (low + high)/2;
        // if x is present at mid index
        if(arr[mid] == x){
            return mid;
        }
        else{
            if(arr[mid] < x){
            //target bigger than middle number: right search
            return BS_Rec(arr, x, mid+1, high);
            }
            if(arr[mid] > x){
            //target smaller than middle number: left search
            return BS_Rec(arr, x, low, mid-1);
            }
        }
    }
};
int main(){
    int size, i, target;
    cout<<"How many numbers you want to pass: ";
    cin>>size;
    int myArr[size];
    cout<<"Please enter the numbers: ";
    for(i=0; i<size; i++){
        cin>>myArr[i];
    }
    cout<<"Enter the number you want to find: ";
    cin>>target;

    int result = BS_Rec(myArr, target, 0, size-1);
    
    if(result == -1){
        cout<<target<<" not found";
    }
    else{
        if(result == 0){
            cout<<myArr[result]<<" is present at 1st position";
        }
        if(result == 1){
            cout<<myArr[result]<<" is present at 2nd position";
        }
        if(result == 2){
            cout<<myArr[result]<<" is present at 3rd position";
        }
        if(result >= 3){
        cout<<myArr[result]<<" is present at "<<result+1<<"th position";
        }
    }
}
