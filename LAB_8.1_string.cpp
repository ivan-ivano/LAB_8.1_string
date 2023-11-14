#include <iostream>
#include <string>
using namespace std;
bool hasPair(const string s)
{
	size_t pos = 0;
	while ((pos = s.find('S', pos)) != -1)
	{
		if (s[pos + 1] == 'Q')
			return true;
		pos++;
	}
	pos = 0;
	while ((pos = s.find('Q', pos)) != -1)
	{
		if (s[pos + 1] == 'S')
			return true;
		pos++;
	}
	return false;
}
string Change(string& s)
{
	size_t pos = 0;

	while ((pos = s.find("SQ", pos)) != -1)
	{
		s.replace(pos, 2, "***");
		pos += 3;
	}

	pos = 0;

	while ((pos = s.find("QS", pos)) != -1)
	{
		s.replace(pos, 2, "***");
		pos += 3;
	}

	return s;
}


int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	if (hasPair(str))
		cout << "Found a pair 'SQ' or 'QS' in the string." << std::endl;

	else
		cout << "No pair 'SQ' or 'QS' found in the string." << std::endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	
	return 0;
}