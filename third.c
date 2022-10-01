/*marks cummilative and percentage calculation*/
#include <stdio.h>
int main(){
    int tot, math, sci, eng, hin, sst;
    float per;
    printf("Enter marks obtained in math: ");
    scanf("%d", &math);
    printf("Enter marks obtained in science: ");
    scanf("%d", &sci);
    printf("Enter marks obtained in eng: ");
    scanf("%d", &eng);
    printf("Enter marks obtained in hindi: ");
    scanf("%d", &hin);
    printf("Enter marks obtained in sst: ");
    scanf("%d", &sst);

    tot = math + sci + eng + hin + sst;
    printf("Total marks obtained out of 500 are %d \n", tot);

    per = (tot/5);
    printf("Percentage scored is %f", per);

    return 0;
}