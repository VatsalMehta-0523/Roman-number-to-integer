#include <stdio.h>
#include <string.h>
int Rom_int(char ch );

int main(){
    char rom[5];                  // stores roman numbers in array of character
    int sum = 0 ;                 // to store final result of integer equivalent
    int n = strlen(rom);
    printf("PLEASE note that \nThis C code is Accurate only for roman number between 1 to 10\n");
    printf("\nenter ROMAN number you want to convert into integer : ");

    gets(rom);                    // scans roman number

    char s1  = rom[0] , s2 = rom[1] ;
    int x = Rom_int( s1 ) , y = Rom_int( s2 ) ;

 /*
 now we have 2 cases
 case 1 :                      case 2 :
 integer value of s1           integer value of s1
 is less than s2               is greater than s2

 sum = s2 - s1                 sum is simple addition
 eg IV                         of all individual integer equivalent
 sum = 5 - 1 = 4               eg VI
                               sum = 5 + 1 = 6
 */


    if ( x < y ) {                 // case 1
        sum = y - x ;
    }
    else{                          // case 2
        for (int i = 0; rom[i] ; i++){
            sum += Rom_int( rom[i] ) ;
        }
    }
    printf("The integer equivalent of [ %s ] is : %d ", rom , sum );
    return 0;
}

int Rom_int(char ch ){
    if (ch == 'I'|| ch == 'i'  ){
        return 1 ;
    }
    else if (ch == 'V' || ch == 'v'){
        return 5 ;
    }
    else if (ch == 'X' || ch == 'x'){
        return 10 ;
    }

}
