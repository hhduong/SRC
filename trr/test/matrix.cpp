#include <iostream>
#include <fstream>
using namespace std;
void Reload(int a[][100],int &n)
{
	ifstream fin("data.txt");
	fin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			fin>>a[i][j];
		}
	}
	fin.close();
};

void SaveFile(int a[][100],int n)
{
	ofstream fout("data.txt");
	fout<<n<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			fout<<a[i][j]<<" ";
		}
		
	}
	fout.close(); 
};

int main()
{
	int A[100][100];
	int n=0;
	/*cout<<"Nhap n:"; cin>>n; //nhap du lieu
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}*/
	Reload(A,n);
	cout<<"n = "<<n<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	//SaveFile(A,n); 
	/*for(int i=0;i<n;i++)
	{
		if(A[0][i]==1)
			cout<<"Canh noi 1 - "<<i+1<<": 1"<<endl;
		else
			cout<<"Canh noi 1 - "<<i+1<<": 0"<<endl;
	}*/
	int bac[100];
	int k = 0;
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(A[k][i] == 1)
				bac[k]++;
		}
		cout<<"Bac cua dinh "<<j+1<<": "<<bac[k]<<endl;
		k++;
	}
	int maxx = bac[0];
	int baccaonhat = 0;
	for(int i=1;i<n;i++)
	{
		if(maxx<bac[i])
		{
			maxx = bac[i];	 
			baccaonhat = i+1;
		}
	}
	cout<<"Dinh co bac cao nhat: "<<baccaonhat<<endl;
	
	int D[100], z=0;
	for(int i=0;i<n;i++)
	{
		if(A[0][i]=1)
		{
			D[z++]=i;
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0; j<n;j++)
		{
			int f=0;
			for(int k=0;k<z;k++)
			{
				if(D[k]==i)
				{
					f = 1;
					break;
				}
			}
			if(f==1)
				D[z++] = j;
			else
				continue;
		}
	}
	return 0;
}
