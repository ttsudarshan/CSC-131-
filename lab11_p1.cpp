//Return the size of the file//
#include <iostream>
#include <fstream>
#include<stdio.h>

using namespace std;

int main(int argc, char* argv[]) {
      FILE *fp;

	
	  fp = fopen(argv[1], "r");
      int size = 0;
      while(getc(fp) != EOF){
        
        size++;
      }


	
	  fclose(fp);
      printf("THe size of the file is %s: %d bytes \n", argv[1], size);
	  return 0;

}