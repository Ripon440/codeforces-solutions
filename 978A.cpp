#include<iostream>
using namespace std;

int check(int arr[],int n,int arrayElement ){
    int a = 0;
    while(n--){
        if(arr[n] == arrayElement){
            arr[n] = 0;//remove duplicate
            a++;
        }
    }
    return a;
}

int main(){
    int arr[1001] = {0};
    int n,arrayElement;
    cin >> n;
    int updatedLength = n;
    for(int i = 0 ; i < n ; i++){
        cin >> arrayElement;
        updatedLength = updatedLength - check(arr,i,arrayElement);//remove duplicate and decrease updated array length
        arr[i] = arrayElement;
    }
    cout << updatedLength << endl;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] != 0){
            cout << arr[i] << " ";
        }
    }
    return 0;
}
