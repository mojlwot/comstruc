#include <stdio.h>
#include<ctype.h>
#include<string.h>
int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)) {
		printf("Accepted\n");}
	else{
		printf("Reject\n");
	}
}
int checkValidPass(char *ps) {
	int accepted=0;
	int digitcount=0,uppercount=0;
	char array[9]="";
	int uniqueupper=0;
	int len=strlen(ps);
	if(len<5||len>8) return 0;
	for(int i=0;i<len;i++){
		if(isdigit(ps[i])) digitcount++;
		if(isupper(ps[i])){
			int repeat=0;
			for(int j=0;j<uniqueupper;j++){
				if(array[j]==ps[i]){
					repeat=1;break;
				}
			}
			if(!repeat){
				array[uniqueupper]=ps[i];
				uniqueupper++;
			}
		}
	}
	if(digitcount>=2&&uniqueupper>=2) return 1;
	else return 0;
}
int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}
