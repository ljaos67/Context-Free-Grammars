/*


*/
#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;

struct production
{
	string nme;
	vector<string> aSandlr;
};

vector<production> retProd(vector<string> a)
{
	string parse;
	string prods;
	production tprod;
	vector<string> res;
	vector<production> peebo;
	for(unsigned long int i = 0; i < a.size(); i++)
	{
		for(unsigned long int g = 0; g < a[i].length(); g++)
		{
			if(g == 0)
			{
				parse = a[i][g];
			}
			else if(g == 1)
			{
				//skip
			}
			else if(a[i][g] == ' ')
			{
				res.push_back(prods);
				prods = "";
			}
			else
			{
				prods += a[i][g];
			}
		}
			tprod.nme = parse;
			tprod.aSandlr = res;
			peebo.push_back(tprod);
			res.clear();
	}
	return peebo;
}
void print(vector<production> a)
{
	cout << a.size() << endl;
	for(unsigned long int i = 0; i < a.size(); i++)
	{
		cout << a[i].nme;
		for(unsigned long int j = 0; j < a[i].aSandlr.size(); j++)
		{
			cout << a[i].aSandlr[j] << endl;
		}
	}
}
int main()
{
	string n;
	string w;
	vector<string> prods;
	vector<string> words;
	vector<production> foo;
	string inp;
	getline(cin,n);
	for(int i = 0; i < stoi(n); i++)
	{
		getline(cin,inp);
		prods.push_back(inp);
	}
	getline(cin,w);
	for(int i = 0; i < stoi(w); i++)
	{
		getline(cin,inp);
		words.push_back(inp);
	}
	foo = retProd(prods);
	print(foo);
	return 0;
}