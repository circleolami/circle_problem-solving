#include <iostream>
#include <vector>
using namespace std;

int main(){
    int avg=0, temp;
    vector<int> arr(5);

    for(int i=0; i<5; i++)
        cin>>arr[i];

    for(int i=0; i<5; i++){
        for(int j=i; j<5; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }
        }
        avg+=arr[i];
    }

    cout<<avg/5<<endl;
    cout<<arr[2]<<endl;

    return 0;
}