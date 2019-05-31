#include<stdio.h>

struct Sertivor {
    char id[20];
    char name[20];
    unsigned int  wage;
    unsigned int  work_hours;
    unsigned int  pay;
};

int salc(struct Sertivor *);   
void show(struct Sertivor *); 

int main(void){
    int number;
    int i;

    struct Sertivor sertivor[4]; 

    printf("有幾個工讀生?:");
    scanf("%d", &number);

    for(i=0;i<number;++i){
        printf("這是第%d筆資料\n\n", i+1);
        printf("pls entering employee id:");
        scanf("%s", sertivor[i].id);
        printf("pls entering employee name:");
        scanf("%s", sertivor[i].name);
        printf("pls entering employee wage: ");
        scanf("%d", &sertivor[i].wage);
        printf("pls entering employee work_hours:");
        scanf("%d", &sertivor[i].work_hours);

        salc(&sertivor[i]);
    }

    for(i=0;i<number;++i) {
    	show(&sertivor[i]);
	}

	return 0;
}

int salc(struct Sertivor *ser) { //計算薪資 
    (ser->pay)=(ser->wage)*(ser->work_hours);
    return ser->pay;
}

void show(struct Sertivor *show) { //列出結果 
    printf("\n\n%s的資料---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("NAME:%s\n",show->name);
    printf("WAGE:%d\n",show->wage);
    printf("WORK_HOURS:%d\n",show->work_hours);
    printf("PAY:%d\n",show->pay);
    printf("-------------\n");
}
