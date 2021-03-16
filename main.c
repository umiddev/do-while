#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    FILE *file = fopen("test.txt","w");

    int numbers[] = {56,58,4,5};

    size_t size = sizeof (numbers) / sizeof (int);


    printf("Iltmos son kiriting: ");
    int num1;
    scanf("%d",&num1);

    for (int i = 0;i<size;i++) {
    if (num1 == numbers[i]) {
    printf("siz qidirgan son: %d %d index,da\n",num1,i);
    fscanf(file,"%d",num1);
    fprintf(file,"Siz qidirgan %d element %d indexda",num1,i);

    }
}

fclose(file);
*/

/*
char natija;

 do{

    int num1,num2;
    printf("son kirit: ");
    scanf("%d%d",&num1,&num2);


    printf("%d + %d ->:%d\n",num1,num2,num1+num2);
    printf("yana qoshamizmi [h/Y]:");
    scanf(" %c",&natija);
    } while (natija == 'h' || natija == 'H');
    printf("Dastur yakunlandi bolakay!!!");
*/





int kattaSi=0;
char natija;
do{
   int num1,num2;
   printf("Iltmos son kiriting: ");
   scanf("%d%d",&num1,&num2);

   if (kattaSi > num1 && kattaSi > num2) {
        printf("katta son o'zgarmadi %d\n",kattaSi);
   } else if (num1 < num2) {
        printf("Ikkinchi son katta\n");
        kattaSi = num2;
   } else if (num2 < num1) {
        printf("Birinchi son katta\n");
        kattaSi = num1;
   }
    printf("davom etishni hohlaysizmi [h/Y]:");
    scanf(" %c",&natija);
    } while (natija == 'h' || natija == 'H');
    printf("Dastur yakunlandi");












    return 0;
}
