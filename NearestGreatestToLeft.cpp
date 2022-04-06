#include<bits/stdc++.h>
using namespace std;

void NearestGreatestToLeft(int *arr, int n){
    vector<int> ans;
    stack<int> s;
    for(int i=0; i<n-1; i++){
        if(s.size()==0)
        ans.push_back(-1);
        else if(s.top()>arr[i] and s.size()>0)
        ans.push_back(s.top());
        if(s.top()<= arr[i] and s.size()>0){
            while(s.top()<= arr[i] and s.size()>0)
            s.pop();
            if(s.size()==0)
            ans.push_back(-1);
            else
            ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    NearestGreatestToLeft(arr, n);
    return 0;
}