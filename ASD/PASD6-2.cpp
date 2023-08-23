/* Nama   : Agus Wahyu Prasetyo
   NPM    : 4521210064
   */
   
#include <iostream>
using namespace std;
   
class agus
{
	public:
	int ag[50];
    void wahyu(int low, int high)
    {
	    int mid;
	    if(low<high)
	    {
		    mid=(low+high)/2;
		    wahyu(low,mid);
		    wahyu(mid+1,high);
		    gus(low,mid,high);
	    }
    }

    void gus(int low, int mid, int high)
    {
	    int i,a,n,b[50], gab;
	    i=low;
	    a=low;
	    n=mid+1;
	    while((i<=mid)&&(n<=high))
	    {
		    if(ag[i]<=ag[n])
		    {
			    b[a]=ag[i];
			    i++;
		    }
		    else
		    {
		  	    b[a]=ag[n];
			    n++;
		    }
		    a++;
	    }
	    if(i>mid)
	    {
		    for(gab=n; gab<=high; gab++)
		    {
			    b[a]=ag[gab];
			    a++;
		    }
	    }
	    else
	    {
		    for(gab=i; gab<=mid; gab++)
		    {
			    b[a]=ag[gab];
			    a++;
		    }
	    }
	    for(gab=low; gab<=high; gab++)
		    ag[gab]=b[gab];
    }
};
   
int main()
{
	int yuu, gabs;
	agus wah;
    cout<<"*****************************"<<endl;
	cout<<" MERGE SORT PROGRAM "<<endl;
	cout<<"*****************************"<<endl;
	cout<<endl;
	cout<<"Masukkan Banyak Bilangan: "; cin >> yuu;
	cout<<endl;
	cout<<"Sekarang masukkan "<<yuu<<" Bilangan yang ingin diurutkan: "<<endl;
	for(gabs=1; gabs<=yuu; gabs++)
	{
		cout<<"Bilangan ke-"<<gabs<<" = "; cin >> wah.ag[gabs];
	}
	wah.wahyu(1,yuu);
	cout<<endl;
	cout<<"Hasil pengurutan secara Ascending :"<<endl;
	for(gabs=1; gabs<=yuu; gabs++)
		cout<<wah.ag[gabs]<<" ";
	cout<<endl<<endl<<endl<<endl;
	cin.get();
}
