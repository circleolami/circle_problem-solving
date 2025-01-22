#include <iostream>
using namespace std;

int main(){
    int n, temp, arr[13], cnt=0;

    cin>>n;

    temp = n;

    for(int i=0; temp>0; i++){
        cnt++; 
        arr[i]=temp%10;
        temp/=10;
    }

    for(int i=0; i<cnt; i++){
        for(int j=0; j<cnt; j++){
            if(arr[i]>arr[j]){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }

    for(int i=0; i<cnt; i++)
        cout<<arr[i];
    
    return 0;
}