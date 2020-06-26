/*
Replace Character Recursively
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Do this recursively.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd
*/

#include<bits/stdc++.h>

#include<string.h>
using namespace std;


void replaceCharacter(char str[], char c, char d) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
	if(str[0]=='\0')
    {
        return;
    }
    if(str[0]!=c)
    {
        return replaceCharacter(str+1,c,d);
    }
    else if(str[0]==c)
    {
        str[0]=d;
        return replaceCharacter(str+1,c,d);
    }
}
/*
void removeX(char s[]) {
	if (s[0] == '\0') {
		return;
	}

	if (s[0] != 'x') {
		removeX(s + 1);
	} else {
		int i = 1;
		for (; s[i] != '\0'; i++) {
			s[i - 1] = s[i];
		}
		s[i - 1] = s[i];
		removeX(s);
	}
}
*/
 

/*
int main()
{
    string str;
    int i;
    cin>>str;
    char c,d;
    cin>>c>>d;
    cout<<str;
}*/