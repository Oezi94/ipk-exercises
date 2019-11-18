#include <iostream>
using namespace std;

int fiboRekursiv(int n){

	if (n > 0){
		if (n == 1){
			return 0;
		}
		if (n == 2)
			return 1;
		else
			return (fiboRekursiv(n-1) + fiboRekursiv(n-2));
	}
	else
		return -1;
}

int main(){
	
	int f;
	cout << "N eingeben: " << endl;
	cin >> f;
	cout << fiboRekursiv(f) << endl;
	
}
