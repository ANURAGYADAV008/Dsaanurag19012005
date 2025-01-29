class Solution { 
private:
 class DisjointSet{
    vector<int> rank,parent;
    public:
       DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i = 0; i <= n; i++){
            parent[i] = i;
        }
       }
       int findUlmtPar(int node){
        if(node == parent[node])return node;

        return parent[node] = findUlmtPar(parent[node]);
       }
       bool unionByRank(int u,int v){
        int ulp_u = findUlmtPar(u);
        int ulp_v = findUlmtPar(v);
        if(ulp_u == ulp_v) return false;
        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_v] < rank[ulp_u]){
            parent[ulp_v] = ulp_u;
        }
        else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
        return true;
       }
 };   
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        DisjointSet* temp = new DisjointSet(n);
        for(int i = 0; i < edges.size(); i++){
            if(!temp->unionByRank(edges[i][0],edges[i][1])){
                return edges[i];
            }
        }
        return {};
    }
};