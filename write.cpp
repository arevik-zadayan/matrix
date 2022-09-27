#include <iostream>
#include <fstream>
using namespace std;

void write(int** &ptr,std::string path,const int n){
     ofstream myfile;
     myfile.open (path);
       for(int i = 0;i < n; ++i){
                 for(int j = 0;j < n; ++j){
                     myfile << ptr[i][j]<< " ";
                 }
              myfile << endl;
            }
}
