/*

Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

Input
The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

Output
Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

Examples
InputCopy
HoUse
OutputCopy
house
InputCopy
ViP
OutputCopy
VIP
InputCopy
maTRIx
OutputCopy
matrix

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; // Input the word

    int upper_count = 0, lower_count = 0;

    // Count uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c)) {
            upper_count++;
        } else {
            lower_count++;
        }
    }

    // Decide whether to convert to uppercase or lowercase
    if (upper_count > lower_count) {
        // Convert to uppercase
        for (char &c : s) {
            c = toupper(c);
        }
    } else {
        // Convert to lowercase
        for (char &c : s) {
            c = tolower(c);
        }
    }

    // Output the result
    cout << s << endl;
    return 0;
}
