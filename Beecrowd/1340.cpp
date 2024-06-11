#include <bits/stdc++.h>
using namespace std;
int main(){
	int nCasos;
	while(cin>>nCasos){
	stack<int> st;
	queue<int> q;
	priority_queue<int> pq;
	int tipo[3]={1,1,1};
	while(nCasos--){
		int op,num;cin>>op>>num;
		if (op==1){
			if(tipo[0]){st.push(num);}
			if(tipo[1]){q.push(num);}
			if(tipo[2]){pq.push(num);}}
		else if(op==2){
			if(tipo[0]){
				if(!st.empty()&&st.top()==num) st.pop();
				else tipo[0]=0;}
			if(tipo[1]){
        if(!q.empty()&&q.front()==num) q.pop();
        else tipo[1]=0;}
			if(tipo[2]){
        if(!pq.empty()&&pq.top()==num) pq.pop();
      else tipo[2]=0;}}}
	int sum=tipo[0]+tipo[1]+tipo[2];
	if(sum==0){cout<<"impossible"<<endl;}
	else if(sum>1){cout<<"not sure"<<endl;}
	else if(tipo[0]){cout<<"stack"<<endl;}
	else if(tipo[1]){cout<<"queue"<<endl;}
	else if(tipo[2]){cout<<"priority queue"<<endl;}
	}
	return 0;}

