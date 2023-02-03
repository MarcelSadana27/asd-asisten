#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");
    int n;
    printf("====================\n");
    printf(" Quiz ASD (Asisten) \n");
    printf("====================\n");
    printf(" 1. Level 1         \n");
    printf(" 2. Level 2         \n");
    printf(" 3. Level 3         \n");
    printf(" 4. Exit            \n");
    printf("====================\n");
    printf(" Pilihan anda: ");
    scanf("%d",&n);
    switch(n){
        case 1:
            le1();
            break;
        case 2:
            le2();
            break;
        case 3:
            le3();
            break;
        case 4:
            system("cls");
            printf("Terima\n");
            printf("Kasih\n");
            printf("Sudah\n");
            printf("Mencoba\n");
            printf(":D\n");
            break;
    }
}

void le1()
{
    int a, b, c;
    system("cls");
    printf(" L E V E L  1\n\n");
    printf("Input angka: ");
    scanf("%d",&b);
    for(a=0; a<=b+1; a++){
        for(c=0; c<a; c++){
            printf("%d ", a-1+c);
            }
        printf("\n");
        }
    printf("Press ENTER to continue...");
    getch();
    main();
}

void le2()
{
    int d, e, f;
    system("cls");
    printf(" L E V E L  2\n\n");
    printf("Input angka: ");
    scanf("%d",&e);
    for(d=1; d<=e; d++){
        for(f=1; f<=d; f++){
        printf("%d ", f*d);
        }
        printf("\n");
    }
    printf("Press ENTER to continue...");
    getch();
    main();
}

void le3()
{
    int g, h, i;
    system("cls");
    printf(" L E V E L  3\n\n");
    printf("Input angka (Maksimum angka yang di input adalah 9): ");
    scanf("%d",&i);
    for(g=0;g<i;g++){
        for(h=g;h<i-1;h++){
            printf(" ");
        }
        for(h=0;h<=g;h++){
            printf("%d",h+1);
        }
        for(h=g;h>0;h--){
            printf("%d",h);
        }
        printf("\n");
    }

    for(g=i-1;g>0;g--){
        for(h=g;h<=i-1;h++){
            printf(" ");
        }
        for(h=1;h<=g;h++){
            printf("%d",h);
        }
        for(h=g-1;h>=1;h--){
            printf("%d",h);
        }
        printf("\n");
    }
    printf("Press ENTER to continue...");
    getch();
    main();
}
