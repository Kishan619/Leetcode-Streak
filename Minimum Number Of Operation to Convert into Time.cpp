class Solution {
public:
    int convertTime(string s1, string s2) {
        int h1 = stoi(s1.substr(0,2));
        int m1 = stoi(s1.substr(3,2));
        int h2 = stoi(s2.substr(0,2));
        int m2 = stoi(s2.substr(3,2));
        int hrDiff = h2 - h1;
        if(hrDiff < 0) hrDiff += 24;
        int minDiff = m2 - m1;
        int total = hrDiff*60 + minDiff;
        int ans = 0;

        if(total >= 60){
            ans += (total/60);
            total = total%60;
        }
        if(total >= 15){
            ans += (total/15);
            total = total%15;
        }
        if(total >= 5){
            ans += (total / 5);
            total = total%5;
        }
        ans += total;
        return ans;
        
    }
};
