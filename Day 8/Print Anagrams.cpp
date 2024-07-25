unordered_map<string, vector<string>> mp;

        for(auto a:strs){
            string s = a;
            sort(s.begin(),s.end());
            mp[s].push_back(a);
        }

        vector<vector<string>> ans;
        for(auto a:mp){
            ans.push_back(a.second);
        }
        return ans;