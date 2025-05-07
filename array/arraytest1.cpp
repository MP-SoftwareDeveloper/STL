
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

// data
void main()
{
	vector<int> v{ 1,2,3,4,5,6,7,8 };
	//v.erase(v.end()-1);
	v.erase(v.begin()+1, v.end()-2);
	for (int i = 0; i<v.size(); i++)
		cout << v[i] << endl;
}

/*
// data
void main()
{
	vector <int> v(6);
	vector <int> v2{ 6 };

	int* p;
	p = v.data();

	*p = 1;
	p[3] = 9;

	++p;
	*p = 8;

	for (int i = 0; i < v.size(); i++)
		cout << v.at(i) << " ";

	cout << endl;

	for (int i = 0; i < v2.size(); i++)
		cout << v2.at(i) << " ";
}
*/

/*
// reserve, capacity
void main()
{
	vector<int> v; //C++ Standard Library’s std::vector class template.it is a dynamic array that can grow or shrink in size, defined in the <vector> header.
	vector<int>:: size_type k;// size_type is a nested type (or typedef) defined inside the std::vector class.
	//It represents an unsigned integer type used for indexing and counting elements in a vector.
	//size_type is guaranteed to be large enough to represent any valid index or size of the vector.
	//It’s accessed using the scope resolution operator :: because it’s a member of the vector<int> class.
	//This specifies the size_type for a vector of int elements.Using vector<int>::size_type ensures portability
	// and type safety, as it matches the vector’s implementation-specific requirements for sizes and indices.
	//Why Use size_type Instead of int or unsigned int?
	//Portability: The size of a vector or its indices might exceed the range of int or unsigned int on some platforms.size_type is guaranteed to be appropriate.
	//Compatibility : vector::size() returns a size_type, so using size_type for variables avoids type mismatches or warnings(e.g., comparing int with size_t).
	//Standard Practice : It’s idiomatic in C++ to use size_type when working with std::vector for consistency and correctness.
	k = v.capacity(); //k=0

	for (int i=1; i<=5 ; i++)
	{
		v.push_back(i);
		if (k != v.capacity())
		{
			k = v.capacity();
			cout << k << endl;
		}
	}


}
*/
//resize() //////////////////////////////////////////////////////

/*
void main()
{
	vector <int> v;
	for (int i=0; i<7; i++)
		v.push_back(i);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "  ";

	cout << endl;

	v.resize(4);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "  ";

	cout << endl;
	v.resize(9);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "  ";

	cout << endl;
	v.resize(20,7);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "  ";
}
*/

//push_back() //////////////////////////////////////////////////////
/*
void main()
{
	vector<int> v;
	int s(0); // s variable with initial value 0

	v.push_back(7);
	v.push_back(3);
	v.push_back(5);

	//cout << v.front() << endl;
	//cout << v.back() << endl;

	while (!v.empty())
	{
		s += v.back();
		v.pop_back();
	}

	cout <<"Sum: "<< s;
}
*/

////////////////////////////////////////////////////////
/*
void main()
{
	vector<int> v;
	int a;

	do {
		cin >> a;
		v.push_back(a);
	} while (a);

	for (int i=0; i<v.size();i++)
	{
		cout << v[i] << " ";
	}
}
*/