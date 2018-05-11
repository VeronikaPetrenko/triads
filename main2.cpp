//Дана бесконечная последовательность
//введёная с клавиатуры символов из алфавита А [a, b, c].
// Посчитать кол-во триад aaa, bbb, ccc, каждые триады считать отдельно.
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
	cout<<"Ввод массива закончите словом end."<<endl;			// Пользователь вводит массив, до тех пор пока не закончит 
	for ( int i = 1; i <2000000 ; i++) {			        	//его словом end, после размер массива изменяется на n равный колличеству 
    	cout << "Введите значение для " << i << " элемента массива : "; 	//итераций.
    	cin >> mas[i];				                														
    	if(mas[i]=="end"){
    	n=i;
		break;}
	}
	if( mas[i]!="b"&&mas[i]!="b"&&mas[i]!="c"&&mas[i]!="end"){		//условие, если мы хотим, чтобы набиралась последовательность только из a,b,c
		cout<<"ОШИБКА!!! "<<endl;
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
	cout<<"Кол-во триад буквы a: "<<ka<<endl;
	cout<<"Кол-во триад буквы b: "<<kb<<endl;
	cout<<"Кол-во триад буквы c: "<<kc<<endl;
}
