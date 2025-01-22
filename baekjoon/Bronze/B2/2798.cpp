#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m, sum=0, res=0;

    cin>>n>>m;

    vector<int> vector(n);

    for(int i=0; i<n; i++)
        cin>>vector[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<n && j!=i; j++){
            for(int k=0; k<n && k!=i && k!=j; k++){
                sum = vector[i]+vector[j]+vector[k];
                if(m>=sum && res<=sum)
                    res = sum;
            }
        }
    }

    cout<<res<<endl;
}