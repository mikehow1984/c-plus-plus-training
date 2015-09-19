# c-plus-plus-training
This is a solution for Problem 5.1 in the book "Accelerated C++"

https://en.wikipedia.org/wiki/Key_Word_in_Context

The program has you input a line and then outputs all different permutations of the line in a KWIC format with an indentation
before the key word. My algorithm takes the string and cuts up each word into substrings. Each word is then stored into its 
own struct which includes its position in the sentence. The sentence is then rotated for each word and each permutation of the
sentence is pushed into a vector of strings:

"The big red dog likes pie"
"big red dog likes pie The"
"red dog likes pie The big"
"dog likes pie The big red"
"likes pie The big red dog"
"pie The big red dog likes"

The vector is then alphabetized:

"big red dog likes pie The"
"dog likes pie The big red"
"likes pie The big red dog"
"pie The big red dog likes"
"red dog likes pie The big"
"The big red dog likes pie"

and based on the number in the struct of each word the sentences are de-rotated and formatted using string manipulation:

                      The       big red dog likes pie
              The big red       dog likes pie
          The big red dog       likes pie
    The big red dog likes       pie
                T  he big       red dog likes pie
                                The big red dog likes pie

The above is the end result. The left side is in alphabetical order. 
