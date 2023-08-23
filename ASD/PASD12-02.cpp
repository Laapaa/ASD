#include <iostream>
#include <stdlib.h>
using namespace std;

struct data
{
	int key;
	int value;
};
struct data *array;
int capacity = 10;
int size = 0;

int hashcode(int key);
int get_prime(int n);
int if_prime(int n);

int size_of_hashtable();

//fungsi yang memberikan kode HASH - unik pada key
int hashcode(int key)
{
	return (key % capacity);
}

//mengembalikan bil prima
int get_prime(int n)
{
	if(n%2==0)
	{
		n++;
	}
	for(; !if_prime(n); n+=2);
	return n;
}

//memeriksa apakah bil prima
int if_prime(int n)
{
	int i;
	if(n==1||n==2)
	{
		return 0;
	}
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

void init_array()
{
	int i;
	capacity = get_prime(capacity);
	array = (struct data*)malloc(capacity * sizeof(struct data));
	for(i=0; i<capacity; i++)
	{
		array[i].key = 0;
		array[i].value = 0;
	}
}

//memasukkan kunci di tabel hash
void insert(int key)
{
	int index = hashcode(key);
	if(array[index].value==0)
	{
		//tidak ada masukkan
		array[index].key = key;
		array[index].value = 1;
		size++;
		cout<<"Kunci "<<"Setelah di Insert "<<key<<endl;
	}
	else
		if(array[index].key==key)
		{
			//kunci di update
			cout<<"Kunci "<<"update kunci "<<key<<endl;
			array[index].value += 1;
		}
		else
		{
			//kunci tdk dpt disisipkan krn indeks sdh mengandung beberapa kunci lainnya
			cout<<"Elemen tidak dapat di Insert"<<endl;
		}
}

void remove_element(int key)
{
	int index = hashcode(key);
	if(array[index].value==0)
	{
		cout<<"Kunci tidak ada"<<endl;
	}
	else
	{
		array[index].key = 0;
	    array[index].value = 0;
		size--;
		cout<<"Kunci "<<" telah dihapus "<<key<<endl;
	}
}

//menampilkan semua elemen dari tabel hash
void display()
{
	int i;
	for(i=0; i<capacity; i++)
	{
		if(array[i].value ==  0)
		{
			cout<<"Array "<<i<<" tidak ada Elemen"<<endl;
		}
		else
		{
			cout<<"Array "<<i<<" mempunyai elemen kunci "<<i<<" dan nilai "<<i<<array[i].key<<array[i].value<<endl;
		}
	}
}

int size_of_hashtable()
{
	return size;
}

int main()
{
	int choice, key, value, n, c;
	init_array();
	do
	{
		cout<<endl;
		cout<<"Implementasi Penggunaan HASH TABLE"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"           M   E   N   U            "<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<" 1. Sisip item pada HASH TABLE    "<<endl;
        cout<<" 2. Hapus item pada HASH TABLE    "<<endl;
		cout<<" 3. Cek ukuran pada HASH TABLE    "<<endl;
		cout<<" 4. Menampilkan HASH TABLE        "<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<" Pilihan Anda : "; cin >> choice;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		switch(choice)
		{
			case 1:
			cout<<" Sisip item pada HASH TABLE"<<endl;
			cout<<" Masukkan kunci : "; cin >> key;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			insert(key);
			break;
			
			case 2:
			cout<<" Hapus item pada HASH TABLE"<<endl;
			cout<<" Masukkan kunci : "; cin >> key;
			remove_element(key);
			break;
			
			case 3:
			n = size_of_hashtable();
			cout<<" Ukuran pada HASH TABLE"<<n<<endl;
			break;
			
			case 4:
			display();
			break;
			
			default:
			cout<<" Salah input"<<endl;
		}
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<" Melanjutkan (tekan 1 apabila YA) "; cin >> c;
	}while(c == 1);
	cin.get();
}
