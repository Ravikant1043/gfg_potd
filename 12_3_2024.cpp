// generalized fibonacci number 

typedef long long ll;
struct matrix
{
    ll a[3][3];
};
matrix identity(){
    matrix id;
    id.a[0][0]=1,id.a[0][1]=0,id.a[0][2]=0;
    id.a[1][0]=0,id.a[1][1]=1,id.a[1][2]=0;
    id.a[2][0]=0,id.a[2][1]=0,id.a[2][2]=1;
    return id;
}

matrix mul(matrix A,matrix B,ll m){
    matrix re;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            ll sum=0;
            for(int i=0;i<3;i++){
                sum+=A.a[row][i]*B.a[i][col];
                sum%=m;
            }
            re.a[row][col]=sum%m;
        }
    }
    return re;
}

matrix expon(matrix A,ll b,ll m){
    if(b==0) return identity();
    if(b%2==0) return expon(mul(A,A,m),b/2,m);
    else return mul(A,expon(A,b-1,m),m);
}
class Solution {
  public:
    long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        // code here
        
        matrix A;
        A.a[0][0]=a,A.a[0][1]=b,A.a[0][2]=c;
        A.a[1][0]=1,A.a[1][1]=0,A.a[1][2]=0;
        A.a[2][0]=0,A.a[2][1]=0,A.a[2][2]=1;
        matrix C=expon(A,n-2,m);
        ll ans=0;
        for(int i=0;i<3;i++){
            // for(int j=0;j<3;j++)cout<<C.a[i][j]<<" ";
            // cout<<"\n";
            // if(i==2)ans+=C.a[0][i]*(c);
            // else 
            ans+=C.a[0][i];
            ans%=m;
        }
        return ans%m;
        
    }
};
