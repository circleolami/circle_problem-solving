#include <iostream>
using namespace std;

int main(){
    int score;

    cin>>score; // endl은 줄바꿈을 위한 것으로, 입력에서 사용 불가 

    if(score>=90)
        cout<<"A"<<endl;
    else if(score>=80)
        cout<<"B"<<endl;
    else if(score>=70)
        cout<<"C"<<endl;
    else if(score>=60)
        cout<<"D"<<endl;
    else
        cout<<"F"<<endl;

    return 0;
}