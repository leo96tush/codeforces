/*

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
InputCopy
ApPLe
OutputCopy
ApPLe

InputCopy
konjac
OutputCopy
Konjac

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1 ;
    cin >> s1 ;

    if(s1[0] >= 97 && s1[0] <= 122) {
        s1[0] = s1[0] - 32 ;
    }

    cout << s1 << endl ;
    
    return 0 ;
}
