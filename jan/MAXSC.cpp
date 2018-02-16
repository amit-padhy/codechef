#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
	int T;
	cin>> T;

	while(T--){
		vector<vector<int> > A;
		int N;
		cin >> N;
		int i=0,j, num;
		while (i<N){
			A.push_back(vector<int>());
			j = 0;
			while (j< N){
				cin >> num;
				A[i].push_back(num);
				++j;
			}
			sort(A[i].begin(), A[i].end());
			++i;
		}

		// for (i=0; i<N ; ++i){
		// 	for (j=0; j<N; ++j){
		// 		cout<< A[i][j]<< " ";
		// 	}
		// 	cout<< endl;
		// }
		long long int total = 0;
		
		int val = A[N-1][N-1];
		total += val;

		j = N-2;
		bool not_found = false;
		while(j>=0){
			vector<int>::iterator idx = lower_bound(A[j].begin(), A[j].end(), val);
			int offset = idx - A[j].begin();
			// cout<< "offset = "<< offset<<endl;
			if (offset>0){
				val = A[j][offset-1];
				total += val;
			}else{

				not_found = true;
				break;
			}
			--j;
		}
		if (not_found){
			total = -1;
		}

		cout<< total<< endl;

	}
	return 0;
}