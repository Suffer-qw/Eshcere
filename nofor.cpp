#include <bits/stdc++.h>
using namespace std;

int factorial(int* array, int i, int size){
    if(size < 0){
        return -1;
    }
   if(array[size] == i){
       return size;
   }
   
   else{
    return factorial(array,i, size-1) ;
   }
}

int vive(int* array,int size){
    if(size > 0){
       cout<<array[size-1]<< " ";
       return vive(array, size-1) ;
   }
   else{
       return 404;
   }
}

int vive_a(int* array,int size, int i){
    if(i < size){
       cout<<array[i]<< " ";
       return vive_a(array, size, i+1) ;
   }
   else{
       return 404;
   }
}


int main() {
    int size = 5;
    int* mass = new int[size];
    for(int i = 0; i < size; i++){
        mass[i] = i+1;
    }
    //cout<< factorial(mass, 2, size);
    cout<< vive(mass, size);
    cout<< endl;
    cout<< vive_a(mass, size, 0);
    
}
