#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
	int ans = 0;
	for(int i=0;i<n;i++){
		for (int j=1;j<n;j++){
			if(arr[i]==arr[j]){
				ans++;
				if(ans>1){
					return arr[j];
				}
			}
		}
	}
	//	for(int i=0;i<n;i++){
	//		if(arr[i]!=0){
	//			int ans = arr[i];
	//		}
	
			return ans;
//}

}
int main(){
	int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Element: "<<endl;
		cin>>arr[i];
	}
	int ans = duplicate(arr,n);
	cout<<ans;
	return 0;
}
