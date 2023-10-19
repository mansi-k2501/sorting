#include <iostream>
using namespace std;
void SelectionSort(int array[5],int a, int b){
     for(b=0;b<5;b++){
                     for(a=b+1;a<5;a++){
                                      if(array[b]>array[a]){
                                                          int temp=array[b];
                                                          array[b]=array[a];
                                                          array[a]=temp;
                                                          }
                                      }
                     }
     }
int main(){
    int arr[5]={3,0,2,10,5};
    int i, j;
    SelectionSort(arr,i,j);
    for(i=0;i<5;i++){
                     cout<<arr[i]<<"\t";
                     }
    return 0;
}
