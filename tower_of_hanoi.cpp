long long ans=0;
    void helpe(int n,int from,int to,int help){
        if(n==0)return;
        helpe(n-1,from,help,to);
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<"\n";
        ans++;
        helpe(n-1,help,to,from);
    }
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int help) {
        helpe(N,from,to,help);
        return ans;
    }
