https://practice.geeksforgeeks.org/problems-preview/sorting-items/1

Code-:
vector<string> sortItems(int n, vector<string> &items)
{
        map<int,multiset<string>>m;
        for(auto x:items)
        {
            int size=x.size();
            m[size].insert(x);
        }
        
        vector<string>v;
        for(auto x:m)
        {
            for(auto y:x.second)
            {
                v.push_back(y);
            }
        }
        return v;
    }