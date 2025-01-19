// 실수자료형 사용

#include <iostream>
using namespace std;

int main(){
    double a, b;
    cin>>a>>b;

    cout.precision(12); // 실수 전체 자리수 중 n(12)자리까지 표현 
    cout<<fixed;    // 고정 소수점 표기로 변환
    cout<<a/b;
    
    return 0;
}