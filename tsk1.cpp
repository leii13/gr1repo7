int nwd(int a, int b) {
do {
	if(a > b) a=a-b;
	else b=b-a;
}
while(a!=b);
return a;
}
