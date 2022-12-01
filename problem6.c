#include<stdio.h>
#include<string.h>

char make_uppercase(char s[]);
int main()
{
    char s[101];

    fgets(s, sizeof(s), stdin);
    make_uppercase(s);
    return 0;
}
char make_uppercase(char s[]){
    for(int i=0; i<strlen(s)-1; i++){
        if((s[i]-96)%2==0){
            s[i]=s[i]-32;
        }
    }
    puts(s);
}