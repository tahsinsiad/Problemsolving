#include <iostream>
using namespace std;

int main()
{
	long long N;
	cin>>N;
	if (N<9)
    {
        cout<<"0"<<endl;
    }
	else if (N==9)
		cout <<"8"<< endl;
	else
	{
		cout << 72 ;
		for (int i=10;i<N;i++)
        {
            cout<<"0";
        }

		cout<<endl;
	}
	return 0;
}
