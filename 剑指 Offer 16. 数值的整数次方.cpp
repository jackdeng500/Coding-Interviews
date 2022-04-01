class Solution {
public:
    double myPow(double x, int n) {
        return fastPow(x, n);
    }
    //快速幂    // x^(1b1+2b2+4b3+....+2^(m-1)bm)
    double fastPow(double x,int intn){
        if(intn==0) return 1;
        if(!x) return 0;
        long long int n = static_cast<long long int>(intn);
        if(n<0){ //n<0需要取负，x = 1/x  负责n右移最后都等于1
            x=1/x;
            n=-n; //int 最小值-2147483638取负大于最大值  -2^-31  2^31-1
        }
        double sum =1;
        while(n!=0){
            if(n&1){
                sum *= x;
            }
            x*=x;
            n = n>>1;
        }
        return sum;
    }


};