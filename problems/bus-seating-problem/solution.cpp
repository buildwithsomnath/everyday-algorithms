#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;cin>>n>>m;
    m = m - n;
    if(m%2==0){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    
    return 0;

}