// #include<bits/stdc++.h>
// using namespace std;

// bool check(int a, int b){
// 	return a%b==0;
// }

// int main(){
// 	int t;
// 	cin >> t;

// 	vector<int> picks;

// 	while(t--){
// 		int count = 0;
// 		int a, b;
// 		cin >> a >> b;
// 		picks.push_back([a, b]);

// 		while(check(a, b) == 0){
// 			a+=1;
// 			count+=1;
// 		}

// 		cout << count << endl;
// 	}
// }





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        int remainder = a % b;
        int count = (remainder == 0) ? 0 : (b - remainder);

        cout << count << endl;
    }
}