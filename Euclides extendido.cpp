#include<iostream>
#include<locale.h>

using namespace std;
class E{
	int a,a1,b1;
	public:
	int Leer(void);
	void Euclides(int a, int b, int*d, int *x, int *y);
	void Ver(int x, int y, int d);
};
int E::Leer(void){
	a1=b1=0;
	cout<<"Digite numero "<<endl;
	cin>>a;
	return a;
}
void E::Euclides(int a, int b, int *d, int *x, int *y){
	long x1, y1;
	if(b==0){
		*d=a;
		*x=1;
		*y=0;
	}
	else{
		Euclides(b, a%b, d, x, y);
		x1=*x;
		y1=*y;
		*x=y1;
		*y=x1-(a/b)*y1;
	}
	a1=a;
	b1=b;
}
void E::Ver(int x, int y, int d){
	cout<<endl;
	cout<<" ax   + by  = d "<<endl;
	cout<<" 29x  + 11y = 1 "<<endl;
	cout<<" "<<a1<<"*"<<x<<" + "<<b1<<"*"<<y<<" = "<<d<<endl;
	cout<<endl;
	cout<<" x = "<<x<<" y = "<<y<<" d = "<<d<<endl;
}
int main(){
	int a,b,d,x,y;
	E e1;
	a=e1.Leer();
	b=e1.Leer();
	e1.Euclides(a,b,&d,&x,&y);
	e1.Ver(x,y,d);
	return 0;
}