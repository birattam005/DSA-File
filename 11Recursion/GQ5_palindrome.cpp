#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s , int start , int end){
    if(start>= end){
        return true;
    }
    return(s[start]== s[end] && isPalindrome(s, start+1, end-1));
}

int main(){

    string s;
    cin>> s;

    int start = 0;
    int end = s.size()-1;
    bool ans;
    ans =  isPalindrome(s, start, end);
    cout<< ans;
    return 0;
}