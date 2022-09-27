#include <iostream>
using namespace std;

void sum(int** &ptr_1,int** &ptr_2,int** &sum,const int n){
         sum = new int*[n];
         for(int i = 0;i < n; ++i){
            sum[i] = new int[n];
            for(int j = 0;j < n; ++j){
                sum[i][j] = ptr_1[i][j] + ptr_2[i][j];
                cout << sum[i][j] << " ";
            }
         cout << endl;
       }
}
