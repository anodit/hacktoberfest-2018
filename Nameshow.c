#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,c;
    char name[30];
    printf("\n\n\t\t\t!!!!!!!!!!!!!!! NAME SHOW  !!!!!!!!!!!!!!!");
    printf("\n\n\tEnter the character present in your Firstname : ");
    scanf("%d",&c);
    printf("\n\n\tEnter your First name : ");
    scanf("%s",name);
    printf("\n\n");
    for(i=0;i<c;i++)
    {
        if(name[i]=='a' || name[i]=='A')
        {
            printf("   *\n  * *\n * * *\n*     *\n*      *");
            printf("\n");
        }
        else if(name[i]=='b' || name[i]=='B')
        {
            printf("\n* * *\n*   *\n* * *\n*   *\n* * *");
            printf("\n");
        }
        else if(name[i]=='c' || name[i]=='C')
        {
            printf("\n* * *\n*\n*\n* * *");
            printf("\n");
        }
         else if(name[i]=='d' || name[i]=='D')
        {
            printf("\n* * *\n*   *\n*   *\n* * *");
            printf("\n");
        }
        else if(name[i]=='e' || name[i]=='E')
        {
            printf("\n* * *\n*\n* * *\n*\n* * *");
            printf("\n");
        }
         else if(name[i]=='f' || name[i]=='F')
        {
            printf("\n* * *\n*\n* * *\n*\n*");
            printf("\n");
        }
        else if(name[i]=='g' || name[i]=='G')
        {
            printf("\n* * *\n*\n* ***\n*   *\n* * *");
            printf("\n");
        } else if(name[i]=='h' || name[i]=='H')
        {
            printf("\n*     *\n*     *\n* * * *\n*     *\n*     *");
            printf("\n");
        }
        else if(name[i]=='i' || name[i]=='I')
        {
            printf("\n* * * * *\n    *\n    *\n    *\n* * * * *");
            printf("\n");
        } else if(name[i]=='j' || name[i]=='J')
        {
            printf("\n* * * * *\n    *\n    *\n*   *\n* * *");
            printf("\n");
        }
        else if(name[i]=='k' || name[i]=='K')
        {
            printf("\n*    *\n*  *\n*\n*  *\n*    *");
            printf("\n");
        }
        else if(name[i]=='l' || name[i]=='L')
        {
            printf("\n*\n*\n*\n*\n* * * *");
            printf("\n");
        }
        else if(name[i]=='m' || name[i]=='M')
        {
            printf("\n*       *\n* *   * *\n*  * *  *\n*   *   *\n*       *\n*       *");
            printf("\n");
        }
        else if(name[i]=='n' || name[i]=='N')
        {
            printf("\n*     *\n* *   *\n*  *  *\n*   * *\n*     *");
            printf("\n");
        }
        else if(name[i]=='o' || name[i]=='O')
        {
            printf("\n* * * *\n*     *\n*     *\n*     *\n* * * *");
            printf("\n");
        }
         else if(name[i]=='p' || name[i]=='P')
        {
            printf("\n* * * *\n*     *\n* * * *\n*\n*\n*");
            printf("\n");
        }
        else if(name[i]=='q' || name[i]=='Q')
        {
            printf("\n* * * *\n*     *\n*     *\n*     *\n* * * *\n      *\n       *");
            printf("\n");
        }
        else if(name[i]=='r' || name[i]=='R')
        {
            printf("\n* * * *\n*     *\n* * * *\n*  *\n*    *\n*      *");
            printf("\n");
        }
        else if(name[i]=='s' || name[i]=='S')
        {
            printf("\n* * * *\n*\n*\n* * * *\n      *\n      *\n* * * *");
            printf("\n");
        }
         else if(name[i]=='t' || name[i]=='T')
        {
            printf("\n* * * * *\n    *\n    *\n    *\n    *");
            printf("\n");
        }
        else if(name[i]=='u' || name[i]=='U')
        {
            printf("\n*     *\n*     *\n*     *\n*     *\n* * * *");
            printf("\n");
        }
         else if(name[i]=='v' || name[i]=='V')
        {
            printf("\n*       *\n *     *\n  *   *\n   * *\n    *");
            printf("\n");
        }
          else if(name[i]=='w' || name[i]=='W')
        {
            printf("\n*     *\n*     *\n*  *  *\n*  *  *");
            printf("\n");
        }
        else if(name[i]=='x' || name[i]=='X')
        {
            printf("\n*    *\n *  *\n  *\n *  *\n*    *");
            printf("\n");
        }
         else if(name[i]=='y' || name[i]=='Y')
        {
            printf("\n*    *\n *  *\n  *\n *\n*");
            printf("\n");
        }
        else if(name[i]=='z' || name[i]=='Z')
        {
            printf("\n* * * *\n    *\n  *\n* * * *");
            printf("\n");
        }
    }
    printf("\n%c",name[i]);
    return 0;
}
