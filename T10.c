#include <stdio.h>

int main()
{   
    int age;
    printf("Enter Your Age\n");
    
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age); 
    if (age>=18)
    {
        printf("You Can Drive!");
    }
    else if(age<=12){

        printf("you are not even a teen so you cant drive\n");
    }
    else if(age<=6){

       printf("Drive Baby Car Yep\n")
    }
    
    else {
        printf("You can't Drive!");
    }
    
    
    
    return 0;
}
