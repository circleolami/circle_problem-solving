#include <iostream>
using namespace std;

int main(){
    // 시간초과 방지용 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, temp;
    cin>>n; 
    
    int arr[10003]={0};
    for(int i=0; i<n; i++){
        cin>>temp;
        arr[temp]+=1;
    }

    for(int i=1; i<=10000; i++){
        for(int j=0; j<arr[i]; j++)
            cout<<i<<'\n';
    }

    return 0;
}