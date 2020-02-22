#include <stdio.h>

int contains(char* string, char* word);

char* S = "abppplee";

char *D[] = {"able", "ale", "apple", "bale", "kangaroo"};

int main(int argc, char * argv){

    int answer = -1;
    int curMax = 0;

    for(int i=0;i<sizeof(D) && D[i];i++){
        if(contains(S, D[i])>curMax){
            answer = i;
        }
    }
    answer>=0?printf("The answer is: %s\n", D[answer]):printf("No answer..!!");
}



int contains(char* string, char* word){
    int contains = 0;
    int curWordIndex = 0;

    for(int i=0;i<sizeof(string)-1;i++){
        if(string[i]!=word[curWordIndex]){
            contains = 0;
        }
        else curWordIndex++;
        if(word[curWordIndex]=='\0'){
            contains=1;
            break;
        }
    }
    return contains==0?contains:curWordIndex;
}