//���� ����������� ������������������ �������� 
//������������� �������� �� �������� � [a, b, c].
//����������� ��������� �������� ������������������ �� �������� 
//� ��������� ���-�� ����� aaa, bbb, ccc, ������ ������ ������� ��������.
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main (){
	int i,ka,kb,kc;
	unsigned int n;
	ka=0,kb=0,kc=0;
	setlocale (LC_ALL,"Russian");
	char *mas = new char[n];
	n=4000000000;
	for (i=0; i<n;i++){
		mas[i]=char('a' + rand() % ('d' - 'a'));
		cout<<mas[i]<<" ";
		if(kbhit()){
			n=i;
			break;
		}
	
	}
	for(i=0; i<n;i++){
		if( mas[i]=='a'&&mas[i+1]=='a'&&mas[i+2]=='a'){	
			ka++;	
		}
		else if( mas[i]=='b'&&mas[i+1]=='b'&&mas[i+2]=='b'){
			kb++;
		}
		else if( mas[i]=='c'&&mas[i+1]=='c'&&mas[i+2]=='c'){
			kc++;
		}
	}
	cout<<endl;
	cout<<"���-�� ����� ����� a: "<<ka<<endl;
	cout<<"���-�� ����� ����� b: "<<kb<<endl;
	cout<<"���-�� ����� ����� c: "<<kc<<endl;
}
