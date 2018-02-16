#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
	int T;
	cin>> T;
	int n,k, num;
	while(T--){
		cin>> n >> k;
		vector<int> a;
		int i=0;
		while(i<n){
			cin>>num;
			a.push_back(num);
			++i;
		}
		a.insert(a.end(), a.begin(), a.end());

		for (auto &i: a)
			cout<< i <<" ";
	}


	return 0;
}
