#include <iostream>
#include "generateMatrix.hpp"
#include "readFile.hpp"
#include "sum.hpp"
#include "mul.hpp"
#include "deAlloc.hpp"
#include "printMatrix.hpp"
#include "write.hpp"
using namespace std;

int main(){
    int** ptr_1 = nullptr;
    int** ptr_2 = nullptr;
    int** ptr_3 = nullptr;
    int** ptr_4 = nullptr;
    int** sum_1 = nullptr;
    int** sum_2 = nullptr;
    int** mul_1 = nullptr;
    int count,n;
    cout<< "enter the count of matrixes: ";
    cin >> count;
    cout << "enter the dimension of matrixes: ";
    cin >> n;
    generateMatrix(count,n);
    readFile("matrix1.txt",ptr_1,n);
    readFile("matrix2.txt",ptr_2,n);
    readFile("matrix3.txt",ptr_3,n);
    readFile("matrix4.txt",ptr_4,n);
	printMatrix(ptr_1, n);
    sum(ptr_1,ptr_2,sum_1,n);
    sum(ptr_3,ptr_4,sum_2,n);
    printMatrix(sum_2, n);
    write(sum_1,"sum1.txt",n);
    write(sum_2,"sum2.txt",n);
    mul(mul_1,sum_1,sum_2,n);
    write(mul_1,"mul.txt",n);
    deAlloc(ptr_1,n);
    deAlloc(ptr_2,ptr_3,n);
    deAlloc(ptr_4,sum_1,sum_2,mul_1,n);
    return 0;
}

