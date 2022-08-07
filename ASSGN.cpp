# include<iostream> 
using namespace std;
void calcus(){
	int n;    int therms;   float access;   float calcus;
	therms = 0;   access = 0;
	cout<<"Enter positive integer: ";
	cin>>n;
; 
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"Prime numbers below "<<n<<" are"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
    for(int x=2;x<n;x++){
    	int flag=0;
    	for(int i=2;i<=x/2;i++){
    		if(x%i==0){
    			flag=1; break;
	    	}
		}
		if (flag==0){
		cout<<x<<endl;
		therms+=x;
		access+=1;
	    }
	}
	calcus = therms/access;
	cout<<"The sum of the the printed prime numbers above is "<<therms<<endl;
	cout<<"The count of the prime numbers is "<<access<<endl;
	cout<<"The average of the sum of the prime numbers above is "<<calcus<<endl;
}
int main(){
	calcus();
	return(0); 
	}
// I Caleb James-Ocloo pledge that I did this assignment by myself
