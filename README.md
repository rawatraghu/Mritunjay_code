# Mritunjay_code
code share algo
vector<int> help_classmate(vector<int> arr, int n) 
    { 
        int i;
        vector<int> v;
        stack<int> s;
        for(i=n-1;i>=0;i--){
            if(s.empty())
            {
                v.push_back(-1);
            }
            else if(!s.empty()&&arr[i]>s.top()){
                v.push_back(s.top());
            }
            else if(!s.empty()&&arr[i]<=s.top()){
                while(!s.empty()&&arr[i]<=s.top()){
                    s.pop();
                }
                if(s.empty()){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        // int i,j,t=0;
        // vector<int> v;
        // for(i=0;i<n;i++){
        //     for(j=i+1;j<n;j++){
        //         if(arr[i]>arr[j]){
        //             v.push_back(arr[j]);
        //             t=1;
        //             break;
        //         }
        //     }
        //     if(t==0)
        //         v.push_back(-1);
        //     t=0;
        // }
        reverse(v.begin(),v.end());
        return v;
    } 
