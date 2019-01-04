#ifndef dothi_h
#define dothi_h
#include <fstream>
#include "list.h"
using namespace std;
class DoThi
{
private:
	int N;
	int a[100][100];
public:
	DoThi()
	{
		N = 0;
	};
	DoThi(const char * fileName)
	{
		ifstream fin(fileName);
		fin>>N;
		for(int i=0; i<N; i++)
		{
			for(int j=0;j<N;j++)
			{
				fin>>a[i][j];
			}
		}
		fin.close();
	};
	int GetSoDinh() const
	{
		return N;
	};
	void Print() const
	{
		cout<<"So dinh: "<<N<<endl;
		for(int i=0; i<N;i++)
		{
			for(int j=0;j<N;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
	int Bac(int n) const
	{
		int bac=0;
		for(int i=1;i<=N;i++)
		{
			if(a[i-1][n-1]==1)
				bac++;	
		}	
		return bac;
	};
	List<int> KeVoi(int d) const
	{
		List<int> kq;
		for(int v=1;v<=N;v++)
		{
			if(a[v-1][d-1]==1)
				kq.Add(v);
		}
		return kq;
	}
	void DFS(int i)
	{
		int visit[N];
		//da dau dinh da duyet
		visit[i] = 1;
		// luu dinh i la dinh da duyet qua
		//List<int> listVisit;
		//listVisit.Add(i);
		for(int j=0;j<N;j++)
		{
			if((a[i][j]>0) && (visit[i]!=1))
			{
				//Neu thoa man dieu kien thi goi lai de quy voi dinh j(dinh ke)
				DFS(j);
			}
		}
	}
}; 
#endif
