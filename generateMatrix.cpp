#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void generateMatrix(int count,int n){
   std::stringstream ss;
   for (int i = 1; i <= count; ++i){
       ss.str(std::string());
       ss << "matrix" << i << ".txt";
       ofstream myfile;
       myfile.open (ss.str());
       for(int i = 0; i < n; ++i) {
        for(int j =0; j < n; ++j){
         myfile << (rand() % 10) << " ";
        }
        myfile <<endl;
        }
   }
}
