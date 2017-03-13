#include <iostream>
#include <fstream>
#include <sstream>
#include <streambuf>
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
		std::string *frostx_syntax = new std::string();
		*frostx_syntax = openfile<std::string>((*input_file));
		
		std::cout << (*frostx_syntax);
		
	} catch (...)
  {
		
		std::cout << "Can't compile without source code files!" << std::endl;
		
	}
	
	return 0;
	
}
