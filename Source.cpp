
#include<iostream>
using namespace std;
int main(){
	int n;
	float x;
	cout << "enter two numbers:";
	cin >> x;
	cin >> n;
	while (n < 0 ) {
		cout << "ERROR"<<endl;        //Verifing if it isn't negative number
		cin >> n;

	}
    float sum = x;
	float temp = x;
	for (float i = 2; i <= n; i++) {
		x = temp;
		float menus_one = -1;        
		float one = 1;
		
		for (int j = 1; j < 2*i - 1; j++) { 
			x = x * temp;                    //does the x pow of the proguession, defined to x ^ 2i - 1
		}
		for (int k = 1; k < i; k++) {
			one = one * menus_one;          //does pow of -1, if it pair the result will be 1, if odd will be -1
	}
		sum = sum + ((one /( 2 * i - 1))*x);  
		
	}
	cout << sum;
	


return 0;
}

