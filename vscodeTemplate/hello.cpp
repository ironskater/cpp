#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	cout << "hello world" << endl;
	cout << *argv << endl; // print exe's name
	cout << *(argv + 1) << endl; // print 1st arg

	return 0;
}