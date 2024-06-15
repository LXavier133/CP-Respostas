#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){__
	int tam,turno;cin>>tam>>turno;
	int arr[tam][tam];
	memset(arr,0,sizeof(arr));
	for(int k=0;k<tam;k++) for(int l=0;l<tam;l++){char ch;cin>>ch;arr[k][l]=ch-'0';}
	for(int i=0;i<turno;i++){
		int vizinhos[tam][tam];
		memset(vizinhos,0,sizeof(vizinhos));
		for(int k=0;k<tam;k++) for(int l=0;l<tam;l++)
			if(arr[k][l]==1){
				if(k>0){
					if(l>0)vizinhos[k-1][l-1]++;
					if(l<tam-1) vizinhos[k-1][l+1]++;
					vizinhos[k-1][l]++;}
				if(k<tam-1){
					if(l>0)vizinhos[k+1][l-1]++;
                                        if(l<tam-1) vizinhos[k+1][l+1]++;
                                        vizinhos[k+1][l]++;}
			
				if(l>0) vizinhos[k][l-1]++;
				if(l<tam-1) vizinhos[k][l+1]++;}
		for(int k=0;k<tam;k++) for(int l=0;l<tam;l++){
			if(arr[k][l]==0&&vizinhos[k][l]==3) arr[k][l]=1;
			else if(arr[k][l]==1&&(vizinhos[k][l]>3 || vizinhos[k][l]<2)) arr[k][l]=0;}}
	for(int k=0;k<tam;k++){
		for(int l=0;l<tam;l++){
			cout<<arr[k][l];}
		cout<<endl;}
return 0;}
