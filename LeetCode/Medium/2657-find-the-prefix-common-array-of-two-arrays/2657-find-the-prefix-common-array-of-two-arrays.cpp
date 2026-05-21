class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_set<int> set_a;
        unordered_set<int> set_b;
        int count = 0;
        vector<int> C;

        for(int i=0;i<n;i++){
            set_a.insert(A[i]);
            set_b.insert(B[i]);

            if(set_b.contains(A[i])) count++;
            if(A[i] != B[i] && set_a.contains(B[i])) count++;

            C.push_back(count);
        }
        return C;
    }
};