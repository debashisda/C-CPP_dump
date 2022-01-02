#include<iostream>
using namespace std;

string lexi(string s, int n)
{
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]!='g');
    }
}
int main()
{
    int x;
int *a;
a = &x;
*a =5;
cout<< *a;
}

/*
Ninja loves to spend time with nature, and he’s been participating in the “Ninjas Scouts” for 3 years
in a row. His team completes all the given tasks with perfection, and this year too, they are planning
to win. But not everyone in the camp is a fan of their team. Nathan and his team have decided to win
this time at any cost. They come up with the plan of changing Ninja’s registration number, X, to disqualify
him as he is the most valuable player on his team. They develop a function G that maps every digit from 1 to 9
to some digit 1 to 9, which may be the same. They change all the digits of a non-empty contiguous subsegment
according to the function. if Y is the digit then they change it to G(Y). For example, if X = 2345 and G(3)=5, G(4)=8, G(5)=7,
they can choose the segment consisting of the last 3 digits, and get the result 2587. Can you help Nathan
and his team choose the maximum possible number by applying this operation no more than once?

Input Format:
The first line contains an integer N, containing the number of digits on Ninja’s registration id, X.
The second line consists of a string of N characters, denoting X.
The third line contains exactly 9 integers, G(1), G(2), G(3)...G(9). (1<=G(i)<=9)

Output Format:
Print the maximum number that can be formed by applying this operation no more than once.

Constraints:
1<= n <=2*10^5
1<= F(i) <=9 (1 <= i <= 9)
Sample Input:
4
1733
1 2 5 4 6 6 3 1 9
Sample Output:
1755
*/
