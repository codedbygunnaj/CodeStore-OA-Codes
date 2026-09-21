#include<bits/stdc++.h>
using namespace std;

bool primeChecker(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int sizee;

    cout<<"Enter the size of the array: ";
    cin>>sizee;

    cout<<"Enter the elements: "<<endl;
    vector<int>nums(sizee,0);
    for(int i=0;i<sizee;i++){
        cin>>nums[i];
    }

    cout<<"Before: ";
    for(int i:nums){
        cout<<i<<" ";
    }
    cout<<endl;

    //--logic--
    vector<int>primeTime,nonPrimeTime;

    for(int i=0;i<sizee;i++){
        if(nums[i]==2 || nums[i]==3){
            primeTime.push_back(nums[i]);
        }
        else if(primeChecker(nums[i])){
            primeTime.push_back(nums[i]);
        }else{
            nonPrimeTime.push_back(nums[i]);
        }
    }

    sort(primeTime.begin(),primeTime.end());
    sort(nonPrimeTime.begin(),nonPrimeTime.end());

    int largestPrime = primeTime[primeTime.size()-1];
    int smallestPrime = primeTime[0];

    nums[0]=largestPrime;
    nums[sizee-1]=smallestPrime;

    int k=nonPrimeTime.size()-1;
    int l=primeTime.size()-2;
    for(int i=1;i<sizee-1;i++){
        if(k>=0){
            nums[i]=nonPrimeTime[k--];
        }else{
            nums[i]=primeTime[l--];
        }
    }

    cout<<"After: ";
    for(int i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
