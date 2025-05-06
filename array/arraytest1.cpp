#include <array>
#include <iterator>
#include <algorithm> // Sort algorithm
//////////////////////
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;
//const int arrayLength = 10;
#define  arrayLength  10

void display(array<int, arrayLength> a)
{
	array<int, arrayLength>::iterator itr; // iterator, which is used to iterate over the elements of the array.
	/*An iterator is a type that behaves like a pointer, allowing you to traverse the elements of the 
	container (e.g., using ++, --, * for dereferencing).::iterator is a type specific to
	std::array<int, 3>, ensuring type safety when iterating.*/
	for (itr = a.begin(); itr != a.end(); itr++)
		cout << *itr << ' ';
	cout << endl;
}

template <class T>
void print(T &x)
{
	for (const auto& item : x)
		cout << item << "\t";
	cout << '\n';
}

void main()
{
	vector<int> v;
	for (int i = 4;i <= 10;i++)
		v.push_back(i);

	cout << v.end() - v.begin();

	cout << v.back() << endl;
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	vector<int> ::iterator itr;
	itr = v.end();
	

	array<array<int, 3>, 2> a{ {{1,2,3},{4,5,6}} };
	cout << endl << "----------Template---------" << endl;
	array<int, arrayLength> templateTest = { 1,2,3,4,5,6,7,8,9 };
	print(templateTest);
	array<double, arrayLength> templateTest2 = { 1.2,2.7,3.75,4.5,5.6,6.9,7,8,9 };
	print(templateTest2);

	array<char, arrayLength> templateTest3 = { 'a','b','c','d','e','f','g','h','x' };
	print(templateTest3);

	cout << endl << "----------Template end---------" << endl << endl;
	cout << endl << "----------Try Catch---------" << endl;
	array<int, arrayLength> x = { 10,20,40,55,61,43,71,3,0,78 };
	auto xbegin = begin(x);
	cout << *next(xbegin, 1) << endl;
	auto xEnd = end(x);
	//cout << *next(xEnd, 1) << endl;
	cout << *prev(xEnd, 3) << endl;

	x.at(2) = 30; // if 
	try
	{
		x.at(20) = 33;
	}
	catch(...)
	{
		cerr << "***** Error ===> Out of range";
	}
	cout << endl << "----------Try Catch end---------" << endl;

	cout << x.size() << endl;
	cout << x.front() << endl;
	cout << x.back() << endl;
	display(x);
	array<int, arrayLength> ::reverse_iterator itr2;
	for (itr2 = x.rbegin(); itr2 != x.rend();itr2++)
		cout << *itr2 << ' ';
	cout << endl << "----------Sort---------" << endl;
	sort(x.begin(), x.end());
	display(x);

	array<int, arrayLength> x2 = { 14,13,77,66,88,44,22,11,0,43 };
	for (auto& item : x2)
		cout << item << " ";
	cout << endl;
	sort(x2.begin() + 2, x2.end()-2 );
	display(x2);

	/*const char* s = "   ali  AB";
	array<char, arrayLength > a;
	memcpy(a.data(), s, arrayLength);
	cout << a.data();*/

	_getch();
}
