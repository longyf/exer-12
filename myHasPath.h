#ifndef my_has_path_h
#define my_has_path_h
#include <iostream>
#include <stdexcept>
using namespace std;
bool hasPathCore(const char *matrix, int rows, int cols, int row, int col, int &pathLength, const char *str, bool *visited);

bool hasPath(const char *matrix, int rows, int cols, const char *str) {
	if (matrix==nullptr||rows<=0||cols<=0||str==nullptr)
		throw invalid_argument("Pay attention to the input.");

	//初始化visited数组。
	bool *visited=new bool [rows*cols];
	memset(visited,0,rows*cols);

	int pathLength=0;
	for (int i=0; i!=rows; ++i) {
		for (int j=0; j!=cols; ++j) {
			if ( hasPathCore(matrix, rows, cols, i, j, pathLength, str, visited) ) return true;
		}
	}

	delete []visited;
	return false;
}

bool hasPathCore(const char *matrix, int rows, int cols, int row, int col, int &pathLength, const char *str, bool *visited) {

	cout<<row<<" "<<col<<endl;

	int index=row*cols+col;

	//到str的尾巴了。
	if (str[pathLength]=='\0') return true;

	bool mark=false;

	if ((row>=0)&&(row<rows)&&(col>=0)&&(col<cols)&&(matrix[index]==str[pathLength])&&(!(visited[index]))) {
		++pathLength;
		visited[index]=true;

		if (hasPathCore(matrix,rows,cols,row,col-1,pathLength,str,visited)||
			hasPathCore(matrix,rows,cols,row-1,col,pathLength,str,visited)||
			hasPathCore(matrix,rows,cols,row,col+1,pathLength,str,visited)||
			hasPathCore(matrix,rows,cols,row+1,col,pathLength,str,visited)) {
				mark=true;
		}
		else {
			--pathLength;
			visited[index]=false;
		}
	}


	return mark;
}
#endif
