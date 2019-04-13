using namespace std;

int pierwsza(int n){
    for (int i = 2; i <= n/2; ++i){
        if (n%i == 0) {
	  cout << n << " jest pierwsza ";
	  break;
	}	
    }
    cout << n << " nie jest pierwza";
}
