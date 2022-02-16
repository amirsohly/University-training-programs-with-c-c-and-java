#include <iostream>

using namespace std;

int main()
{

int m, n, p, q;

cout<<" Number of row of matrix A : ";
cin>>m;
cout<<" Number of col of matrix A : ";
cin>>n;

while(true){
	cout<<" Number of row of matrix B : ";
	cin>>p;
	if(n == p) break;
	cout<<" \n Error ";
}
cout<<" Number of col of matrix B : ";
cin>>q;

int a[m][n], b[q][p], c[m][q] = {0};
cout<<" Elemans of matrix A : ";
for(int i = 0; i < m; i++){
	for(int j = 0; j < n; j++){
		cout<<" A("<<i+1<<","<<j+1<<") = ";
		cin>>a[i][j];
	}
}
cout<<" Elemans of matrix B : ";
for(int i = 0; i < p; i++){
	for(int j = 0; j < q; j++){
		cout<<" A("<<i+1<<","<<j+1<<") = ";
		cin>>b[i][j];
	}
}
cout<<" The answer of A x B :\n";
for(int i = 0; i < m; i++){
	for( int j = 0; j < q; j++){
		for(int k = 0; k < n; k++)
			c[i][j] += a[i][k] * b[k][j];

		cout<<' '<<c[i][j]<<'\t';
	}
	cout<<endl;
}
}

