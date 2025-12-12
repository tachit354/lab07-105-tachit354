#include<iostream>
using namespace std;

char before(char x){
	if( x == 'A'){
		char y = 'Z';
		return y;
	}

	if( x <= 'Z' && x != '0'){
		char y = x - 1;
		return y;
	}else{
		char y = '0';
		return y ;
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
