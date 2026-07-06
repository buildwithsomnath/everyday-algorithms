#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n,k,m;cin>>n>>k>>m;
	int total_batches = n/k;
	int remain_cus = n%k;
	int final_batch = (remain_cus*.50)/m;
	int each_batch = (.50*k)/m;
	
	cout<<each_batch*total_batches + final_batch<<"\n";

	return 0;
}
