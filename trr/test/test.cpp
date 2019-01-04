#include <iostream>
using namespace std;
#include "dothi.h"
#include "list.h"

int main()
{
	DoThi d("fothi1.txt");
	//d.Print();
	//for(int v=1;v<=d.GetSoDinh();v++)
	//	cout<<v<<":"<<d.Bac(v)<<endl;
	/*for(int i=1;i<=d.GetSoDinh();i++)
	{
		cout<<i<<":"<<d.KeVoi(i)<<" ";	
		cout<<endl;
	}*/
		
	
	
	
	/*List<int> l;
	l.Add(5);
	l.Add(10);
	l.Add(15);
	cout<<l;*/
	
	/*List<int> k = d.KeVoi(2);
	cout<<k;*/
	cout<<d.LaLienThong()<<endl;
	//cout<<d.DuongDi(3, 5);
	//cout<<d.DFS(1);
	//cout<<d.BFS(2);*/
	return 0;
}
