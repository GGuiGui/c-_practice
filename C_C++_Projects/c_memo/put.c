#include <stdio.h>

void option(FILE * f, int n);

int main(){
    FILE * fp;
    char * msg = "1: 내용입력, 2: 파일 내용 보기, 0: 종료\n";
    int select=1;
    char ch;

    while(select){
        printf("%s", msg);
        scanf("%d", &select);
        while((ch = getchar()) != '\n');
        option(fp, select);
    }
    return 0;
}

void option(FILE * f, int n){
    char t[100];
    char ch;
    if (n == 1){
        printf("내용을 입력하세요:\n");
        scanf("%[^\n]s", t);//입력받음
        f = fopen("memo.txt", "a+");
        fprintf(f, "%s\n", t);//입력받은 변수내용을 파일에 넣음
        fclose(f);
    }

    else if(n==2){
        f = fopen("memo.txt", "r+");
        while(fgets(t, sizeof(t), f) != NULL)    printf("%s", t);//fgets로 fp내용을 insert에 저장함
        fclose(f);
    }
}