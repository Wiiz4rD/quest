// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    long int local_1044;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
 
    local_1044 = 1686261886;
    
    srand(local_1044);
    iVar1 = rand();
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    iVar7 = rand();
    
    printf("iVar1=%d\n", iVar1);
    printf("%02x\n", iVar1 & 0xFF);
    printf("iVar2=%d\n", iVar2);
    printf("%02x\n", iVar2 & 0xFF);
    printf("iVar3=%d\n", iVar3);
    printf("%02x\n", iVar3 & 0xFF);
    printf("iVar4=%d\n", iVar4);
    printf("%02x\n", iVar4 & 0xFF);
    printf("iVar5=%d\n", iVar5);
    printf("%02x\n", iVar5 & 0xFF);
    printf("iVar6=%d\n", iVar6);
    printf("%02x\n", iVar6 & 0xFF);
    printf("iVar7=%d\n", iVar7);
    
    srand(local_1044);
    for (int i = 0 ; i < 8*(3904-8)/8; i++ ) {
        printf("%02x, ", rand() & 0xFF);
    }
    

    return 0;
}