#include<iostream.h>
#include<conio.h>
char a[3][3]; int ch=0;
void display()
{
for(int i=0;i<3;i++)
 {      cout<<"\n";
	for(int j=0;j<3;j++)
	{
	cout<<a[i][j]<<"\t";
	}

 }
}
int placeoandx(char choice,int count)
{ switch(choice)
 {


 case '1':if(a[0][0]=='x'||a[0][0]=='o')
   {
	cout<<"already a char is placed";
	
	return(0);
   }
   else
   {   if(count%2==0)
	    {
	     a[0][0]='o';
	    }else
	    a[0][0]='x';break;
   }


   case '2':if(a[0][1]=='x'||a[0][1]=='o')
   {
	cout<<"already a char is placed";
	
	return(0);
   }
   else
   {
  if(count%2==0)
	    {
	     a[0][1]='o';
	    }else
			a[0][1]='x'  ;    break;
   }	


   case '3':if(a[0][2]=='x'||a[0][2]=='o')
   {
	cout<<"already a char is placed";
	
	return(0);
   }
   else
   {if(count%2==0)
	    {
	     a[0][2]='o';
	    }else
	    a[0][2]='x' ;   break;
   }  


   case '4':if(a[1][0]=='x'||a[1][0]=='o')
   {
	cout<<"already a char is placed";
	
	return(0);
   }
   else
   {   
if(count%2==0)
	    {
	     a[1][0]='o';
	    }else
	    a[1][0]='x';   break;
   } 


   case '5':if(a[1][1]=='x'||a[1][1]=='o')
   {
	cout<<"already a char is placed";
	return(0);
   }
   else
if(count%2==0)
	    {
	     a[1][1]='o';
	    }else
	    a[1][1]='x';   break;

	case '6':if(a[1][2]=='x'||a[1][2]=='o')
   {
	cout<<"already a char is placed";
	
	return(0);
   }
   else
   {   
if(count%2==0)
	    {
	     a[1][2]='o';
	    }else
	    a[1][2]='x';  break;
   } 
   
   
 case '7':if(a[2][0]=='x'||a[2][0]=='o')
   {
	cout<<"already a char is placed";
	
	return(0);
   }
   else
 if(count%2==0)
	    {
	     a[2][0]='o';
	    }else
	    a[2][0]='x';break;
 
 
 case '8':
 if(a[2][1]=='x'||a[2][1]=='o')
   {
	cout<<"already a char is placed";
	return(0);
   }
   else
 if(count%2==0)
	    {
	     a[2][1]='o';
	    }else
	    a[2][1]='x' ;   break;
 case '9':if(a[2][2]=='x'||a[2][2]=='o')
   {
	cout<<"already a char is placed";
	return(0);
   }
   else
 if(count%2==0)
	    {
	     a[2][2]='o';
	    }else
	    a[2][2]='x'  ; break;
default: cout<<"wrong choice";

 }
  display();
}
void initialize()
{
char t='1';
for(int i=0;i<3;i++)
 {
	for(int j=0;j<3;j++)
	{
	a[i][j]=t++;
	}


 }
 display();

}
int check()
{
	if (a[1] == a[2] && a[2] == a[3])
		return 1;
	else if (a[4] == a[5] && a[5] == a[6])
		return 1;
	else if (a[7] == a[8] && a[8] == a[9])
		return 1;
	else if (a[1] == a[4] && a[4] == a[7])
		return 1;
	else if (a[2] == a[5] && a[5] == a[8])
		return 1;
	else if (a[3] == a[6] && a[6] == a[9])
		return 1;
	else if (a[1] == a[5] && a[5] == a[9])
		return 1;
	else if (a[3] == a[5] && a[5] == a[7])
		return 1;
	else if (a[1] != '1' && a[2] != '2' && a[3] != '3' &&
	         a[4] != '4' && a[5] != '5' && a[6] != '6' &&
            a[7] != '7' && a[8] != '8' && a[9] != '9')
		return 0;
	else
		return -1;
}




void main()
{    char pos; initialize();
	int count=0,chkox,w_l;
	clrscr();
	for(int i=0;i<9;i++)
{
	if(i%2==0)
{
	cout<<"first player choose position to enter O: ";
	
	cin>>pos;
	chkox=placeoandx(pos,count);  w_l=check();
	
	if(chkox==0){
		i--;
		count--;
	}
	else 
	count++;

}
	else
{
	cout<<"second player choose position to enter X: ";
	cin>>pos;
	chkox =placeoandx(pos,count); w_l=check();
	if(chkox==0){
		i--;
		count--;
	}
	else
	count++;
}
}
if (w_l==1)
{
    cout<<endl<<"player:"<<a[0]<<"wins"<<endl;
}
else 
    cout<<endl<<"GAME DRAW";
getch();
}


