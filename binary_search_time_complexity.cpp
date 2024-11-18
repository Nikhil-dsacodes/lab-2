#include<iostream>
#include<chrono>
#include<algorithm>
using namespace std;
 void sortArrayAscending(int arr[], int size) {
    std::sort(arr, arr + size); 
    };
int main(){
    int num;
    
    cout<<"The number you are looking for: ";
    cin>>num;
    int size = 50;

do{    
    int i;
    int low = 0;
    int high = size - 1;
    int arr[size];
    
    //passing elements to the array...
    for(i=0; i<size; i++){
        arr[i] = rand() % 10000000;
    }
    //sorting...
        sortArrayAscending(arr, size);
    
    
//initializing time...
auto start = std::chrono::high_resolution_clock::now();
    
    do{
        if(low == high){
            if(arr[low] == num){
                    cout<<"    ";
                    break;
                }
            if(arr[low] != num){
                cout<<"        ";
                break;
            }
          }
        else{
            int mid = (low + high)/2;
            
            if(arr[mid] == num){
              cout<<num<<"     ";
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
//finishing time...
auto end = std::chrono::high_resolution_clock::now();
// duration for execution
std::chrono::duration<double, std::milli> elapsed = end - start;
cout<<"For Size = "<<size<<"           Time = "<<elapsed.count()<<" milli seconds"<<endl;
  
  size = size*2;
}while(size < 10000000);
    return 0;
}
