#include <iostream> 
#include <string>
#include <algorithm>

#define VARNAME(VAR) (#VAR)

const char c_space = ' ';
const char c_openPrioBrac = '(';
const char c_closePrioBrac = ')';

const std::string test_start = " 1 + 2 + 3  2 * 6 / 2 -       3 -     4";
const std::string test_spaces = "1+2+32*6/2-3-4";
const std::string test_prio = "(1+(2+((3*6)/2))-3)-4";

std::string getStringFromUser()
{
	std::cout << "Please enter your function:" << std::endl;
	std::string result;
	std::getline(std::cin, result);
	return result;
}

void printFunc(const std::string& str)
{
	std::cout << "'"
              << str
              << "'"
              << std::endl;
}

void test(const std::string& input, const std::string& check, 
          const std::string testName = "", const bool verbose = false)
{
	std::cout << std::endl;
	std::cout << (testName.size() > 0 ? testName + ": " : "");
	if(input == check)
	{
		std::cout << "Passed" << std::endl;
	}
	else
	{
		std::cout << "Error" << std::endl;
	}

	if(verbose)
	{
		std::cout << "\t"
                  << "'" + input + "'"
                  << " == "
                  << "'" + check + "'"
                  << std::endl;
	}
}

void removeSpaces(std::string& str)
{
	str.erase(std::remove(str.begin(), str.end(), c_space), str.end());
}

void setPriorityBrackets(std::string& str)
{ 
	for(auto c = str.begin(); c < str.end(); c++)
	{
		// ! TODO !
	}
}

int main(int argc, char** argv)
{
	//std::string funcStr = getStringFromUser();
	std::string funcStr = test_start;

	removeSpaces(funcStr);
	test(funcStr, test_spaces, VARNAME(test_spaces), true);

	setPriorityBrackets(funcStr);
	test(funcStr, test_prio, VARNAME(test_prio), true);

	return 0;
}