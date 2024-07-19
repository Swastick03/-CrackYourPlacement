long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        long long x = 0,y = m-1;
        long long mini = INT_MAX;
        
        while(y<n){
            long long temp = a[y] - a[x];
            mini = min(mini,temp);
            x++;
            y++;
        }
        return mini;
    }  