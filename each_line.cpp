
#include <iostream>
#include <string>
#include "each_line.h"


using std::string;
using std::istream;
using namespace std;



istream& read(istream& is, each_line& l) //word counting function
{
    is >> l.line;
    return is;
}
        std::string::size_type i = 0;
        std::string::size_type j = 0;



bool alphabetical(const each_line& x, const each_line& y) //puts lines in alphabetical order
{
    return x.line < y.line;
}

//-----------------rotator loop----------

//must figure out how to make this its own function for the struct "each_line"
/*string ()

        while (!isspace(l[j]))
        {
            ++j;
        }
        l.push_back(l.substr (j+1, sp.size()) + l.substr (i, j) + " " + '\n');
        sp = l.substr (j+1, l.size()) + l.substr (i, j) + " ";
    }
}*/
//--------------------------------------------------------

/*-------------------derotator loop (COMING SOON)------------------
All work and no play makes Mike a dull boy
All work and no play makes Mike a dull boy
All work and no play makes Mike a dull boy
All work and no play makes Mike a dull boy
All work and no play makes Mike a dull boy
All work and no play makes Mike a dull boy
------------------------------------------------------------------*/

/*-------------------indenter function (COMING SOON)--------------------
How does it feel to be
One of the beautiful people?
Now that you know who you are.
What do you want to be?
And have you traveled very far?
Far as the eyes can see

How does it feel to be
One of the beautiful people?
How often have you been there?
Often enough to know
What did you see when you were there?
Nothing that doesn't show

Baby you're a rich man
Baby you're a rich man
Baby you're a rich man too
You keep all your money in a big brown bag inside a zoo
What a thing to do
Baby you're a rich man
Baby you're a rich man
Baby you're a rich man too

How does it feel to be
One of the beautiful people?
Tuned to a natural E
Happy to be that way
Now that you've found another key
What are you going to play?

Baby you're a rich man
Baby you're a rich man
Baby you're a rich man too
You keep all your money in a big brown bag inside a zoo
What a thing to do
Baby, baby you're a rich man
Baby you're a rich man
Baby you're a rich man too
Baby you're a rich man
Baby you're a rich man
Baby, baby you're a rich man too (fade out)
----------------------------------------------------------------------*/
