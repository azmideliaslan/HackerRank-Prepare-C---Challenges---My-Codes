#include <iostream>
#include <stack>
#include <queue>
//A palindrome is a word, phrase, number, or other sequence of characters which reads the same backwards and forwards.
using namespace std;

class Solution {
    //Write your code here
   private:
        stack<char> s;
        queue<char> q;

    public:
        void pushCharacter(char ch)
        {
            s.push(ch);
        }

        void enqueueCharacter(char ch)
        {
            q.push(ch);
        }

        char popCharacter()
        {
            char ch = s.top();
            s.pop();
            return ch;
        }

        char dequeueCharacter()
        {
            char ch = q.front();
            q.pop();
            return ch;
        }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);

  	// create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
/*
racecar
The word, racecar, is a palindrome.

yes
The word, yes, is not a palindrome.
*/
