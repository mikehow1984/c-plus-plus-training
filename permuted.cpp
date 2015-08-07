#include <iostream>
#include <cctype>
#include <vector>
#include <string>

using namespace std;

vector<string> rotator(const string& s)
{
    vector<string> word;
    typedef string::size_type str_sz;
    str_sz i = 0;
    str_sz j = 0;
    int word_count  = 0;
    //------word count loop-----------------------------
    while (i != s.size())
    {
        while (i != s.size() && isspace(s[i]))
        {
            ++i;
        }

     // find end of next word
        j = i;

     // invariant: none of the characters in range [original j, current j)is a space
     while (j != s.size() && !isspace(s[j]))
	     {
	         j++;
	     }
	     i = j;
	     ++word_count;
         // if we found some nonwhitespace characters
        }
    string sp = s;
    sp += " ";
    word.push_back(sp + '\n');
    //-----------------------------------------------------
    //-----------------rotator loop----------
    for (int k = 0; k < word_count-1; ++k)
    {
        i = 0;
        j = 0;

        while (!isspace(sp[j]))
        {
            ++j;
        }
        word.push_back(sp.substr (j+1, sp.size()) + sp.substr (i, j) + " " + '\n');
        sp = sp.substr (j+1, sp.size()) + sp.substr (i, j) + " ";
    }
    //------------------------------------------
    return word;
}


int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    while(getline(cin, sentence))
    {
        vector<string> v = rotator(sentence);
            for(vector<string>::size_type i = 0; i != v.size(); ++i)
            {
                cout << v[i];
            }
    }
    return 0;
}
