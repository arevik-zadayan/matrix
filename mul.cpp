#include <iostream>
using namespace std;

void mul(int** &mul1,int** &sum_1,int** &sum_2,const int n){
    mul1 = new int*[n];
    cout << "mul of matrixes :" <<endl;
    for(int i = 0;i < n; ++i){
        mul1[i] = new int[n];
        for(int j = 0;j < n; ++j){
             mul1[i][j] = 0;
             for (int k = 0; k < n; ++k){
                mul1[i][j] += sum_1[i][k] * sum_2[k][j];                              }
                 cout <<mul1[i][j] << " ";
             }
        cout << endl;
    }
}
