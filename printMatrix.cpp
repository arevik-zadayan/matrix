#include <iostream>
using namespace std;


void printMatrix(int** &ptr, const int n){

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
				cout << ptr[i][j];
				cout << " ";
		}
		cout << endl;
	}
}