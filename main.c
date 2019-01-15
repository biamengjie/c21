#include <stdio.h>

int main()
{
    int qian = 0;
    printf("jinrucunqianquqianguanlixitong:\n");
    while (1)
    {
        printf("1---cunqian:\n");
        printf("2---quqian:\n");
        printf("3---yue:\n");
        printf("4---tuichu:\n");
        printf("qingshuruxiangyingdegongnengbianhao:\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            int cun;
            printf("qingshuruyaocunrudejine:\n");
            scanf("%d", &cun);
            qian += cun;
            printf("cunruchengong,dianjihuichejixu:\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            int qu;
            printf("qingshuruyaoquchudejine:\n");
            scanf("%d", &qu);
            if (qian < qu)
            {
                printf("yuebuzu,quqianshibai,dianjihuichetuichu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                qian -= qu;
                printf("quchuchenggong,dianjihuichejixu:\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 3)
        {

            printf("dangqianyuewei%d\n", qian);
            printf("dianjihuichejixu:\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("chengxujieshu:\n");
            break;
        }
    }
    return 0;
}