#include <cstdlib>
#include <iostream>

using namespace std;


class haziq {
private:
	int* ptr;
	int size;

public:
	haziq(int* p = NULL, int s = 0)
{
	size = s;
	ptr = NULL;
	if (s != 0) {
		ptr = new int[s];
		for (int i = 0; i < s; i++)
			ptr[i] = p[i];
	}
}

	
	int& operator[](int index)
{
	if (index >= size) {
		cout << "Array index out of bound, exiting";
		exit(0);
	}
	return ptr[index];
}

	
	void print() const
{
	for (int i = 0; i < size; i++)
		cout << ptr[i] << " ";
	cout << endl;
}
};


int main()
{
	int a[] = { 1, 2, 4, 5 };
	haziq arr1(a, 4);
	arr1[2] = 6;
	arr1.print();
	arr1[8] = 6;
	return 0;
}







