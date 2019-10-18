

#include <iostream>
using namespace std;

double sec(void)
{
    
return double(clock())/double(CLOCKS_PER_SEC);

}

int fit(int n){
    
    int x = 0;
    int y = 1;
    int z = 0;
    int i = 2;
    
    while(i <= n){
        
        if(n == 0){
            return x;
        }
        z = x + y;
        x = y;
        y = z;
        i++;
    }
    
    return y;
}

int frec(int n) 
{ 
   if (n <= 1) 
      return n; 
   return frec(n-1) + frec(n-2); 
} 


int main()
{
    
    
    int fib = frec(46);
    
    cout << fib << endl <<"Recursive Program took " << sec() << " seconds to complete" << endl;
  
    return 0;
}
