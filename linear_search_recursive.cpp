
#include <iostream>
using namespace std;

int LS_Func(int arr[], int check, int x, int size) {
    if (check >= size) {
        return 0;
    }
    
    if (arr[check] == x) {
        return check;
    }
    
    return LS_Func(arr, check + 1, x, size);
}

int main() {
    int size, i;
    cout<<"How many Numbers you want to Enter: ";
    cin>>size;
    int myArray[size];
    cout<<"Enter the numbers: ";
    for(i=0;i<size;i++){
        cin>>myArray[i];
    }
    int num;
    cout<<"Enter number you are looking for: ";
    cin>>num;
    
    int ans = LS_Func(myArray, 0, num, size);
    
    if (ans != 0) {
        cout << "Your number is present at " << ans+1<< "th position" << endl;
    } else {
        cout << "Your number is not present in the array"<<endl;
    }

    return 0;
}
