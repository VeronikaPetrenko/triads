//���� ����������� ������������������
//������� � ���������� �������� �� �������� � [a, b, c].
// ��������� ���-�� ����� aaa, bbb, ccc, ������ ������ ������� ��������.
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>
using namespace std;

int main (){
	int i,ka,kb,kc,n;
	ka=0,kb=0,kc=0;
	setlocale (LC_ALL,"Russian");
	string *mas = new string[2000000];
	n=0;
	cout<<"���� ������� ��������� ������ end."<<endl;					// ������������ ������ ������, �� ��� ��� ���� �� �������� 
	for ( int i = 1; i <2000000 ; i++) {			        			//��� ������ end, ����� ������ ������� ���������� �� n ������ ����������� 
    	cout << "������� �������� ��� " << i << " �������� ������� : "; //��������.
    	cin >> mas[i];				                														
    	if(mas[i]=="end"){
    	n=i;
		break;}
	}
	if( mas[i]!="b"&&mas[i]!="b"&&mas[i]!="c"&&mas[i]!="end"){			//�������, ���� �� ����, ����� ���������� ������������������ ������ �� a,b,c
		cout<<"������!!! "<<endl;
		system("pause");
		return 0;
	}
	for(i=0; i<n;i++){
		if( mas[i]=="a"&&mas[i+1]=="a"&&mas[i+2]=="a"){	
			ka++;	
		}
		else if( mas[i]=="b"&&mas[i+1]=="b"&&mas[i+2]=="b"){
			kb++;
		}
		else if( mas[i]=="c"&&mas[i+1]=="c"&&mas[i+2]=="c"){
			kc++;
		}
	}
	cout<<endl;
	cout<<"���-�� ����� ����� a: "<<ka<<endl;
	cout<<"���-�� ����� ����� b: "<<kb<<endl;
	cout<<"���-�� ����� ����� c: "<<kc<<endl;
}
