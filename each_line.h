#ifndef EACH_LINE_H_INCLUDED
#define EACH_LINE_H_INCLUDED

// each_line.h header file
#include <iostream>
#include <string>
#include <vector>

struct each_line{
	std::string line;
	int word_num;
};

std::istream& read(std::istream&, each_line& perm); //read the initial line
bool alphabetical(const each_line&, const each_line&);

#endif // EACH_LINE_H_INCLUDED
