#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int same, sum=0;

    cin>>a>>b>>c;

    if(a==b){
        same = a;
        if(same == c)
            sum+=10000+same*1000;
        else
            sum+=1000+same*100;
    }
    else{
        if(a==c || b==c){
            same = c;
            sum+=1000+same*100;
        }
        else
            sum+=((a>b?a:b)>c?(a>b?a:b):c)*100;
    }

    cout<<sum<<endl;

    return 0;
}