/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

 // n is size of array
int maxlength(int arr[], int n){
    
    int maxlen = 0;
    int currentlength = 1;
    
    
    for(int i = 1; i < n; i++){  // go through the array
        
        if(arr[i] == arr[i-1]){ // if value at current index is greater, increment currentlength
            currentlength++;
        }
        else{  // if values dont match, reset currentlength
            currentlength = 1;
        }
            
         if(currentlength > maxlen){ // if currentlength is greater than max length, update maxlength
              maxlen = currentlength;
         }
          
    }
    cout << maxlen; // output max length of array
}

int main(){
    int a[] = {1,1,2,2,2,2,3,3,3,4,4,4,4,4,4,5,5,6,7,7,7,7};
    
    int n = sizeof(a)/sizeof(int);
    maxlength(a,n);
    

    return 0;
}

