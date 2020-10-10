#include <stdio.h>
#include <math.h>
#include <string.h>
#include <algorithm>
 
using namespace std;
 
struct student{
    char num[3];
    char name[20];
    char sex;
    int age;
}students[1000];
 
int main()
{
    int n, m, x;
    while(scanf("%d", &n)!=EOF){
        for(int i=0; i<n; i++){
            scanf("%s", students[i].num);
            getchar();
            scanf("%s", students[i].name);
            getchar();
            scanf("%c", &students[i].sex);
            scanf("%d", &students[i].age);
            printf("--\n%s\n%s\n%c\n%d\n--", students[i].num, students[i].name, students[i].sex, students[i].age);
        }
        printf("over");
 
    }
    return 0;
}