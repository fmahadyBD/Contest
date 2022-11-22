#include <stdio.h>

int main()
{
    int T;
    char id;
    scanf("%d", &T);
    for(int i=0;i<T;i++)
    {
        scanf(" %c",&id);

        if (id== 'B' || id == 'b')
        {
            printf("BattleShip\n");
        }
        else if (id == 'C' || id == 'c')
        {
            printf("Cruiser\n");
        }
        else if (id == 'D' || id == 'd')
        {
            printf("Destroyer\n");
        }
        else if (id == 'F' || id == 'f')
        {
            printf("Frigate\n");
        }
    }
    return 0;
}