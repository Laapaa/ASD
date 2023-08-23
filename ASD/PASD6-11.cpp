/* Nama   : Agus Wahyu Prasetyo
   NPM    : 4521210064
   */
   
#include <iostream>
#include <iomanip>
using namespace std;

class agus
{
	public:
	void sugab(int num_sugab[],int left,int right)
	{
		int pivot,gabs_hold,wah_hold;
	    gabs_hold = left;
	    wah_hold = right;
	    pivot = num_sugab[left];
	    while(left<right)
	    {
			while((num_sugab[right]>=pivot)&&(left<right))
			right--;
		    if(left!=right)
		    {
				num_sugab[left] = num_sugab[right];
			    left++;
		    }
			while((num_sugab[left]<=pivot)&&(left<right))
		    {
				left++;
		    }
		    if(left!=right)
		    {
			    num_sugab[right] = num_sugab[left];
			    right--;
		    }
	    }   
		num_sugab[left] = pivot;
	    pivot = left;
	    left = gabs_hold;
	    right = wah_hold;
	    if(left<pivot)
			sugab(num_sugab,left,pivot-1);
	    if(right>pivot)
		    sugab(num_sugab,pivot+1,right);
	}
};

int main()
{
	int gabs[9] = {65,2,44,26,19,22,5,3,12};
	agus data;
	cout<<" Data Sebelum diurutkan: \n";
	for(int a=0;a<9;a++)
	{
		cout<<setw(3)<<gabs[a];
	}
	cout<<endl;
	cout<<endl;
	data.sugab(gabs,0,9);
	cout<<" Data Setelah diurutkan: \n";
	for(int b=1;b<9;b++)
	cout<<setw(3)<<gabs[b]<<endl;
    cin.get();
}
