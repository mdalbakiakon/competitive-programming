// // google asked question
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);

// 	stack<char> stk;
// 	string str;
// 	cin >> str;

// 	for(char c : str) stk.push(c);

// 		// for(char c : stk) cout << c << " ";
// 		// it will give error as when we iterate
// 		// under the hood it calls .begin() and .end()
// 		//  but stack is basically deque 
// 		// so both dont support this they have special purpose
// 		// such top pop this way they are created

// 	// so how to see or iterate
// 	// create a temp stack copy the curr stack
// 	// top and pop will do the work 
// 	// while keeping the curr stack intact

// 	// stack<char> temp = stk;
// 	// while(!temp.empty()){
// 	// 	cout << temp.top() << " ";
// 	// 	temp.pop();
// 	// }

// 	// stack<char> check_popped;

// 	// unordered_map<char, char> check_map = {
// 	// 	{")", "("}, 
// 	// 	{"}", "{"},
// 	// 	{"]", "["}
// 	// };

// 	// while(!stk.empty()){
// 	// 	if(!check_popped.empty()){
// 	// 		if(stk.top() == check_map[check_popped.top()]){
// 	// 			check_popped.pop();
// 	// 			stk.pop();
// 	// 		}else{
// 	// 			char last = stk.top();
// 	// 			check_popped.push(last);
// 	// 			stk.pop();
// 	// 		}
// 	// 	}else{
// 	// 		char last = stk.top();
// 	// 		check_popped.push(last);
// 	// 		stk.pop();
// 	// 	}
// 	// };

// 	// cout << bool(check_popped.size() == 0) << endl;

// }



#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<char> stk;
    string str;
    cin >> str;

    unordered_map<char, char> check_map = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };

    for(char c : str){
        if(c == '(' || c == '{' || c == '['){
            stk.push(c);
        }
        else{
            if(stk.empty() || stk.top() != check_map[c]){
                cout << false << endl;
                return 0;
            }

            stk.pop();
        }
    }

    cout << bool(stk.empty()) << endl;
}