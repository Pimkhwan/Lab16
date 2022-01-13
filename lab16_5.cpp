#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *w,int *x,int *y,int *z){
	
	int r = rand()%5;
	int key1,key2,key3,key4,key5,key6;
	if(r == 0){
		key1 = *w;
		*w = *x;
		*x = key1;
	}else if(r == 1){
		key2 = *w;
		*w = *y;
		*y = key2;
	}else if(r == 2){
		key3 = *w;
		*w = *z;
		*z = key3;
	}else if(r == 3){
		key4 = *x;
		*x = *y;
		*y = key4;
	}else if(r == 4){
		key5 =*x;
		*x = *z;
		*z = key5;
	}else if(r == 5){
		key6 = *y;
		*y = *z;
		*z = key6;
	}
}