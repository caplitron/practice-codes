#include <iostream>
using namespace std;
int even(int n){
    if( n == 2)
    cout<<2;
    else{
        
        int x = n/2;
        static int i=3,j=2,count=1;
        //----prime
        int counter = 3;
        for( i = 3 ; i < 500000 ; i+=2){
            int flag = 0;
            for( j = 2 ; j < i/2 ; j++){
                if( i % j == 0){
                    flag = 1;
                    break;
                }
                    
                
            }
            if( flag == 0){
                count++;
            }
            if(count == x){
                cout<<i;
                break;
            }
        }
            
        
    }    
}
int main() {
    int n;
    cin>>n;
    if(n % 2 == 0){
        even(n);
    }//else{
       // odd(n);
    //}


	return 0;
}
