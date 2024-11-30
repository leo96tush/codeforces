/*
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

Input
The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

Output
Output the number of participants who advance to the next round.

Examples
InputCopy
8 5
10 9 8 7 7 7 5 5
OutputCopy
6
InputCopy
4 2
0 0 0 0
OutputCopy
0
Note
In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.

In the second example nobody got a positive score.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k ;
    cin >> n >> k ;

    vector<int> input(n, 0) ;

    for (int i=0 ; i<n ; i++ ){
        cin >> input[i] ;
    }

    sort(input.begin(), input.end()) ;
    reverse(input.begin(), input.end()) ;

    int count = 0 ;

    for(int i=0 ; i<n ; i++){
        if (input[i] >= input[k-1] && input[i] > 0){
            count++ ;
        }
    }

    cout << count << endl ;
    
    return 0 ;
}