int main(){
    int n, i, num;
    cout<<"How many numbers you want to Enter: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter numbers: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Number you want to find is: ";
    cin>>num;
    
    for(i=0;i<n;i++){
        if(arr[i] == num){
            if(i==0)
            cout<<num<<" is present at "<<i+1<<"st position"<<endl;
            if(i==1)
            cout<<num<<" is present at "<<i+1<<"nd position"<<endl;
            if(i==2)
            cout<<num<<" is present at "<<i+1<<"rd position"<<endl;
            if(i>2)
            cout<<num<<" is present at "<<i+1<<"th postion"<<endl;
        }
    }
    return 0;
}
