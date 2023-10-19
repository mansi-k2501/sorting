#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,0,2,10,5};
    int i,j;
    for(j=0;j<5;j++){
                     for(i=0;i<5;i++){
                                      if(arr[i]>arr[i+1]){
                                                          int temp=arr[i];
                                                          arr[i]=arr[i+1];
                                                          arr[i+1]=temp;
                                                          }
                                      }
                     }
    for(i=0;i<5;i++){
                     cout<<arr[i]<<"\t";
                     }
    return 0;
}

                                                          
