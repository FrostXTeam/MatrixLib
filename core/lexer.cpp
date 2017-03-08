#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

// remote headers

#include "../aux/Helper.h"

using namespace std;

int main(int argc, char *argv[])
{

	try
	{
		
		std::string *input_file = new std::string(argv[1]);
		openfile((*input_file));
		// solve issue: unable to read everything in a file preceding whitspace
		
	} catch (...)
  {
		
		std::cout << "Can't compile without source code files!" << std::endl;
		
	}
	
	return 0;
	
}
