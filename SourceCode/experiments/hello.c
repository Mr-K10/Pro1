#include<stdio.h>
int hello(){
	printf("hello world");
	return 0;
}

void master_changes(){
	printf("Testing the merge conflict");
}

void Test_changes()
	printf("Changes in the test branchto test merge conflict");

int main(){
	hello();
	return 0;
}
