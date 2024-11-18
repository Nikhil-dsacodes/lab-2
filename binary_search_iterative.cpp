#include<iostream>
using namespace std;
int main(){
    int n, i, num;
    cout<<"How many numbers you want to Enter: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The number you are looking for: ";
    cin>>num;
    
    int low = 0;
    int high = n-1;
    do{
        if(low == high){
            if(arr[low] == num){
                    cout<<num<<" is present at "<<low+1<<"st position";
                    break;
                }
            if(arr[low] != num){
                cout<<num<<" is not present in the array";
                break;
            }
          }
        else{
            int mid = (low + high)/2;
            
            if(arr[mid] == num){
              cout<<num<<" is present at "<<mid+1<<"th position";
              break;
            }
            if(arr[mid] < num){
                low = mid + 1;
            }
            if(arr[mid] > num){
                high = mid - 1;
            }
        }
    }while(low<=high);

    return 0;
}

