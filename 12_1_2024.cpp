class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        vector<int>a;
        while(k--){
            a.push_back(q.front());
            q.pop();
        }
        int n=q.size();
        reverse(a.begin(),a.end());
        for(auto &it:a)q.push(it);
        while(n--){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};
