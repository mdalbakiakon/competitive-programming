// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);


// 	int t;
// 	cin >> t;


// 	while(t--){
// 		int n;
// 		cin >> n;

// 		vector<int> vec(3);
// 		for(int &v : vec) cin >> v;

// 		int count = 0;
// 		int sum = 0;
// 		int i = 0;

// 		while(sum < n){
// 			if(i == 3) i = 0;
// 			sum += vec[i];
// 			count++;
// 			i++;
// 		}

// 		cout << count << "\n";
// 	}
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		long long n;
		cin >> n;

		long long a[3];
		cin >> a[0] >> a[1] >> a[2];

		long long cycle = a[0] + a[1] + a[2];
		long long full = (n - 1) / cycle;   // full cycles that still end below n
		long long count = full * 3;
		long long sum = full * cycle;

		int i = 0;
		while(sum < n){
			sum += a[i];
			i++;
			count++;
		}

		cout << count << "\n";
	}
}