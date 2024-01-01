#include <bits/stdc++.h>

using namespace std;

class Gigel
{
public:
	void SetValue(int n) { value = n; }
	void PrintValue() { cout << "PrintValue: " << value << endl; }
private:
	int value;
};

template<typename T>
void func(T t)
{
	t.PrintValue();
}

template<>
void func(int i)
{
	cout << "i: " << i << endl;
}

int main()
{
	Gigel g;
	g.SetValue(9);
	func(g);

	int i = 8;
	func(i);
	return 0;
}