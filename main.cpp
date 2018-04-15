#include <iostream>
#include "hasPath.h"
using namespace std;

int main() {
	int rows=3;
	int cols=4;
	const char *matrix="abtgcfcsjdeh";
	const char *str="bfch";
	if (hasPath(matrix,rows,cols,str)) cout<<"Found."<<endl;
	else cout<<"Not found."<<endl;
	return 0;
}
