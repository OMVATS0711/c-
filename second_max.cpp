#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,4,8,7,6};
    int ans= INT_MIN;
    //largest
    for(int i=0;i<5;i++){
        if(ans<arr[i]){
            ans=arr[i];
        }
    }
    //second largest
    int second=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]!=ans){
            second= max(arr[i],second);
            
        }
    }
    cout<<second<<endl;
    
   
    

}