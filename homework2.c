//202611716218
//刘逸轩
#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a==0){
        printf("零");
    }else{
        if(a<0){printf("负数");}
        else{printf("正数");}
    }
    return 0;
}
