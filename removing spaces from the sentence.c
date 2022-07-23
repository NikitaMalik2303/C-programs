#include <stdio.h>;

int main(){
    int i=0,j=0;
    const int num=1000;
    char inputSen[num],outputSen[num];
    printf("please enter the sentence\n");
    gets(inputSen);

    while (i<num){

        outputSen[j]=inputSen[i];
        i++;
        j++;
        if(inputSen[i]=32){
            i++;
            continue;
        }
        continue;
    }
    printf("the new sentence is:");
    puts(outputSen);

    return 0;
}
