#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;

void showcard(int array[],int choose);
void judage(float num1,float num2,int card1,int card2);
float getcard(int array[],int choose);


int main(){		
	int m,n,c,d,e,f,i,card1,card2,pk[52];char choice,decide;float num1,num2;
	
	for(i=0;i<=51;++i) pk[i]=i%10+1;
	
	
	do{
	srand(time(NULL));	

	num1=0;
	num2=0;
	
	m=rand()*52/(RAND_MAX+1);
	num1+=getcard(pk,m);
	showcard(pk,m);
	pk[m] =-1;
	
	n=rand()*52/(RAND_MAX+1);
	while (pk[n]==-1){
		n=rand()*52/(RAND_MAX+1);
	}
	num1+=getcard(pk,n);
	showcard(pk,n);
	pk[n]=-1;           
	
	card1=2; 
	                                
	
	cout<<"do you want more card?"<<endl;
	cin>>choice;
	
	while (choice=='y' ){
		do {
			c=rand()*52/(RAND_MAX+1);
		}while(pk[c]==-1);
		num1+=getcard(pk,c);
		showcard(pk,c);
		pk[c]=-1;
		card1++;
		if (num1>21){
			cout<<"player lose"<<endl;
			choice='n'; 
	}
		else{
			cout<<"do you want more card?"<<endl;
			cin>>choice;
		}
	}
	
	cout<<"computer turn"<<endl;
	
	do{
		d=rand()*52/(RAND_MAX+1);
	}while (pk[d]==-1);
	num2+=getcard(pk,d);
	pk[d]=-1;
	
	do{
		e=rand()*52/(RAND_MAX+1);
	}while (pk[e]==-1);
	num2+=getcard(pk,e);
	pk[e]=-1;                        
	
	card2=2;												
	
	while(num2+0.5<num1){
		do {
			f=rand()*52/(RAND_MAX+1);
		}while(pk[f]==-1);
		num2+=getcard(pk,f);
		pk[f]=-1;
		card2++;                                        
	}
	
	judage(num1,num2,card1,card2);
	
	cout<<"do you want to play again?"<<endl;
	cin>>choice;
	
	
	}while(choice=='y');
	return 0;
} 


float getcard(int array[ ],int choose)
{
		int cardnumber;float cardvalue; 
		cardnumber=array[choose];
		
		if (cardnumber>10){
			cardvalue=0.5;}
		else{
			cardvalue=cardnumber;}
		return cardvalue;
		}
		




void judage(float num1,float num2,int card1,int card2)
	{if (num2>num1){
		cout<<"computer win"<<endl;}
	 if (num1==num2){
	 	if(card1=card2){
	 		cout<<"play even"<<endl;}
	 	if(card1>card2){
	 		cout<<"computer win"<<endl;}
	 	if(card1<card2){
	 		cout<<"player win"<<endl;}}
	
	}






void showcard(int array[ ],int choose)
{		
		int cardcolor,cardnumber;
	    cardcolor=choose%4;
		cardnumber=array[choose];
		
		switch(cardcolor){
        	case 0: cout << "hei tao ";break;
        	case 1: cout << "hong tao ";break;
        	case 2: cout << "cao hua ";break;
        	case 3: cout << "fang kuai ";}        
		
		switch(cardnumber){
			case 1:cout<<"A"<<endl;break;
			case 2:cout<<"2"<<endl;break;
			case 3:cout<<"3"<<endl;break;
			case 4:cout<<"4"<<endl;break;
			case 5:cout<<"5"<<endl;break;
			case 6:cout<<"6"<<endl;break;
			case 7:cout<<"7"<<endl;break;
			case 8:cout<<"8"<<endl;break;
			case 9:cout<<"9"<<endl;break;
			case 10:cout<<"10"<<endl;break;
			case 11:cout<<"J"<<endl;break;
			case 12:cout<<"Q"<<endl;break;
			case 13:cout<<"K"<<endl;       
} 
}









































