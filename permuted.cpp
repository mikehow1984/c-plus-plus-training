
#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include <algorithm>
#include "each_line.h"

using std::vector;
using namespace std;

int main()
{
    vector<each_line> permuted;
    typedef string::size_type str_sz;
    str_sz i = 0;
    str_sz j = 0;

    cout << "Enter the line you wish to permutate. " << '\n' << "Input: ";

    permuted.push_back(each_line());
    getline(cin, permuted[0].line);

    while (i != permuted[0].line.size()) //word counter
        {
            while (i != permuted[0].line.size() && isspace(permuted[0].line[i]))
            {
                ++i;
            }
            j = i;
            while (j != permuted[0].line.size() && !isspace(permuted[0].line[j]))
            {
                j++;
            }
            i = j;
            ++permuted[0].word_num;
        }

    permuted[0].line += " ";

    int total_words = permuted[0].word_num;

    i = 0;
    j = 0; //getting the left side format for the blanks


    permuted[0].word_num = 0;

    for (int words = 0; words != (total_words-1); ++words) //rotator
    {
        permuted.push_back(each_line());
        permuted[words+1].line = permuted[words].line;
        i = 0;
        j = 0;
        while (!isspace(permuted[words+1].line[j]))
        {
            ++j;
        }

        permuted[words+1].word_num = words + 1;
        permuted[words+1].line = permuted[words+1].line.substr(j+1, permuted[words+1].line.size()) + permuted[words+1].line.substr(i, j);
        permuted[words+1].line += " ";
    }

    sort(permuted.begin(), permuted.end(), alphabetical); //alphabetical order
    str_sz padlen;

    for (int k = 0; k < total_words; k++)
    {
        if (permuted[k].word_num == 0)
        {
            for (int derot_words =0; derot_words <= total_words - 1; derot_words++)
            {
                while (!isspace(permuted[k].line[j]))
                {
                    ++j;
                }
                ++j;
            }
            padlen = permuted[k].line.substr(i,j).size(); //length for the padding
        }
    }
    const str_sz beegin = 0;
    vector<string> FINAL;

    for (int k = 0; k < total_words; k++) //de-rotator and formatter loop
    {

        i = permuted[k].line.size();
        j = permuted[k].line.size();
        if (permuted[k].word_num == 0) //work on these loops
        {
            FINAL.push_back(string(padlen, ' ') + "       " + permuted[k].line);
        }
        else
        {
            for (int derot_words =0; derot_words <= permuted[k].word_num; derot_words++)
            {
                --j;
                while (!isspace(permuted[k].line[j]))
                {
                    --j;
                }
            }
            FINAL.push_back(string (padlen - permuted[k].line.substr(j+1, i).size(), ' ') + permuted[k].line.substr(j+1, i) + "       " + permuted[k].line.substr(beegin, j));
        }
    }
    for (vector<string>::iterator w = FINAL.begin(); w != FINAL.end(); w++)
    {
        cout << *w << '\n';
    }

	cout << '\n' << "Press ENTER to close the program..." << '\n';
	cin.clear();
    cin.sync();
	cin.get();
    return 0;
}



