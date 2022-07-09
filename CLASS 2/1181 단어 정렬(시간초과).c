#define _CRT_SECURE_NO_WARNINGS // scanf사용시 에러무시
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    char** str;
    str = (char**)malloc(sizeof(char*) * N);
    
    char input_str[51];
    int dpindex = -1;

    //이중포인터를 만들어서 인덱스로 하나하나 문자열 input
    int count = N;
    while (count)
    {
        scanf("%s", input_str);
        int i = 0;
        while (input_str[i] != '\0')
        {
            i++;
        }

        dpindex++;
        str[dpindex] = (char*)malloc(sizeof(char) * (i + 1));

        i = 0;
        while (input_str[i] != '\0')
        {
            str[dpindex][i] = input_str[i];
            i++;
        }
        str[dpindex][i] = '\0';
        //strcpy(str[dpindex], input_str);
        count--;
    }

    //길이, 사전순으로 배열하기
    count = N - 1;
    int t = 0;
    while (count)
    {
        int count2 = N - 1 - t;
        int i = 0;
        while (count2)
        {
            if (strlen(str[i]) > strlen(str[i + 1]))
            {
                char* tem;
                tem = str[i + 1];
                str[i + 1] = str[i];
                str[i] = tem;
            }
            else if (strlen(str[i]) == strlen(str[i + 1]))
            {
                if (strcmp(str[i], str[i + 1]) > 0)
                {
                    char* tem;
                    tem = str[i + 1];
                    str[i + 1] = str[i];
                    str[i] = tem;
                }
            }
            i++;
            count2--;
        }
        t++;
        count--;
    }

    //출력하기
    int j = 0;
    while (N)
    {
        int flage = 1;
        for (int i = 0; i < j; i++)
        {
            if (strcmp(str[i], str[j]) == 0)
                flage = 0;
        }
        
        if(flage != 0)
            printf("%s\n", str[j]);
        j++;
        N--;
    }

    return (0);
}
