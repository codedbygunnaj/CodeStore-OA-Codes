#include<bits/stdc++.h>
using namespace std;

int main(){
    int maxRow = INT_MIN;
    int minCol = INT_MAX;
    int mRId=-1,mCId=-1;

    int sizee = 0;
    cout<<"Enter the size of the matrix: ";
    cin>>sizee;
    
    vector<vector<int>>matrix(sizee,vector<int>(sizee,0));

    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<sizee;i++){
        for(int j=0;j<sizee;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<sizee;i++){
        int curSum = 0;
        for(int j=0;j<sizee;j++){
            curSum+=matrix[i][j];
        }
        
        if(maxRow<curSum){
            mRId=i;
            maxRow=curSum;
        }
    }

    for(int i=0;i<sizee;i++){
        int curSum = 0;
        for(int j=0;j<sizee;j++){
            curSum+=matrix[j][i];
        }
        if(minCol>curSum){
            mCId=i;
            minCol=curSum;
        }
    }

    cout<<"Max row index is: "<<mRId<<endl;
    cout<<"Min col index is: "<<mCId<<endl;
    if(maxRow-minCol<=5){
        cout<<"Balanced or Imbalanced: "<<"_Balanced_";
    }else{
        cout<<"Balanced or Imbalanced: "<<"_ImBalanced_";
    }

    return 0;
}