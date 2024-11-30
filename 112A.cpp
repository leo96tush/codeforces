/*

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
InputCopy
aaaa
aaaA
OutputCopy
0
InputCopy
abs
Abz
OutputCopy
-1
InputCopy
abcdefg
AbCdEfF
OutputCopy
1
Note
If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

http://en.wikipedia.org/wiki/Lexicographical_order

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int flag = 0;
    for(int i=0 ; i<s1.size() ; i++) {
        if( s1[i] >= 'A' && s1[i] <= 'Z' ) {
            s1[i] += 32;
        }
        if( s2[i] >= 'A' && s2[i] <= 'Z' ) {
            s2[i] += 32;
        }

        if( s1[i] > s2[i] ){
            flag = 1 ;
            break;
        }
        else if( s1[i] < s2[i] ) {
            flag = -1;
            break;
        }
        
    }

    cout << flag << endl;
    
    return 0 ;
}
