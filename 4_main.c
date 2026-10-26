//202611716218
//刘逸轩
#include <stdio.h>

int main() 
{
float score;
scanf("%f", &score);
if (score < 0 || score > 100) {      
printf("输入无效");
} else if (score >= 90) {      
printf("A");
} else if (score >= 80) {       
printf("B");
} else if (score >= 70) {      
printf("C");
} else if (score >= 60) {       
printf("D");
} else {       
printf("E");
}

return 0;
}
