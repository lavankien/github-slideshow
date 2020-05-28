#include <iostream>
#include <math.h>

using namespace std;
bool sodao(int n){
     int i=0; int a[100]; int temp=0;
    while(n>0){
     temp = n%10; 
	 a[i]==temp; 
	 i++;
     n = n/10;
    }
    for (int j=0; j<i; j++)
    	if ((a[j]!=0)||(a[j]!=6)||(a[j]!=8)) {return false; break;
	}
	return true;
 }
bool ts(long n)
{
	int t=0;int a[100]; int i=0; int res=0;
	while (n)
	{
		a[i]=n%10;
		res = res*10 +a[i];
		i++;
		n/=10;
	}
	for (int j=0;j<i;j++)
		t+=a[j];
	if ((t%10==0)) return true;
	return false;
}
long sodaonguoc(int n){
    int temp =0, res = 0;
    while(n>0){
     temp = n%10;
     res = res*10 +temp;
     n = n/10;
    }
    return res;
   }
int main()
{
	for (long i=1000000; i<=999999999;i++)
		if (ts(i)&&(sodao(i))&&(sodaonguoc(i)==i)) cout<<i<<"\t";

	system("pause");
	return 0;
}
