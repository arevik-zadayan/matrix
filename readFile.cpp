#include <iostream>
#include <fstream>
using namespace std;

void readFile(std::string path,int** &ptr,int n){
     ifstream inputFile(path);
     if (inputFile.good()) {
     	ptr = new int*[n];
      	for(int i=0;i<n;i++){
        	ptr[i] = new int[n];
        	for(int j=0;j<n;j++){
            	inputFile >> ptr[i][j];
            	//cout << ptr[i][j] << " ";
        	}
        	//cout << endl;
      	}
      inputFile.close();
      }else {
             cout << "Error!";
      }
}
