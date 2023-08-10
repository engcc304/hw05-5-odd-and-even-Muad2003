/*
    จงรับตัวเลขจากผู้ใช้ และให้แสดงผลลัพธ์ว่าเป็นเลขคู่หรือเลขคี่
    
    Test case:
        Input :
            15

    Output:
        15 is an odd integer

    Test case:
        Input :
            -22

    Output:
        -22 is an even integer

*/
#include<stdio.h>

int main()
{
    int input ;
    printf( "Input :\n" ) ;
    scanf( "%d", &input ) ;

    if (input % 2 == 0)
    {
        printf( "%d is an even integer", input ) ;
    } 
    
    else if ( input % 2 == 1 or input % 2 == -1 ) {
        printf( "%d is an odd integer", input ) ;
    }
    
    return 0;
}
