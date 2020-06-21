/*

Extract Unique characters
Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same.
Input format :
String S
Output format :
Output String
Constraints :
0 <= Length of S <= 10^8
Sample Input 1 :
ababacd
Sample Output 1 :
abcd
Sample Input 2 :
abcde
Sample Output 2 :
abcde

*/



#include<vector>
#include<set>
#include<string.h>
#include<iterator>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
char* uniqueChar(char *str){
	set<char> ans;
    string s="";

    for(int i=0;str[i]!='\0';i++){
        if(ans.find(str[i])==ans.end()){
            ans.insert(str[i]);
            s=s+str[i];
        }
        
    }
    char a[s.length()];
    for(int i=0;i<s.length();i++){
        a[i]=s[i];
    }
    a[s.length()]='\0';
    cout<<s<<endl;
    
    return s;
    
}

