
class Solution {
	public:
		int NthTerm(int n){
		    // Code  here
		  long long int ans=1;
		    for(int i=1;i<=n;++i)
		        ans=(ans*i+1)%1000000007;
		        return ans;
		}

};
