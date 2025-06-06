class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();

        vector<int> visited(n,0);
        queue<int> q;
        q.push(0);
        visited[0] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int it: rooms[node]){
                if(visited[it] == 0){
                    visited[it] = 1;
                    q.push(it);
                }
            }
        }
        for(auto it: visited){
            if(it == 0) return false;
        }
        return true;
    }
};