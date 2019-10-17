/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int min(int a, int b){
    return a < b ? a : b;
}

void max3(int a[], int n){
    
  int first, second, third;
  first = second = third = min(a[0],min(a[1],a[2]));
  
  
  map<int, int> hmap;
  
    for(int i = 0; i < n; i++){
        
        hmap[i] = a[i];
        
        if(a[i] > first)
        {

            third = second;
            second = first;
            first = a[i];
            
        }
            else if(a[i] > second && a[i] != first)
            {
                
            third = second;
            second = a[i];
            
             }
             
            else if(a[i] > third && a[i] != second && a[i] != first)
            {
                
            third = a[i];
            
             }
    }
    

    map<int, int>::iterator it = hmap.begin();
    vector<int> newarray;
    
    cout << "Reduced Array = [ ";
    while (it != hmap.end()){
        
        int key = it -> first;
        int element = it->second;
        
        if(element != first && element != second && element != third){
            newarray.push_back(element);
            
            cout << element << " ";
        }
        
        it++;
        
    }
    
    cout << "]" << endl;
    cout<< "Array size = " << newarray.size();
    
    
}


int main()
{
   int arr[] = {9,1,1,6,7,1,2,3,3,5,6,6,6,6,7,9};

    int n = sizeof(arr)/sizeof(int);
    
    max3(arr,n);
    
    return 0;
}




