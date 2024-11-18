
#include<iostream>
#include<cstdlib>
#include<chrono>
using namespace std::chrono;
using namespace std;
int main(){
        
    int i, num;
    long long size = 50LL;
    long long N = 10000000LL;
    
    cout<<"Enter the number you are looking for: ";
    cin>>num;
    
    while(size != 500000000000LL){
        // initialinzing time
        auto start = std::chrono::high_resolution_clock::now();
    
        long long arr[size];
        
        for(i=0;i<size;i++){
        arr[i] = rand() % N;
        }
        
        for(i=0;i<size;i++){
            if(arr[i] == num){
                cout<<"Your number is present at "<<i+1<<"th position"<<endl;
                break;
            }
        }

        // finishing time
         auto end = std::chrono::high_resolution_clock::now();
        // duration for execution
        std::chrono::duration<double, std::milli> elapsed = end - start; 
        // printing duration
        cout<<"For Size = "<<size<<"           Time = "<<elapsed.count()<<" milli seconds"<<endl;
        
        size = size * 5;
        
    }
    return 0;
}
