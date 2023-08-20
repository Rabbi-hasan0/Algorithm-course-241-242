#include<bits/stdc++.h>
#include <cstdlib>
#include <time.h>
using namespace std;


int indexing(int a[], int l, int h)
{
	int pivot = a[h];

	int i =l-1;
	for (int j =l; j <=h-1; j++)
	{
		if (a[j] <= pivot) {
			swap(a[++i], a[j]);
		}
	}
	swap(a[i+1], a[h]);
	return (i+1);
}

int indexing_rand(int a[], int l, int h)
{
	srand(time(NULL));
	int random=l+rand()%(h-l);

	swap(a[random], a[h]);

	return indexing(a, l, h);
}


void quicksort(int a[], int l, int h)
{
	if (l>=h)return;

    int pos= indexing_rand(a, l, h);
    quicksort(a, l, pos-1);
    quicksort(a, pos+1, h);
}

void print(int a[], int n)
{
	for (int i=0; i<n; i++)
		cout<<a[i]<<' ';
    cout<<'\n';
}
int main()
{
	int n;cin>>n;
	int a[n+1];
	for(int i=0; i<n; i++){
        cin>>a[i];
	}
	quicksort(a, 0, n-1);

	print(a, n);

	return 0;
}
