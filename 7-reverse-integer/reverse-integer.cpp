class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) return 0;
        int c = 0 ;
        int s = (x<0?-1:1);
        x=abs(x);
        while(x>0){
            int a = x%10;
               if (c > INT_MAX / 10)
                return 0;
            c = c*10+a;
            x = x/10;

        }
        int r = s*c;

        return(r);
    }
};