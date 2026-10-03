// #include<bits/stdc++.h>
// using namespace std;


// int main(){
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);

// 	int t;
// 	cin >> t;

// 	while(t--){
// 		int x, y, n;
// 		cin >> x >> y >> n;
		
// 		int maximum;
// 		int minimum;

// 		if(x > y){
// 			maximum = x;
// 			minimum = y;
// 		}
// 		else{
// 			maximum = y;
// 			minimum = x;
// 		}

// 		int find = n;

// 		while(n%maximum != minimum){
// 			n--;
// 			find = n;
// 		}

// 		cout << find <<  "\n";
// 	}
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;

        long long maximum = max(x, y);
        long long minimum = min(x, y);

        long long find = n - ((n - minimum) % maximum + maximum) % maximum;

        cout << find << "\n";
    }
}