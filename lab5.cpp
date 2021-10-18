#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int level2(int num1,int num2)
{
	while(num1%num2!=0){
		num2=rand() % 99+1;
	}
	int get=num1/num2;
	return get;
}

double level3(double num1,double num2)
{
	num2=rand() % 99+1;
	double get=num1/num2;
	int get1=get*100;
	double get2=get1/100;
	return get2;
}


int main()
{
	int level,pro_num,cal_ch,score;
	char cal[]="+-*/";
	srand((unsigned int)time(NULL));
	cout<<"Please enter your grade?"<<endl;
	cin>>level;
	cout<<"Please enter the number of questions?"<<endl;
	cin>>pro_num;
	switch(level)
	{
		case 1:
			for(int i=0;i<pro_num;i++)
			{
			int num2,result,answer,num1=rand() % 99+1;
			cal_ch=rand() % 2+0;
			if(cal_ch==0)
			{
				num2=rand() % (100-num1)+1;
				result=num1+num2;
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			else
			{
				num2=rand() % (num1)+1;
				result=num1-num2;
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			}
			cout<<score/pro_num*100;
			
		case 2:
			for(int i=0;i<pro_num;i++)
			{
			int num2,result,answer,num1=rand() % 99+1;
			cal_ch=rand() % 2+0;
			if(cal_ch==0)
			{
				num2=rand() % (100-num1)+1;
				result=num1+num2;
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			else
			{
				num2=rand() % (num1)+1;
				result=num1-num2;
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			}
			cout<<score/pro_num*100;
			
		case 3:
			for(int i=0;i<pro_num;i++)
			{
			int num2,result,answer,num1=rand() % 999+1;
			cal_ch=rand() % 4+0;
			if(cal_ch==0)
			{
				num2=rand() % (999-num1)+1;
				result=num1+num2;
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			else if(cal_ch==1)
			{
				num2=rand() % (num1)+1;
				result=num1-num2;
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			else if(cal_ch==2)
			{
				num1=rand()%99+1;
				num2=rand()%99+1;
				result=num1*num2;
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			else
			{
				num1=rand()%99+1;
				num2=rand()%99+1;
				result=level2(num1,num2);
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			
			
			}
			cout<<score/pro_num*100;
			
		case 4:
			for(int i=0;i<pro_num;i++)
			{
			int num2,result,answer,num1=rand() % 999+1;
			cal_ch=rand() % 4+0;
			if(cal_ch==0)
			{
				num2=rand() % (999-num1)+1;
				result=num1+num2;
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			else if(cal_ch==1)
			{
				num2=rand() % (num1)+1;
				result=num1-num2;
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			else if(cal_ch==2)
			{
				num1=rand()%99+1;
				num2=rand()%99+1;
				result=num1*num2;
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			else
			{
				num1=rand()%99+1;
				num2=rand()%99+1;
				result=level2(num1,num2);
				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
				cin>>answer;
				if(answer==result)
				{
					score++;
				}
			}
			
			}
			cout<<score/pro_num*100;
			
//		case 5:
//			for(int i=0;i<pro_num;i++)
//			{
//			double result,answer;
//			int num1=rand() % 999+1,num2;
//			double n1=num1+rand(); 
//			cal_ch=rand() % 4+0;
//			if(cal_ch==0)
//			{
//				num2=rand() % (999-num1)+1;
//				double n2=num2+rand();
//				result=n1+n2;
//				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
//				cin>>answer;
//				if(answer==result)
//				{
//					score++;
//				}
//			}
//			else if(cal_ch==1)
//			{
//				num2=rand() % (n1)+1;
//				result=num1-num2;
//				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
//				cin>>answer;
//				if(answer==result)
//				{
//					score++;
//				}
//			}
//			else if(cal_ch==2)
//			{
//				num1=rand()%99+1;
//				num2=rand()%99+1;
//				result=num1*num2;
//				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
//				cin>>answer;
//				if(answer==result)
//				{
//					score++;
//				}
//			}
//			else
//			{
//				num1=rand()%99+1;
//				num2=rand()%99+1;
//				result=level2(num1,num2);
//				cout<<num1<<cal[cal_ch]<<num2<<"=?"<<endl;
//				cin>>answer;
//				if(answer==result)
//				{
//					score++;
//				}
//			}
//			
//			}
//			cout<<score/pro_num*100;	
		
	}
		
			
	
	
	
	
	
	return 0;
 } 
