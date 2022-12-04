//He phuong trinh bac nhat 2 an
#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		double a1,b1,c1,a2,b2,c2;
		cin >> a1>>b1>>c1>>a2>>b2>>c2;
		double D,Dx,Dy;
		D = a1*b2-a2*b1;
		Dx=c1*b2-c2*b1;
		Dy=a1*c2-a2*c1;
		double x,y;
		if (D==0){
			if (Dx+Dy==0){
				cout << "Many solutions"<<endl;
			}
			else{
				cout << "No solution"<<endl;
			}
		}
		else {
			x = Dx/D;
			y = Dy/D;
			cout <<setprecision(6)<<fixed<<x<<" ";
			cout <<setprecision(6)<<fixed<<y;
			cout << endl;
		}
	
	}
	return 0;
}
