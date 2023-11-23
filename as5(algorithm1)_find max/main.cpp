#include <iostream>
#include<vector>
using namespace std;
vector<int>vector1;
void findmax(vector<int>&vector1){
    int Max = vector1[0];
    for(int i = 1; i<vector1.size();i++){
        if(vector1[i]>Max)
            Max=vector1[i];
    }
    cout<<"Max: "<<Max;
}


int main(){

    int n,x;
    do{
        cout<<"Nhap so luong ban muon nhap: ";
        cin>>n;
        if(n==0){
            cout<<"It's not funny bro, try again!!! -_-"<<endl;

        }
    }while(n==0);
    for(int i = 0; i < n;i++){
        cin >> x;
        vector1.push_back(x);
    }
    findmax(vector1);
}
