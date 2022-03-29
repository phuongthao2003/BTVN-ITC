#include<iostream.h>
#include<math.h>

//Bai 1-2-3
int main()
{
	float a,b,c,CV;
	float P,S;
	cout<<"Nhap 3 canh cua tam giac:\n";
	cin>>a>>b>>c;
    P=(a+b+c)/2;
	CV=a+b+c;
	S= sqrt(P*( P - a)*( P - b)*( P - c));
	cout<<"\nNua chu vi cua tam giac la:"<<P;
	cout<<"\nChu vi cua tam giac la:"<<CV;
	cout<<"\nDien tich cua tam giac la:"<<S;
	if(a==b&&b==c)
	{
		cout<<"\nThoa man la tam giac deu"<<endl;
	}
	if(a==b||b==c||c==a)
	{
		cout<<"\nThoa man la tam giac can"<<endl;
	}
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
	{
		cout<<"\nThoa man la tam giac vuong"<<endl;
	}
	else
	{
		cout<<"\nThoa man la tam giac thuong"<<endl;
	}
	const float pi=3.14;
	float r,s,C;
	cout<<"\n---------------------------------------";
	cout<<"\nNhap vao ban kinh cua hinh tron la:";cin>>r;
	C=2*pi*r;
	s=pi*r*r;
	cout<<"\nChu vi hinh tron la:"<<C;
	cout<<"\nDien tich hinh tron la:"<<s<<endl;
	return 0;
}