class Solution {
public:
    long long int dis(vector<int> v){
        long long int sum = v[0]*v[0]+v[1]*v[1];
        return sum;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
       vector<long long int> dist;
        vector<vector<int>> ans;
        for(int i=0;i<points.size();i++){
            dist.push_back(dis(points[i]));
        }
       
        sort(dist.begin(),dist.end());
        
        for(int i=0;i<points.size();i++){
            if(dis(points[i])<=dist[K-1])
                ans.push_back(points[i]);
        }
        
        return ans;
    }
};
