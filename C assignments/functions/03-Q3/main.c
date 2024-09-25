#include <stdio.h>
#include <string.h>
void reverse (char *x , int start , int end ){
    if (start >= end) {
        return;
    }
    char temp = x[start];
    x[start]=x[end];
    x[end]=temp;
    reverse(x,start+1,end-1);
}
int main() {
    char word[100] ;
    fgets(word,sizeof word ,stdin );
    int length=strlen(word);
    reverse(word,0,length-1);
    printf("%s",word);
    return 0;
}
