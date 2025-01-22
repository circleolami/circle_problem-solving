#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> v;

// 이분 탐색
int search(int start, int end, long long num){
    while(start<=end){
        int mid = (start+end)/2;

        if(v[mid]==num)
            return 1;
        else if(v[mid] > num)
            end = mid-1;
        else
            start = mid+1;
    }
    return 0;
}

int main(){
    int n, m;
    long long temp;

    // 시간초과 방지용
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    cin>>m;
    for(int i=0; i<m; i++){
        cin>>temp;
        cout<<search(0, n-1, temp)<<" ";
    }

    return 0;
}
