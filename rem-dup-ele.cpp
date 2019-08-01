#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int x = 0 ; x < n ; x++){
        cin>>arr[x];
    }
   
    
    //--remove duplicates--
    
for(int i = 0 ; i < n ; i++){
    for(int j = i+1 ; j < n ; j++){
        if(arr[i] > 0 && arr[j] > 0 ){
            if(arr[i] == arr[j] ){
                
                arr[j] = NULL;
                
            }
        }
    }
}
//---print array ignoring al the NULL's--

for(int y = 0 ; y < n ; y++){
        if(arr[y] == NULL){
            continue;
        }else
        cout<<arr[y]<<" ";
    }


	return 0;
}
