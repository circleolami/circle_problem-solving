#include <iostream>
using namespace std;

int main(){
    int n;
    int five, three;

    cin>>n;
    five = n/5;

    for(int i=five; i>=0; i--){
        if((n-i*5)%3==0)
            break;
        else
            five--;
    }

    if(five>=0 && (n-five*5)%3==0){
        three=(n-five*5)/3;
        cout<<five+three<<endl;
    }
    else
        cout<<-1<<endl;
    
    return 0;
}