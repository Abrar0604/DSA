// Learning Recursion p1 involves converting a sting containing signed integer into an actual integer using recursion.
#include<iostream>
#include<string.h>
using namespace std;

class solutions{
    public:
    void p1(string s){
        cout<< h1(s,0,0,1,0);
        // cout<<s;
    }
    private:
    int h1(string& s, long long result, int i, int sign, bool started) {
        if (i >= s.size())
            return (int)(result * sign);

        char c = s[i];

        if (!started && c == ' ')
            return h1(s, result, i + 1, sign, started);

        if (!started && (c == '+' || c == '-')) {
            int newSign = (c == '-') ? -1 : 1;
            return h1(s, result, i + 1, newSign, true);
        }

        if (isdigit(c)) {
            long long newResult = result * 10 + (c - '0');

            if (newResult * sign >= INT_MAX) return INT_MAX;
            if (newResult * sign <= INT_MIN) return INT_MIN;

            return h1(s, newResult, i + 1, sign, true);
        }
        if (started) return (int)(result * sign);

        return 0;
    }
};
int main(){
    solutions o;
    o.p1("       -3023423902420421234 abced");
}