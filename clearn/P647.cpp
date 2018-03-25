#include <iostream>
using namespace std;
const int size=10;
template<class T>
class num
{
	public:
		num(int Tsize=size);
		num(const num&r);
		~num(){delete []pt;}
		num&operator=(const num&);
		T&operator[](int offset){return pt[offset];}
		const T&operator[] (int offset) const
		{
			return pt[offset];
		}
		int GetSize() const {return numsize;}
		friend ostream & operator << (ostream &out, const num<T> &tt)
		{
			out<<"use << function...\n";
			for (int i=0;i<tt.GetSize();i++)
			{
				out<<"["<<tt[i]<<"]"<<endl;
			}
			return out;
		}
	private:
		int numsize;
		T*pt;
};
template<class T>
num<T>::num(int size):numsize(size)
{
	pt=new T[size];
	for (int i=0;i<size;i++)
	{
		pt[i]=0;
	}
}
template<class T>
num<T>&num<T>::operator=(const num&r)
{
	if(this==&r)
	{
		return *this;
		delete[]pt;
		numsize=r.GetSize();
		pt=new T[numsize];
		for (int i=0;i<numsize;i++)
		{
			pt[i]=r[i];
		}
	}
	return *this;
}
int main()
{
	num<int>one;
	num<double>two;
	for (int i=0;i<one.GetSize();i++)
	{
		one[i]=i*2;
		two[i]=i*3;
	}
	cout<<one;
	cout<<two;
	return 0;
}
					
