#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){

	stack<int> nums;

	nums.push(190);
	nums.push(70);
	nums.push(35);
    nums.push(21);
    nums.push(15);
    nums.push(7);
    nums.push(-1);

    cout << endl;

	for(; nums.size() > 0; nums.pop()){
		cout << nums.top() << "  ";
	}
	
    cout << endl << endl;

}

