#ifndef HELPER_H_INCLUDED
#define HELPER_H_INCLUDED

using namespace std;

/*
 *  AUXILARY HEADER
 *  _______________
 *
 *  Library for assistant functions and basicfile operations.
 *
 */

string openfile(const std::string &file_name)
{
	if (file_name.empty())
 	{
		return "<EMTPTY_FILE1>";
	}

	std::ifstream local_file(file_name);
	std::string curr_word;
	std::string local_file_data = "";

	// read first element of file into curr_line
	local_file >> curr_word;
	
	while(local_file.good())
	{
		local_file_data = curr_word + " ";
		local_file >> curr_word;
	}

	cout << local_file_data << endl;
	return local_file_data;
	
}

#endif // HELPER_H_INCLUDED
