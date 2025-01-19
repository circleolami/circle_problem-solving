#include <iostream>
using namespace std;

int main(){
    int sum1, sum2=0, n;
    int price, m;

    cin>>sum1>>n;

    for(int i=0; i<n; i++){
        cin>>price>>m;
        sum2+=price*m;
    }

    if(sum1==sum2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}