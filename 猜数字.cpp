//�ļ�����������.cpp
//����һ����������Ϸ


#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

int main(){	
	int num1, num2, num3, value, snum1, snum2, snum3, a, b, i;
	char jud;
	
	cout << "��Ҫ����Ϸ��Y/N��?"<<endl;
	cin >> jud;
	
	if (jud=='Y') {
		
		srand(time(NULL));
	
		num1 = rand()*10/(RAND_MAX + 1);
		num2 = rand()*10/(RAND_MAX + 1);
		while(num2==num1){
			num2 = rand()*10/(RAND_MAX + 1);
		}
		num3 = rand()*10/(RAND_MAX + 1);
		while(num3==num2 or num3==num1){
			num3 = rand()*10/(RAND_MAX + 1);	
		}
		for(i=1;i<=7;++i){
		
			a=0;
			b=0;
		
			cout<<"�������һ������"<<endl;
			cin>>snum1;
			cout<<"������ڶ�������"<<endl;
			cin>>snum2;
			cout<<"���������������"<<endl;
			cin>>snum3;
			
		    if(num1==snum1) a=a+1;
		    if(num1==snum2) b=b+1;
		    if(num1==snum3) b=b+1;
	    
			if(num2==snum2) a=a+1;
		    if(num2==snum1) b=b+1;
		    if(num2==snum3) b=b+1;
	    
			if(num3==snum3) a=a+1;
		    if(num3==snum2) b=b+1;
		    if(num3==snum1) b=b+1;
	    
		    cout<<a<<"A"<<b<<"B"<<endl;
		  	}
		if(a==3,b==0) cout<<"��ϲ������Ϸ�ɹ���"<<endl;
		else cout<<"�ǳ��ź�����Ϸʧ�ܡ�"<<endl;
	}

	if(jud=='N') cout<<"��Ϸ����"<<endl;

	return 0;
}
 
