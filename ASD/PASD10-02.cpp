#include <iostream>
using namespace std;

struct CanBtree // Deklarasi simpul
{
	char *d;
	CanBtree **CanAnakPointer;
	bool l;
	int n;
}*r = NULL, *np = NULL, *x = NULL;
CanBtree* init() // Membuat Simpul
{
	int i;
	np = new CanBtree;
	np -> d = new char [6]; // Menyiapkan hanya 6 data
	np -> CanAnakPointer = new CanBtree *[7];
	np -> l = true;
	np -> n = 0;
	for (i=0; i<7; i++)
	{
		np -> CanAnakPointer[i] = NULL;
	}
	return np;
}
void PohonB (CanBtree *p) // Prosess Btree
{
	cout << endl;
	int i;
	for (i=0; i<p->n; i++)
	{
		if (p->l == false)
		{
			PohonB(p->CanAnakPointer[i]);
		}
		cout << " " << p->d[i];
	}
	if (p->l == false)
	{
		PohonB(p->CanAnakPointer[i]);
	}
	//cout << endl;
}
void Urut(char *p, int n) // Pengurutan dengan tree
{
	int i,j;
	char t;
	for (i=0; i<n; i++)
	{
		for (j=i; j<=n; j++)
		{
			if (p[i] > p[j])
			{
				t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}
}
char PecahAnak(CanBtree *x, int i)
{
    int mid;
	CanBtree  *np3;
	np3 = init(); // Membuat node baru
	np3 ->l = true;
	if ( i == -1)
	{
		mid = x -> d[2]; // Mencari titik tengah
		x -> d[2] = 0;
		x ->n--;
	}
	return 0;
}
void Sisip(char a)
{
	int i,mid,j;
	char t;
	CanBtree *npl, *np3, *y;
	x = r;
	if (x == NULL)
	{
		r = init();
		x = r;
	}
	else
	{
		if (x->l == true && x->n ==6)
		{
			t = PecahAnak(x,-1);
			x = r;
			for (i=0; i<(x->n); i++)
			{
				if ((a >x->d[i]) && (a<x->d[i+1]))
				{
					i++;
					break;
				}
				else if (a <x->d[0])
				{
					break;
				}
				else
				{
					continue;
				}
			}
			x = x->CanAnakPointer[i];
		}
		else
		{
			while (x->l == false)
			{
				for (i=0; i<(x->n); i++)
				{
					if ((a>x->d[i]) && (a<x->d[i+1]))
					{
						i++;
						break;
					}
					else if (a<x->d[0])
					{
						npl = init();
						npl ->l= false;
						x->l = true;
						for (j =3; j<6; j++)
						{
							np3->d[j-3] = x->d[j];
							np3->CanAnakPointer[j-3] = x -> CanAnakPointer[j];
							np3->n++;
							x->d[j] =0;
							x->n--;
						}
						for (j=0; j<6; j++)
						{
							x->CanAnakPointer[j] = NULL;
						}
						npl->d[0] = mid;
						npl->CanAnakPointer[npl->n] = x;
						npl->CanAnakPointer[npl->n+1] = np3;
						npl->n++;
						r = npl;
					}
					else
						{
							y=x->CanAnakPointer[i];
							mid = y->d[2];
							y->d[2] = 0;
							y->n--;
							for (j=3; j<6; j++)
							{
								np3->d[j-3]=y->d[j];
								np3->n++;
								y->d[j]=0;
								y->n--;
							}
							x->CanAnakPointer[i+1] =y;
							x->CanAnakPointer[i+1] =np3;
							break;
						}
							continue;
					}
					if ((x->CanAnakPointer[i])->n ==6)
					{
						t = PecahAnak(x,i);
						x->d[x->n] = t;
						x->n++;
						continue;
					}
					else
					{
						x=x->CanAnakPointer[i];
					}
				}
			}
		}
		x->d[x->n] =a;
		Urut(x->d, x->n);
		x->n++;
	}

int main()
{
	int i;
	string k;
	char t;
	cout << "Masukan 1 kata maks 4 huruf : "; cin >> k;
	cout << endl;
	for (i=0; i<4; i++)
	{
		cout << "Masukkan Ejaan Kata Per Huruf : " ; cin >> t;
		Sisip(t);
	}
	cout << endl;
	cout << endl;
	cout << " HASIL PENGURUTAN MENGGUNAKAN BTREE " << endl;
	cout << " -----------------------------------" << endl;
	PohonB(r);
	cin.get();
}	
