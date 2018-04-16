#include <iostream>
//#include "hasPath.h"
#include "myHasPath.h"
using namespace std;

void test1() {
    int rows=3;
    int cols=4;
    const char *matrix="abtgcfcsjdeh";
    const char *str="bfce";
    if (hasPath(matrix,rows,cols,str)) cout<<"Found."<<endl;
    else cout<<"Not found."<<endl;
}

void test2() {
    int rows=3;
    int cols=4;
    const char *matrix="abtgcfcsjdeh";
    const char *str="bfcf";
    if (hasPath(matrix,rows,cols,str)) cout<<"Found."<<endl;
    else cout<<"Not found."<<endl;
}

void test3() {
    int rows=1;
    int cols=4;
    const char *matrix="abcd";
    const char *str="abcd";
    if (hasPath(matrix,rows,cols,str)) cout<<"Found."<<endl;
    else cout<<"Not found."<<endl;
}

void test4() {
    int rows=4;
    int cols=1;
    const char *matrix="abcd";
    const char *str="abcd";
    if (hasPath(matrix,rows,cols,str)) cout<<"Found."<<endl;
    else cout<<"Not found."<<endl;
}

void test5() {
    int rows=1;
    int cols=4;
    const char *matrix="abcd";
    const char *str="abce";
    if (hasPath(matrix,rows,cols,str)) cout<<"Found."<<endl;
    else cout<<"Not found."<<endl;
}

void test6() {
    int rows=4;
    int cols=1;
    const char *matrix="abcd";
    const char *str="abce";
    if (hasPath(matrix,rows,cols,str)) cout<<"Found."<<endl;
    else cout<<"Not found."<<endl;
}

void test7() {
    int rows=4;
    int cols=1;
    const char *matrix="aaaa";
    const char *str="aaaaa";
    if (hasPath(matrix,rows,cols,str)) cout<<"Found."<<endl;
    else cout<<"Not found."<<endl;
}

void test8() {
    int rows=4;
    int cols=1;
    const char *matrix="aaaa";
    const char *str="aaa";
    if (hasPath(matrix,rows,cols,str)) cout<<"Found."<<endl;
    else cout<<"Not found."<<endl;
}

int main() {

/*	test1();
	test2();
	test3();
	test4();*/
	test5();
/*	test6();
	test7();
	test8();*/

	return 0;
}
