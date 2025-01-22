#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // 시간초과 에러 없애기 - 입출력 속도 개선
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    sort(arr.begin(), arr.end());   // vector에서 sort 함수를 사용하는 방법

    for(int i=0; i<n; i++)
        cout<<arr[i]<<'\n';
    
    return 0;

}