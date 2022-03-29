#include<iostream>
#include<iomanip>
using namespace std;

class KhachHang
{
    private:
        char hoten[30];
        char cmt[10];
        char hokhau[50];
        struct
        {
            int NS,TS,NamSinh;
        };
    public:
        void nhapinfor(KhachHang kh[],int &n);
        void tieude();
        void xuatinfor(KhachHang kh[],int &n);
        void sapxep(KhachHang kh[],int n);
        void thang12(KhachHang kh[], int &n);
};

void KhachHang::nhapinfor(KhachHang kh[], int &n)
{
    for(int i = 0 ; i < n ; i++)
    {   
        fflush(stdin);
        cout<<"Khach hang thu:"<<i+1<<endl;
    	cout<<"\nNhap ho ten cua khach hang:";
    	cin.getline(kh[i].hoten,30);
    	cout<<"\nNhap ngay sinh cua khach hang:";
    	cin>>kh[i].NS;
    	cout<<"\nNhap thang sinh cua khach hang:";
    	cin>>kh[i].TS;
    	cout<<"\nNhap nam sinh cua khach hang:";
    	cin>>kh[i].NamSinh;
        fflush(stdin);
		cout<<"\nNhap so cmt cua khach hang:";
    	cin.getline(kh[i].cmt,10);
        cout<<"\nNhap ho khau cua khach hang: ";
        cin.getline(kh[i].hokhau,50);
	}
}
void KhachHang::tieude()
{
    cout <<"HO TEN"<<setw(10)
         <<"NGAY"<<"/"<<"THANG"<<"/"<<"NAM SINH"<<setw(4)
         <<"CMT"<<setw(12)
         <<"HO KHAU"<<setw(12)
         <<endl; 
}
void KhachHang::xuatinfor(KhachHang kh[], int &n)
{
    tieude();
    for(int i=0; i<n; i++)
	{
    cout <<kh[i].hoten<<setw(10)
         <<kh[i].NS<<"/"<<kh[i].TS<<"/"<<kh[i].NamSinh<<setw(12)
         <<kh[i].cmt<<setw(14)
         <<kh[i].hokhau;
    cout <<endl; 
	}
}
void KhachHang::sapxep(KhachHang kh[], int n)
{
    cout<<"\t\t\t\tDanh sach khach hang sau khi sap xep la: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(kh[i].hoten < kh[j].hoten)
            swap(kh[i], kh[j]);
        }
    }
    xuatinfor(kh,n);
}
void KhachHang::thang12(KhachHang kh[], int &n)
{
    cout<<"\t\t\t\tDanh sach khach hang sinh nhat thang 12 la: "<<endl;
    for(int i=0; i<n; i++)
    {
        if(kh[i].TS == 12)
        {
            xuatinfor(kh,n);
        }
    }
}
int main()
{
    int n;
    KhachHang kh[100];
    do
    {
        cout<<"Nhap so luong khach hang: ";cin>>n;
    } while (n<0);
    kh->nhapinfor(kh,n);
    kh->xuatinfor(kh,n);
    kh->sapxep(kh,n);
    kh->thang12(kh,n);
}