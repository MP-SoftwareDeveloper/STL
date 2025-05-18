
#include <iostream>
#include <iterator>
#include <forward_list>
using namespace std;

template<class c>
c f(const c& z)
{
	c t;
	t = z;

	for (auto& item : t)
		item++;

	return t;
}

int main()
{
	forward_list<int> x{ 10,23,37 };
	forward_list<int> y;

	y = f(x);

	for (int& item : x)
		cout << item << ' ';
	cout << endl;

	for (int& item : y)
		cout << item << ' ';

	return 0;
}

/*
//List remove_if()
bool f(const int& value)
{
	return (value>10);
}

int main()
{
	forward_list<int> x{ 2,44,152,7,82,9 };

	

	forward_list<int> ::iterator it;
	for (it = x.begin();it != x.end(); ++it)
		cout << *it << ' ';

	cout << endl;
    x.remove_if(f);
	for (it = x.begin();it != x.end(); ++it)
		cout << *it << ' ';

	return 0;
}
*/

/*
//erase_after, front
void main()
{
	forward_list<int> x;
	x.assign({ 3,6,1,8,2 });

	forward_list<int> ::iterator itr, p;

	cout << x.front();
	cout << endl;

	for (itr = x.begin(); itr != x.end(); itr++)
		cout << *itr << "  ";

	cout << endl;
	x.sort();
	x.push_front(37);
	for (itr = x.begin(); itr != x.end(); itr++)
	{
		cout << *itr << "  ";
		if (*itr == 3)
			p = itr;
	}
	cout << endl;
	x.erase_after(p, x.end());
	for (itr = x.begin(); itr != x.end(); itr++)
		cout << *itr << "  ";
}
*/

/*

//   deque example
void main()
{
	deque<int> deq;
	deque<int> ::iterator it;
	int k, a;

	while (1)
	{
		cout << "\n*****************************************\n" << endl;

		cout << "1.Insert at the End." << endl;
		cout << "2.Insert at the front." << endl;
		cout << "3.Delete of End." << endl;
		cout << "4.Delete of front." << endl;
		cout << "5.Front" << endl;
		cout << "6.Last" << endl;
		cout << "7.Size" << endl;
		cout << "8.Display" << endl;
		cout << "9.Exit" << endl;

		cout << "Enter your Choice: ";
		cin >> k;
		system("cls");

		switch (k)
		{
		case 1:
			cout << "Enter a value: ";
			cin >> a;
			deq.push_back(a);
			break;
		case 2:
			cout << "Enter a value: ";
			cin >> a;
			deq.push_front(a);
			break;
		case 3:
			a = deq.back();
			deq.pop_back();
			break;
		case 4:
			a = deq.front();
			deq.pop_front();
			break;
		case 5:
			cout << "Front: ";
			cout << deq.front() << endl;
			break;
		case 6:
			cout << "Back: ";
			cout << deq.back() << endl;
			break;
		case 7:
			cout << "Size: " << deq.size() << endl;
			break;
		case 8:
			cout << "Elements of Deque: ";
			for (it = deq.begin(); it != deq.end(); it++)
				cout << *it << "  ";
			cout << endl;
			break;
		case 9:
			exit(1);
			break;
		default:
			cout << "Please enter a valid value!!!";
			break;

		}
	}



}
*/
/*
//   deque
void main()
{
	deque <int> d1;
	d1.assign(10,7);

	for (int i = 0; i < d1.size(); i++)
		cout << d1.at(i) << "   "; // cout << d[i] << "  ";

	deque <int> d2{ 1,2,3,4 };
	d2.push_back(5);
	d2.push_front(0);

	cout << endl;

	deque <int> ::iterator itr;

	for (itr = d2.begin(); itr != d2.end(); itr++)
		cout << *itr << "  ";

	cout << endl;

	d1.insert(d1.begin(), d2.begin(), d2.end());
	for (itr = d1.begin(); itr != d1.end(); itr++)
		cout << *itr << "  ";

	cout << endl;

	d1.resize(4);
	for (int i = 0; i < d1.size(); i++)
		cout << d1[i] << "  ";

	cout << endl;

	d1.resize(10,3);
	for (int i = 0; i < d1.size(); i++)
		cout << d1[i] << "  ";

	cout << endl;

	d1.pop_front();
	d1.pop_front();
	for (int i = 0; i < d1.size(); i++)
		cout << d1[i] << "  ";

	cout << endl;

	deque <string> d3;
	d3.assign(4, string("Arash"));
	deque<string> ::iterator itrs;
	for (itrs = d3.begin(); itrs != d3.end(); itrs++)
		cout << *itrs << "  ";

	cout << endl;

	d3.push_front("Sara");
	for (itrs = d3.begin(); itrs != d3.end(); itrs++)
		cout << *itrs << "  ";

	cout << endl;

	for (int i = 0; i < d3.size(); i++)
		d3[i] = "Hello " + d3[i];

	for (itrs = d3.begin(); itrs != d3.end(); itrs++)
		cout << *itrs << "  ";

	cout << endl;
}
*/
/*
// Full example
void main()
{
	vector<int> ss;
	vector<int> ::iterator it;
	int choice, item;

	while (1)
	{
		cout << "\n------------------------"<< endl;
		cout << "1.Insert " << endl;
		cout << "2.Delete " << endl;
		cout << "3.Size " << endl;
		cout << "4.Display " << endl;
		cout << "5.Clear " << endl;
		cout << "6.Exit " << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
			cout << "Enter Value: ";
			cin >> item;
			ss.push_back(item);
			break;
		case 2:
			cout << "Delete Last Element";
			ss.pop_back();
			break;
		case 3:
			cout << "Size: ";
			cout << ss.size() << endl;
			break;
		case 4:
			cout << "Displaying: ";
			for (it = ss.begin(); it != ss.end(); it++)
			{
				cout << *it << " ";
			}
			cout << endl;
			break;
		case 5:
			ss.clear();
			cout << "Vector is cleared" << endl;
			break;
		case 6:
			exit(1);
			break;

		default:
			cout << "Wrong Choice" << endl;
			break;
		}
	}
}
*/
/*
// compare
void main()
{
	vector <int> v1;
	vector <int> v2;


	v1.push_back(2);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);

	v2.assign(5, 65);

	if (v1 == v2)
		cout << "V1 and V2 are equal."<< endl;
	else
		cout << "V1 and V2 are not equal." << endl;

	v1 = v2;

	if (v1 == v2)
		cout << "V1 and V2 are equal." << endl;
	else
		cout << "V1 and V2 are not equal." << endl;


}
*/
/*
// reserve , resize
void main()
{
	std::vector<int> v;
	v.reserve(3);
	v.push_back(8);

	v.resize(5);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.push_back(9);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.reserve(1); // do nothing, as capacity() >1

	v.resize(3); //8,0,0
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(6,1); //8,0,0,1,1,1
	cout << v.size() << endl;
	cout << v.capacity() << endl;
}
*/
/*
// reserve , swap
void main()
{
	vector<string> v;
	v.reserve(5);
	v.push_back("Hello,");
	v.insert(v.end(), { "how", "are" , "you" , "?" });
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "+++";
	cout << endl;

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	swap(v[1], v[3]);

	v.back() = "!";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "****";
	cout << endl;

	v.pop_back();

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "   ";
	cout << endl;

	cout << v.size() << endl;
	cout << v.capacity() << endl;
}
*/
/*
// 2 dimention vector
void main()
{
	vector <vector<char> > x;

	vector<char> v1{ 'a','r','a','s'};
	vector<char> v2{ 's','a','r','a' };

	x.push_back(v1);
	x.push_back(v2);

	vector<vector<char> > ::size_type i; // ::size_type: This is a type alias provided by the vector class that
	//represents an unsigned integral type suitable for indexing and size operations.
	vector <char> ::iterator p; // ::iterator: p is used to access each character of vectors like 'r' in 'aras'	This is a type provided by the vector<char>
	//class.It's used to define an iterator that can traverse or modify the vector's elements.
	//Think of it like a pointer that can move through the elements of the vector.
	for ( i =0; i<x.size(); i++)
	{
		p = x[i].begin();
		while (p != x[i].end())
			cout << *p++ << " ";
		cout << endl;
	}
}

*/
/* iterator
void main()
{
	vector<int> v;

	istream_iterator <int> a(cin);

	v.push_back(*a); // Reads first int from cin
	a++;
	v.push_back(*a);// Reads second int
	a++;
	v.push_back(*a);// Reads third int
	// vector<int>::iterator iter
	//Declares a variable named iter of type std::vector<int>::iterator.
	vector <int> ::iterator iter = v.begin(); // :: scope resolution operator.
	// enables iterator for the vector object(The line doesn’t enable or activate iterator
	// functionality; it simply creates an iterator object (iter) for the specific vector
	// v to allow you to work with its elements iteratively). it declares and initializes an
	// iterator that can be used to traverse or manipulate the elements of a std::vector<int> object.
	// which is the iterator type for a std::vector<int>.
	//The :: (scope resolution operator) accesses the iterator type defined within the std::vector<int> class.
	while (iter != v.end())
	{
		cout << *iter++ << ' ';
	}
}
*/
/*
template <typename T>
void show(const vector<T> & v)
{
	for (auto i = v.rbegin(); i != v.rend() ; i++)
		cout << *i << ' ';
}
// capacity,insert
void main()
{
	vector <string> v { "arash", "sara", "omid" };
	show(v);
	cout << endl;
	vector <int> w{ 1,2,3,4,5,6};
	show(w);
}
*/
/*
// template, vector
void main()
{
	vector <int> v(20);

	cout << "size:" << v.size() << '\n';
	cout << "capacity: " << v.capacity() << '\n';

	cout << endl << "..................resize............"<< endl;
	v.resize(4);
	cout << "size:" << v.capacity() << '\n';
	cout << "capacity:" << v.capacity() << '\n';

	cout << endl << "..................shrink_to_fit............"<< endl;
	v.shrink_to_fit();
	cout << "size:" << v.capacity() << '\n';
	cout << "capacity:" << v.capacity() << '\n';
}
*/
/*
class c {
	int x;

public:
	c(int i = 0) : x(i) {} // default value for i is zero if there is no input when defining calss new member
	int f() { return x; }
};
// insert
void main()
{
	c m(3);

	vector <c> v{ 1,2 };
	v.insert(v.end(), m );
	for (auto item : v)
		cout << item.f()<< endl;
}

*/
//erase
/*
void main()
{
	vector<int> v{ 1,2,3,4,5,6,7,8 };
	//v.erase(v.end()-1);
	v.erase(v.begin()+1, v.end()-2);
	for (int i = 0; i<v.size(); i++)
		cout << v[i] << endl;
}
*/
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