#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5

int menu;

int main(){
    printf(" - Tugas Quiz Stack and Queue -\n");
    printf(" 1. Stack String\n");
    printf(" 2. Queue Integer\n");
    printf(" 3. Penjelasan Stack\n");
    printf(" 4. Penjelasan Queue\n");
    printf(" 9. Exit\n\n");
    printf(" Input Pilihan : ");
    scanf("%d", &menu);
    switch(menu){
    case 1:
        system("cls");
        inisialisasi();
        stackinteger();
        break;
    case 2:
        system("cls");
        integer();
        break;
    case 3:
        system("cls");
        artistack();
        break;
    case 4:
        system("cls");
        artiqueue();
        break;
    case 9:
        system("cls");
        printf(" Thank you for trying.");
        getch();
        break;
    default:
        fflush(stdin);
        printf(" SALAH INPUT YGY!!!");
        getch();
        system("cls");
        main();
    }
}

struct Tumpukan{
    char data[5][50];
    int top;
}tumpuk;

int isEmpty(){
    if(tumpuk.top == -1){
        return 1;
        }else{
    return 0;
    }
}

int isFull(){
    if(tumpuk.top == MAX-1){
        return 1;
        }else{
    return 0;
    }
}

void inisialisasi(){
    tumpuk.top = -1;
}

void push(){
    char temp[30];
    if(isFull() != 1){
        tumpuk.top++;
        system("cls");
        printf(" Masukkan data: ");
        scanf("%s",&temp);
        strcpy(tumpuk.data[tumpuk.top],temp);
        printf("\n Data %s berhasil di input.\n",tumpuk.data[tumpuk.top]);
        getch();
    }else{
        printf("Data sudah penuh");
        getch();
    }
}

void pop(){
    if(isEmpty() != 1){
        system("cls");
        printf(" Data %s telah dibuang\n",tumpuk.data[tumpuk.top]);
        getch();
        tumpuk.top--;
    }else{
        system("cls");
        printf(" Data masih kosong.\n");
        getch();
    }
}

void printData(){
    if(isEmpty() !=1){
        system("cls");
        printf(" Data adalah:");
        for(int i=tumpuk.top;i>=0;i--){
            printf(" %s",tumpuk.data[i]);
        }
    getch();
    }else{
        printf(" Data masih kosong\n");
        getch();
    }
}

void stackinteger(){
    system("cls");
    printf(" - Stack String -\n");
    printf(" 1. Push Stack\n");
    printf(" 2. Pop Stack\n");
    printf(" 3. Print Stack\n");
    printf(" 4. Clear Stack\n");
    printf(" 5. Return Main Menu\n\n");
    printf(" Input pilihan: ");
    scanf("%d",&menu);
    switch(menu){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            printData();
            break;
        case 4:
            if(isEmpty()){
                system("cls");
                printf(" Data masih kosong!\n");
                getch();
            }else{
                inisialisasi();
                system("cls");
                printf(" Data telah di reset!\n");
                getch();
            }
            break;
        case 5:
            system("cls");
            main();
            break;
        default:
            fflush(stdin);
            printf(" SALAH INPUT YGY!!!");
            getch();
            stackinteger();
    }
}

struct Queue {
    int front;
    int rear;
    char data[MAX][50];
}q;

void integer(){
    printf(" - Queue Integer -\n");
    printf(" 1. Enqueue Int\n");
    printf(" 2. Dequeue Int\n");
    printf(" 3. Print Queue\n");
    printf(" 4. Delete Queue\n");
    printf(" 5. Return Main Menu\n\n");
    printf(" Input Pilihan : ");
    scanf("%d", &menu);
    switch(menu){
    case 1:
        system("cls");
        enqueue();
        break;
    case 2:
        system("cls");
        dequeue();
        break;
    case 3:
        system("cls");
        printqueue();
        break;
    case 4:
        system("cls");
        deletequeue();
        break;
    case 5:
        system("cls");
        main();
        break;
    default:
        fflush(stdin);
        printf(" SALAH INPUT YGY!!");
        getch();
        system("cls");
        integer();
    }
}

void enqueue() {
    char temp[50];
    if(q.rear == MAX) {
        printf(" Queue Full.");
        getch();
        system("cls");
        integer();
    }else{
        printf(" Input data : ");
        scanf("%s", temp);
        strcpy(q.data[q.rear], temp);
        q.rear++;
        printf(" Data Ditambahkan ke Dalam Queue.");
        getch();
        system("cls");
        integer();
    }
}

void dequeue(){
    if(q.front == q.rear){
        printf(" Queue Empty.");
        getch();
        system("cls");
        integer();
    }else{
        printf(" Data %s Dibuang Dari Queue.", q.data[q.front]);
        for(int i = q.front; i < q.rear - 1; i++){
            strcpy(q.data[i], q.data[i+1]);
        }
        q.rear--;
        getch();
        system("cls");
        integer();
    }
}

void printqueue(){
    if(q.front == q.rear){
        printf(" Queue Empty.");
        getch();
        system("cls");
        integer();
    }else{
        printf(" Data Dalam Queue : ");
        for(int i = q.front; i < q.rear; i++){
            printf("%s ", q.data[i]);
        }
        printf("\n");
        getch();
        system("cls");
        integer();
    }
}
void deletequeue(){
    q.front = 0;
    q.rear = 0;
    printf(" Queue Dibuang.");
    getch();
    system("cls");
    integer();
}

void artistack(){
    printf(" - STACK -\n");
    printf(" Stack, atau tumpukan, adalah salah satu proses penyimpanan dan pengambilan data\n");
    printf(" yang menggunakan sistem penyimpanan LIFO, atau Last In First Out\n");
    printf(" atau dalam bahasa diartikan sebagai Terakhir Masuk, Pertama Keluar\n");
    printf(" Yang berarti Data yg masuk/disimpan terakhir, akan dikeluarkan pertama\n");
    printf(" Stack adalah sebuah kumpulan data dimana data diletakkan di atas data yang lain\n\n");
    printf(" - Function Push: Untuk menambahkan elemen ke dalam stack\n");
    printf(" - Function Pop: Untuk menghapus elemen dari urutan terakhir / bagian atas stack\n");
    printf(" - IsEmpty: Memeriksa apakah stack kosong, sedangkan IsFull: Memeriksa apakah stack penuh\n\n");
    system("pause");
    system("cls");
    main();
}
void artiqueue(){
    printf(" - QUEUE -\n");
    printf(" Queue, atau antrian, adalah salah satu proses penyimpanan dan pengambilan data\n");
    printf(" yang menggunakan sistem penyimpanan FIFO, atau First In First Out\n");
    printf(" atau dalam bahasa diartikan sebagai Pertama Masuk, Pertama Keluar\n");
    printf(" Yang berarti Data yg masuk/disimpan pertama, akan dikeluarkan pertama\n\n");
    printf(" - Function Enqueue: Berfungsi untuk menambahkan elemen ke akhir antrian\n");
    printf(" - Function Dequeue: Berfungsi untuk menghapus elemen dari depan antrian\n");
    printf(" - IsEmpty: Memeriksa apakah antrian kosong, sedangkan IsFull: Memeriksa apakah antrian penuh\n\n");
    system("pause");
    system("cls");
    main();
}
