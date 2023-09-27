 //Program on function passing an object
#include<conio.h>
#include<iostream.h>
class Test
{
		int a,b;
		public:

			void set(int x, int y)
			{
				a=x;
				b=y;
			}
			void add(Test x2)    // function receiving an object
			{
				int x,y;
				x= a + x2.a;
				y= b + x2.b;
				cout<<"X = "<<x<<endl;
				cout<<"Y = "<<y<<endl;
			}
}; // end of class
void main()
{
		clrscr();
		Test t1,t2;
		t1.set(10,20);
		t2.set(30,40);
		t1.add(t2);   // passing object to function
		t2.add(t1);   // passing object to function
		getch();
}
//Program on function returning an object
#include<conio.h>
#include<iostream.h>
class Test
{
		int a,b;
		public:
			void set(int x, int y)
			{
				a=x;
				b=y;
			}
			Test add(Test x2) // function receiving an object, returning an object
			{
				Test t3;
				t3.a = a + x2.a;
				t3.b = b + x2.b;
				return t3;
			}
		void disp()
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
};//end of class
void main()
{
		clrscr();
		Test t1,t2,t4;
		t1.set(10,20);
		t1.disp();
		t2.set(30,40);
		t2.disp();
		t4=t1.add(t2); //passing an object, receiving an object
		t4.disp();
		getch();
}
 //Unary operator 
overloading
#include<iostream.h>
#include<conio.h>
class op
{
int a,b;
public:
     op()
    {
     a=10;
     b=20;
    }

void operator ++()
{
a=++a;
b=b+1;
}
void show()
{
cout<<"value of 
a="<<a<<endl<<"value 
of b="<<b<<endl;
}
};
void main()
{
clrscr();
op o;
o.show();
++o;//calling
o.show();
getch();
}
//Binary opertor
#include<iostream.h>
#include<conio.h>
class demo
{
	int a,b;
public:
void getdata()
{
cout<<"Enter the values 
of a and b\n";
cin>>a>>b;
}
void putdata()
{
cout<<"values of 
a="<<a<<endl<<"value
s of b="<<b<<endl;
}
demo operator +(demo 
x)
{
demo m;
m.a=a+x.a;
m.b=b+x.b;
 return m;
}
};
void main()
{
demo d1,d2,d3;
d1.getdata();//a=2,b=3
d2.getdata();//a=4,b=5
d3 = d1 + d2;//calling
d3.putdata();
getch();
}