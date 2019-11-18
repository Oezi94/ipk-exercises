#include <iostream>
using namespace std;

int fiboIter(int numberOfElements){
		int fiboOne = 0;
		int fiboTwo = 1;
		int fiboFinal = fiboOne + fiboTwo;
	if (numberOfElements > 0){	

		for (int x = 1; x <= numberOfElements; x++){
			if (x != numberOfElements)
				cout << fiboOne << ",";
			else
				cout << fiboOne << ",";
	
			fiboOne = fiboTwo;
			fiboTwo = fiboFinal;
			fiboFinal = fiboOne + fiboTwo;
		}	
	}
	else
		fiboOne = -1;

	return fiboOne;
}

int main(){
	int n;
	cout << "N eingeben: ";
	cin >> n;
	cout << fiboIter(n) << endl;
}
