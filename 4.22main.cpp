#include<iostream>
#include<vector >
#include<ctime>
#include<cstdlib>
//line.begin()�ǿ��޸�ָ�룬��line.cbegin()�ǲ����޸ĵ�constָ��
using namespace std;

int main()
{
	vector<int> line;
	int i;
	srand((unsigned) time (0));
	const int size=100;
	for (i=0;i<size;++i)
	{
		line.push_back(rand() %100);
	}
	for(vector<int>::size_type k=0;k!=size;k++)
	{
		cout<< line[k]<<"\t";
			if((k+1)%8==0)
			cout<<endl;		
	}
	cout<<endl;
	cout<< "�����Ŵ�һ��"<<endl;
	/*for(i=0;i!=size;++i)*/
	for(vector<int> ::iterator  i=line.begin();i!=line.end();i++)
	{
		/*if(line[i]%2)
		{
			line[i]=2*line[i];
		}*/
		//line[i]=(line[i]%2!=0)?line[i]*2:line[i];//�������ʽ
		*i=(*i%2==0)?*i:*i*2;
	}
	for(auto j=0;j!=line.size();j++)
	{
		cout<< line[j]<<"\t";
		if((j+1)%8==0)
			{
				cout<<endl;
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}