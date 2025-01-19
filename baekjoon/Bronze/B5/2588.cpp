#include <iostream>
using namespace std;

int main(){
    int a, b, c=0;
    int temp, res1=0, res2=0;

    cin>>a>>b;

    temp = b;

    while(temp){
        res1 = a*(temp%10);
        cout<<res1<<endl;
    
        for(int i=0; i<c; i++)
            res1*=10;

        temp/=10;
        c++;
        res2+=res1;
    }

    cout<<res2<<endl;

    return 0;
}