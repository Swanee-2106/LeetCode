class Solution {
public:
    /*bool isPrimenum(int n){
        bool isPrime =true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime==true){
            return true;
        }else{
            return false;
        }
    }*/
    int countPrimes(int n) {
        int ans=0;
        vector<bool> isPrime(n+1,true);
        for(int i=2;i<n;i++){
            if(isPrime[i]==true){
                ans++;
            }
            for(int j=i+i;j<n;j=j+i){
                isPrime[j]= false;
            }
        }
        return ans;
        /*int count=0;
        for(int i=2;i<n;i++){
            bool IsPrimes = isPrimenum(i);
            if(IsPrimes){
                count++;
            }
        }
        return count;*/
    }
};