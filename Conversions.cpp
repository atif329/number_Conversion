#include<iostream>
#include<cstring>
#include<windows.h>
using namespace std;
class Conversions
{
	public:
		void BtoD(int num,int rem[],int i)
		{
			int base=1,sum=0;
			while(num>0)
			{
				rem[i]=num%10;
				num/=10;
				sum=sum+rem[i]*base;
				base=base*2;
				i++;
			}
			cout<<"Number in Decimal form is= "<<sum<<endl;
		}
		void BtoO(int num,int rem[],int i)
		{
			int temp=0,j=0,ans[30];
			while(num>0)
			{
				temp=num%1000;
				num/=1000;
				int base=1,sum=0;
				while(temp>0)
				{
					rem[i]=temp%10;
					temp/=10;
					sum=sum+rem[i]*base;
					base=base*2;
					i++;
				}
				ans[j]=sum;
				j++;
			}
			j--;
			cout<<"Number in Octal form is= ";
			while(j>=0)
			{
				cout<<ans[j];
				j--;
			}
			cout<<endl;
		}
		void BtoH(int num,int rem[],int i)
		{
			int temp=0,j=0;
			char ans[30];
			while(num>0)
			{
				temp=num%10000;
				num/=10000;
				int base=1,sum=0;
				while(temp>0)
				{
					rem[i]=temp%10;
					temp/=10;
					sum=sum+rem[i]*base;
					base=base*2;
					i++;
				}
				if(sum==10)
					ans[j]='A';
				else if(sum==11)
					ans[j]='B';
				else if(sum==12)
					ans[j]='C';
				else if(sum==13)
					ans[j]='D';
				else if(sum==14)
					ans[j]='E';
				else if(sum==15)
					ans[j]='F';
				else if(sum==0)
					ans[j]='0';
				else if(sum==1)
					ans[j]='1';
				else if(sum==2)
					ans[j]='2';
				else if(sum==3)
					ans[j]='3';
				else if(sum==4)
					ans[j]='4';
				else if(sum==5)
					ans[j]='5';
				else if(sum==6)
					ans[j]='6';
				else if(sum==7)
					ans[j]='7';
				else if(sum==8)
					ans[j]='8';
				else if(sum==9)
					ans[j]='9';
				j++;
			}
			j--;
			cout<<"Number in Hexadecimal form is= ";
			while(j>=0)
			{
				cout<<ans[j];
				j--;
			}
			cout<<endl;
		}
		void DtoB(int num,int rem[],int i){
			while(num>1)
			{
				rem[i]=num%2;
				num/=2;
				i++;
			}
			rem[i]=num;
			cout<<"Number in binary form is : ";
			while(i>=0)
			{
				cout<<rem[i];
				i--;
			}
			cout<<endl;
		}
		void DtoO(int num,int rem[],int i)
		{
			while(num>=8)
			{
				rem[i]=num%8;
				num/=8;
				i++;
			}
			rem[i]=num;
			cout<<"Number in octal form is : ";
			while(i>=0)
			{
				cout<<rem[i];
				i--;
			}
			cout<<endl;
		}
		void DtoH(int num,int rem[],int i)
		{
			while(num>=16)
			{
				rem[i]=num%16;
				num/=16;
				i++;
			}
			rem[i]=num;
			cout<<"Number in Hexadecimal form is : ";
			while(i>=0)
			{
				if(rem[i]>=10 && rem[i]<=15)
				{
					if(rem[i]==10)
						cout<<"A";
					else if(rem[i]==11)
						cout<<"B";	
					else if(rem[i]==12)
						cout<<"C";
					else if(rem[i]==13)
						cout<<"D";
					else if(rem[i]==14)
						cout<<"E";
					else if(rem[i]==15)
						cout<<"F";
				}
				else
					cout<<rem[i];
				i--;
			}
			cout<<endl;
		}
		void OtoB(int num,int rem[],int i)
		{
			int temp=0;
			while(num>0)
			{
				temp=num%10;
				num/=10;
				while(temp>1)
				{
					rem[i]=temp%2;
					temp/=2;
					i++;
				}
				rem[i]=temp;
				i++;
			}
			i--;
			cout<<"Number in binary form is= ";
			while(i>=0)
			{
				cout<<rem[i];
				i--;
			}
			cout<<endl;
		}
		void OtoD(int num,int rem[],int i)
		{
			int base=1,sum=0;
			while(num>0)
			{
				rem[i]=num%10;
				num/=10;
				sum=sum+rem[i]*base;
				base=base*8;
				i++;
			}
			cout<<"Number in Decimal form is= "<<sum<<endl;
		}
		void OtoH(int num,int rem[],int i)
		{
			int base=1,sum=0;
			while(num>0)
			{
				rem[i]=num%10;
				num/=10;
				sum=sum+rem[i]*base;
				base=base*8;
				i++;
			}
			num=sum;
			i=0;
			while(num>=16)
			{
				rem[i]=num%16;
				num/=16;
				i++;
			}
			rem[i]=num;
			cout<<"Number in Hexadecimal form is : ";
			while(i>=0)
			{
				if(rem[i]>=10 && rem[i]<=15)
				{
					if(rem[i]==10)
						cout<<"A";
					else if(rem[i]==11)
						cout<<"B";	
					else if(rem[i]==12)
						cout<<"C";
					else if(rem[i]==13)
						cout<<"D";
					else if(rem[i]==14)
						cout<<"E";
					else if(rem[i]==15)
						cout<<"F";
				}
				else
					cout<<rem[i];
				i--;
			}
			cout<<endl;
		}
		void HtoD(char num[],int rem[],int i)
		{
			while(i<strlen(num))
			{
				if(num[i]=='0')
					rem[i]=0;
				if(num[i]=='1')
					rem[i]=1;
				if(num[i]=='2')
					rem[i]=2;
				if(num[i]=='3')
					rem[i]=3;
				if(num[i]=='4')
					rem[i]=4;
				if(num[i]=='5')
					rem[i]=5;
				if(num[i]=='6')
					rem[i]=6;
				if(num[i]=='7')
					rem[i]=7;
				if(num[i]=='8')
					rem[i]=8;
				if(num[i]=='9')
					rem[i]=9;
				if(num[i]=='a'||num[i]=='A')
					rem[i]=10;
				if(num[i]=='b'||num[i]=='B')
					rem[i]=11;
				if(num[i]=='c'||num[i]=='C')
					rem[i]=12;
				if(num[i]=='d'||num[i]=='D')
					rem[i]=13;
				if(num[i]=='e'||num[i]=='E')
					rem[i]=14;
				if(num[i]=='f'||num[i]=='F')
					rem[i]=15;
				i++;		
			}
			int base=1,sum=0;
			i=strlen(num)-1;
			while(i>=0)
			{
				sum=sum+(rem[i]*base);
				base=base*16;
				i--;
			}
			cout<<"Number in decimal= "<<sum<<endl;
		}
		void HtoB(char num[],int rem[],int i)
		{
			while(i<strlen(num))
			{
				if(num[i]=='0')
					rem[i]=0;
				if(num[i]=='1')
					rem[i]=1;
				if(num[i]=='2')
					rem[i]=2;
				if(num[i]=='3')
					rem[i]=3;
				if(num[i]=='4')
					rem[i]=4;
				if(num[i]=='5')
					rem[i]=5;
				if(num[i]=='6')
					rem[i]=6;
				if(num[i]=='7')
					rem[i]=7;
				if(num[i]=='8')
					rem[i]=8;
				if(num[i]=='9')
					rem[i]=9;
				if(num[i]=='a'||num[i]=='A')
					rem[i]=10;
				if(num[i]=='b'||num[i]=='B')
					rem[i]=11;
				if(num[i]=='c'||num[i]=='C')
					rem[i]=12;
				if(num[i]=='d'||num[i]=='D')
					rem[i]=13;
				if(num[i]=='e'||num[i]=='E')
					rem[i]=14;
				if(num[i]=='f'||num[i]=='F')
					rem[i]=15;
				i++;		
			}
			int base=1,sum=0;
			i=strlen(num)-1;
			while(i>=0)
			{
				sum=sum+(rem[i]*base);
				base=base*16;
				i--;
			}
			i=0;
			while(sum>1)
			{
				rem[i]=sum%2;
				sum/=2;
				i++;
			}
			rem[i]=sum;
			cout<<"Number in binary form is : ";
			while(i>=0)
			{
				cout<<rem[i];
				i--;
			}
			cout<<endl;
		}
		void HtoO(char num[],int rem[],int i)
		{
			while(i<strlen(num))
			{
				if(num[i]=='0')
					rem[i]=0;
				if(num[i]=='1')
					rem[i]=1;
				if(num[i]=='2')
					rem[i]=2;
				if(num[i]=='3')
					rem[i]=3;
				if(num[i]=='4')
					rem[i]=4;
				if(num[i]=='5')
					rem[i]=5;
				if(num[i]=='6')
					rem[i]=6;
				if(num[i]=='7')
					rem[i]=7;
				if(num[i]=='8')
					rem[i]=8;
				if(num[i]=='9')
					rem[i]=9;
				if(num[i]=='a'||num[i]=='A')
					rem[i]=10;
				if(num[i]=='b'||num[i]=='B')
					rem[i]=11;
				if(num[i]=='c'||num[i]=='C')
					rem[i]=12;
				if(num[i]=='d'||num[i]=='D')
					rem[i]=13;
				if(num[i]=='e'||num[i]=='E')
					rem[i]=14;
				if(num[i]=='f'||num[i]=='F')
					rem[i]=15;
				i++;		
			}
			int base=1,sum=0;
			i=strlen(num)-1;
			while(i>=0)
			{
				sum=sum+(rem[i]*base);
				base=base*16;
				i--;
			}
			i=0;
			while(sum>=8)
			{
				rem[i]=sum%8;
				sum/=8;
				i++;
			}
			rem[i]=sum;
			cout<<"Number in octal form is : ";
			while(i>=0)
			{
				cout<<rem[i];
				i--;
			}
			cout<<endl;
		}
};
int main()
{
	int num,rem[100],i=0,ch;
	Conversions c1;
	char choose;
	do
	{
		cout<<"Which number do you want to convert\n";
		cout<<"Enter\n";
		cout<<"1 for Binary number\n";
		cout<<"2 for Decimal number\n";
		cout<<"3 for Octal number\n";
		cout<<"4 for Hexadecimal number\n";
		cin>>ch;
		switch(ch)
		{
			int ch1,temp,check[50];
			char enter;
			case 1:
				cout<<"Enter binary number: ";
				cin>>num;
				temp=num;
				i=0;
				while(num>0)
				{
					check[i]=num%10;
					num/=10;
					if(check[i]!=0 && check[i]!=1)
					{
						cout<<"Binary number cannot contain digits other than 1 or 0\n";
						cout<<"Enter binary number: ";
						cin>>num;
					}
					i++;
				}
				i=0;
				num=temp;
				do
				{
					cout<<"\nIn what form do want to convert the number\n";
					cout<<"Enter\n";
					cout<<"1 for deciaml\n";
					cout<<"2 for octal\n";
					cout<<"3 for hexadecimal\n";
					cin>>ch1;
					if(ch1==1)
						c1.BtoD(num,rem,i);
					else if(ch1==2)
						c1.BtoO(num,rem,i);
					else if(ch1==3)
						c1.BtoH(num,rem,i);
					else
						cout<<"\nInvalid Choice\n";
					cout<<"Do you want to see another conversion of binary(y/n)\n";
					cin>>enter;
				}
				while(enter=='Y' || enter=='y');
				break;
			case 2:
				cout<<"Enter decimal number : ";
				cin>>num;
				do{
					cout<<"\nIn what form do want to convert the number\n";
					cout<<"Enter\n";
					cout<<"1 for binary\n";
					cout<<"2 for octal\n";
					cout<<"3 for hexadecimal\n";
					cin>>ch1;
					if(ch1==1)
						c1.DtoB(num,rem,i);
					else if(ch1==2)
						c1.DtoO(num,rem,i);
					else if(ch1==3)
						c1.DtoH(num,rem,i);
					else
						cout<<"\nInvalid Choice\n";
					cout<<"Do you want to see another conversion of decimal(y/n)\n";
					cin>>enter;
				}
				while(enter=='Y' || enter=='y');
				break;
			case 3:
				cout<<"Enter Octal number : ";
				cin>>num;
				i=0;
				temp=num;
				while(num>0)
				{
					check[i]=num%10;
					num/=10;
					if(check[i]<0 || check[i]>7)
					{
						cout<<"Octal number cannot contain digits other greater than 7\n";
						cout<<"Enter Octal number: ";
						cin>>num;
						temp=num;
					}
					i++;
				}
				i=0;
				num=temp;
				do{
					cout<<"\nIn what form do want to convert the number\n";
					cout<<"Enter\n";
					cout<<"1 for binary\n";
					cout<<"2 for decimal\n";
					cout<<"3 for hexadecimal\n";
					cin>>ch1;
					if(ch1==1)
						c1.OtoB(num,rem,i);
					else if(ch1==2)
						c1.OtoD(num,rem,i);
					else if(ch1==3)
						c1.OtoH(num,rem,i);
					else
						cout<<"\nInvalid Choice\n";
					cout<<"Do you want to see another conversion of octal(y/n)\n";
					cin>>enter;
				}
				while(enter=='Y' || enter=='y');
				break;
			case 4:
				char num[100];
				bool flag;
				do{
					flag=true;
					cout<<"Enter Hexadecimal number : ";
					cin>>num;
					for(int i=0;i<strlen(num)&&flag==true;i++)
					{
						if(num[i]>'F' && num[i]>'f' ){
							cout<<"Hexadecimal cannot contain alphabets greater than F\n";
							flag=false;
							break;
						}
						else
						{
							flag=true;
						}
					}
				}
				while(flag==false);
				do{
					cout<<"\nIn what form do want to convert the number\n";
					cout<<"Enter\n";
					cout<<"1 for binary\n";
					cout<<"2 for decimal\n";
					cout<<"3 for Octal\n";
					cin>>ch1;
					if(ch1==1)
						c1.HtoB(num,rem,i);
					else if(ch1==2)
						c1.HtoD(num,rem,i);
					else if(ch1==3)
						c1.HtoO(num,rem,i);
					else
						cout<<"\nInvalid Choice\n";
					cout<<"Do you want to see another conversion of Hexadecimal(y/n)\n";
					cin>>enter;
				}
				while(enter=='Y' || enter=='y');
				break;
			default:
				cout<<"\nInvalid choice\n\n";
				break;
		}
		cout<<"Do you want another conversion(y/n)\n";
		cin>>choose;
		system("cls");
	}
	while(choose=='Y'||choose=='y');
}
