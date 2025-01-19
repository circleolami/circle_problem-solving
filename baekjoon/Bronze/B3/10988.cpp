#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    bool pal;

    cin>>str;

    // string 함수에서 문자열 길이 구하는 법 = str.length() 
    for(int i=0; i<str.length(); i++){
        if(str[i] != str[str.length()-i-1]){
            pal = false;
            break;
        }
        pal = true;
    }

    cout<<(int)pal<<endl;

    return 0;
}