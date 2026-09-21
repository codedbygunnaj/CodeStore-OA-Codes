#include<bits/stdc++.h>
using namespace std;

int main(){
    int sizee;
    cout<<"Enter the size of the matrix: ";
    cin>>sizee;
    int doublSize = 2*sizee-1;

    vector<vector<int>>matrix(sizee,vector<int>((2*sizee)-1,-1));

    for(int k=0;k<sizee;k++){
        int i = k, endI = 2*sizee - 2*k;
        for(;i<endI;i++){
            matrix[k][i] = sizee;
            matrix[i][k] = sizee;
        }
       
        int j = doublSize- 2*k;
        int endJ = k;
        for(;j>endJ; j--){
            matrix[k][j] = sizee;
            matrix[j][k] = sizee;
        }
    }
    return 0;
}