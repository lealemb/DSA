#include<iostream>
int BinarySearch(int List[], int key, int n);
 using namespace std;
 int main(){
 	int List[]={12,22,33,44,55};
 	int k=22;
 	int n=sizeof(List)/sizeof(List[0]);
 	int i= BinarySearch(List, k,n);
 	if(i==-1)
 	cout<<"The search item is not found!"<<endl;
 	else
 	cout<<"The search item is found at idex position:"<<i<<endl;
 	return 0;
 }
 
 int BinarySearch(int List[], int key,int n){
 	int found = 0,index= 0;
 	int top= n-1,bottom= 0,middle;
 	 do{
 	 	middle=(bottom+top)/2;
 	 	
 	 	if(key==List[middle]){		  
 	 	 	found=1;
 	 	index=middle;
 	 	
 	}
 	 	else
 	 	{
 	 		
 	 		if(key<List[middle])
 	 		
 	 		top= middle-1;
 	 		else
 	 		bottom =middle+1;
 	 		
		  }
	  }
	  while(found== 0&& top>=bottom);
	  if(found==0)
	  index=-1;
	   else
	   
	   index=middle;
	   return index;
 }
