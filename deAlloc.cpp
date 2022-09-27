#include <iostream>

void deAlloc(int ** &arr1,const int n){
   for(int i = 0; i < n; ++i) {
         delete[] arr1[i];
     }
   delete[] arr1;
}
void deAlloc(int ** &arr1,int ** &arr2,const int n){
   for(int i = 0; i < n; ++i) {
         delete[] arr1[i];
         delete[] arr2[i];
     }
   delete[] arr1;
   delete[] arr2;
}
void deAlloc(int ** &arr1,int ** &arr2,int ** &arr3,int ** &arr4,const int n){
   for(int i = 0; i < n; ++i) {
         delete[] arr1[i];
         delete[] arr2[i];
         delete[] arr3[i];
         delete[] arr4[i];
     }
   delete[] arr1;
   delete[] arr2;
   delete[] arr4;
}
