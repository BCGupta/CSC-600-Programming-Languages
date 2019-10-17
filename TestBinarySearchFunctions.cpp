/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int bsIterate(int arr[], int low, int high, int x){
    
    while(low <= high){
        int mid = low + (high - low)/2;
        
        if(arr[mid] == x){
            return mid;
        }
        
        if(arr[mid] < x){
            low = mid + 1;
        }
        
        else{
            high = mid - 1;
        }
    }
    
    return -1;
}
  

int bsRecursive(int arr[], int l, int r, int x){
    
   if(r >= 1){
        int mid = l + (r-l)/2;
        
        if(arr[mid] == x){
       return mid;
   }
   
   if(arr[mid] > x){
       return bsRecursive(arr, l, mid - 1, x);
   }
   
   if(arr[mid] < x){
       return bsRecursive(arr, mid + 1, r , x);
   }
   
   }
   
   return -1;
}

int main()
{
   int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = bsIterate(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
    
}

