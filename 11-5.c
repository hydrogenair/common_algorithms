#include <stdio.h>
int str_chnum(const char *s,int c){
    int i=0;
    if(*s==c){
        return 1;
    }
    while (*s++){
        i++;
        if(*s==c){
            return i; 
        }
    }
   return -1;
}

int main() {
    char s[128] ;
    char c ;
    printf("要计数的字符是：");
    scanf("%c", &c);
    printf("请输入字符串:");
    scanf("%s",s);
    
    printf("%d", str_chnum(s, c));
}