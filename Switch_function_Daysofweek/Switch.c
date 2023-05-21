// this is just some fun with Switch case statements and some music,
// to emulate the switch case, I had the idea of inserting some music with the Windows beep

#include<stdio.h>
#include<windows.h>

int main ()
{
char note, scale;

printf("DOREMI---by MDS 2023");
printf("Insira Nota desejada (4 oitava do piano): (C,D,E,F,G,A,B) \n");
scanf(" %c", &note);

switch (note)
{
            case 'C':
            Beep (262, 2000);
            printf("This note is %c4, - DO\n",note);
            break;
                    case 'D':
                    printf("This note is %c4 - RE\n",note);
                    Beep (294, 2000);
            break;
                    case 'E':
                    printf("This note is %c4 - MI\n",note);
                    Beep (330, 2000);
            break;
                    case 'F':
                    printf("This note is %c4 - FA\n",note);
                    Beep (350, 2000);
            break;
                    case 'G':
                    printf("This note is %c4 - SOL\n",note);
                    Beep (392, 2000);
            break;
                    case 'A':
                    printf("This note is %c4 - LA\n",note);
                    Beep (440, 2000);
            break;
                    case 'B':
                    printf("This note is %c4 - SI\n",note);
                    Beep (493, 2000);
            break;
            default:
            printf("Enter a musical scale letter\n");
}

printf( "Would you like to play the whole scale (Y/N)?");
scanf(" %c", &scale);

if (scale == 'Y' || scale == 'y')
{
    Beep (262, 1500);
    Beep (294, 1500);
    Beep (330, 1500);
    Beep (350, 1500);
    Beep (392, 1500);
    Beep (440, 1500);
    Beep (493, 1500);
}
else if (scale == 'N' || scale == 'n')
{
    printf("What a shame");
}
else
{
printf ("Invalid");
}


return 0;
}
