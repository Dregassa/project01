#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char ** parse_args(char * args){
	char ** parse_args(char * s1){
	char ** ret = (char **) calloc (6, sizeof(char*));
	int i = 0;
	for (;i<5;i++){
		*(ret + i) = strsep(&s1," "); 
  	}
	return ret;
}

char * 

int main(){
	while (1){
		pid_t pid = fork();	
		if (pid == 0){
			char args[256];
			args = fget(512);
			char ** parsed = parse_args(args);
			execvp(parsed[0], parsed);
		}
	
	}
	return 0;
}
