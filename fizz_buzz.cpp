
#include <iostream>
///multiples of 3 = fizz
///multiples of 5 = buzz
///multies of both = fizzbuzz

using namespace std;

int main(){
	int firstNumber = 3;
	int secondNumber = 5;
	for(int x = 1; x <= 100; x++){
		if(((x % firstNumber)==0) && ((x % secondNumber)==0)){
			cout << "FiZzBuZz" << endl;
		} else if((x % firstNumber)==0){
			cout << "FiZz" << endl;
		} else if((x % secondNumber)==0){
			cout << "BuZz" << endl;
		} else {
			cout << x << endl;
		}
	}
}
