class Solution {
public:
    int totalMoney(int n) {
        int t = n%7;
        int l = n/7;
        int sum = 0;
        cout << t << " " << l << endl;
         for(int i = 0 ; i < l ; i++)
        {
            sum += ((7+i)*(8+i))/2 - ((i)*(i+1))/2;
}
        
        for(int i = 1 ; i <= t ; i++)
        {
            sum += i+l;
            
}
        return sum;
    }
};