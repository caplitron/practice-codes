#include <bits/stdc++.h> 
using namespace std;

 

int main(void){
 int N = 0;
 cin>>N;
 int arr[N],fdigi[N],sdigi[N];
 string ss[N];
    for(int i = 0 ; i<N ; i++ ) {
        cin>> arr[i];
        ss[i] = to_string(arr[i]);
        //---
        if(ss[i].length() == 3){
        sort(ss[i].begin(), ss[i].end(), greater<char>());
     //----------*********---------------
            
            fdigi[i] = stoi(ss[i])/100;
            
            fdigi[i] = fdigi[i] * 11;
            sdigi[i] = stoi(ss[i])% 10;
            
            sdigi[i] = sdigi[i] * 7;
            arr[i] = fdigi[i] + sdigi[i];
            if( arr[i] > 99 ){
                arr[i] = arr[i] - ((arr[i] / 100)*100);
            }
        }
        //-----
    }
    int ev=0,od=0,even[N/2+1],odd[N/2+1];
    for(int i = 0 ; i < N ; i++){
        if(arr[i] != 0 && arr[i] > 9 ){
            if(i % 2 == 0){
                even[ev] = arr[i];
                ev++;
            }
            else{
                odd[od] = arr[i];
                od++;
            }
        }
    }
 
    
 
}
