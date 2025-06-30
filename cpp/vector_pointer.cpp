#include<bits/stdc++.h>
#define ll long long int
#define b begin()
#define e end()
using namespace std;
int main()
{
	ll n=683756776598756;
	cout<<n<<endl;
	vector<int>v={3,6,2,928,56,348,184,88};
	for(auto it=v.b;it<v.e;it++) //also works with it!=v.end();
	{
		cout<<*it<<" ";
	}
    cout<<endl<<*(v.begin()+3)<<endl; //prints the value of index 3
    cout<<endl<<*(v.end()-1)<<endl; 

    //*v.begin()+3 outputs 6 (3+3)
    
	return 0;
}