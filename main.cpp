/*    _______________________________________
 *   /         Welcome to Seif2015!          \
 *   \                                       /
 *    ---------------------------------------
 *           \   ^__^
 *            \  (oo)\_______
 *               (__)\       )\/\
 *                   ||----w |
 *                   ||     ||
 *
 * Grebnev Kolya, @mumiyasss, 15 years old;
 * It's a free software.
 * These program was written just for fun
 * and to write all my new knowledge in C++
 * programming language in one project:)
 *
 * How to:
 *
 *  You have to work with commands, so
 *  here are they:
 *
 *      seifenc - will encrypt your message;
 *      seifdec - will decrypt your encrypted message;
 *      calc    - will calculate the problem you will write;
 *      days    - will calculate how many days was between 2 dates;
 *      memory  - it's a game, were you need to remember numbers;
 *      exit    - finish to work with program.
 *
 *  In retry operation, you should enter 'y' or 'n',
 *  where 'y' - restart last operation and 'n' - go
 *  to command system.
 *
 * Good luck, lol :D
 */

//Plugging all important libraries.
#include <iostream>
#include <cstring>
#include <cmath>
#include <windows.h>

using namespace std; //Namespace.

//
// Functions description.
//

void hello();                 //Hello program, which takes user's name.
void command(bool b = false); //Taking user's command, to call some function.
void combase(char comd[15]);  //By the command, needed function will be called;
void seifenc();               //Text encryptor.
void seifdec();               //Text decryptor.
void clrscr(int size = 25);   //Screen cleaning.
void calc();                  //Calculator.
bool retry();                 //This function ask to user, should the previous operation be restarted or not.
void days();                  //Two dates are entering, and program show, how many days were between this days.
void memory();                //It's a game to remember numbers.


// Description of global variables.
char name[15]; // User's name.

int main() {

    hello();
    command();

    return 0;
}

void hello()
{
    clrscr();
    cout << "Hello, what is your name? ";
    cin >> name;

    cout << "Welcome to Seif2015 program, "
         << name << "\n\n";
}

bool retry()
{
    char r;   //answer to retry.
    cout << "Retry[y/n]? ";
    cin >> r;
    if (r == 'y') return true; else
        if (r == 'n') command(); else
        {
            cout << "\nYou should write only 'y' or 'n'!\n";
            retry();
        }

    return false;  //The most important thing is to have a secure!!!
}

void command(bool b)
{
    char e[] = "exit"; //command to finish the program
    
    if (b == true) cout << "There is no such a command. Please, try again:)\n"; else
    clrscr();
    char comd[15]; //and this the comand itself.

    cout << "Type your command: ";
    cin >> comd;

    if (strcmp(comd, e) == 0) exit(0); //exit


    clrscr();      //Cleaning the screen.

    combase(comd); //Working with command.
}

void clrscr(int size)
{
    for(; size; size--) cout << '\n';
}

void combase(char comd[15])
{
    char x1[] = "seifenc";    //Base of commands.
    char x2[] = "seifdec";
    char x3[] = "calc";
    char x4[] = "days";
    char x5[] = "memory";

    if (strcmp(comd, x1) == 0) seifenc(); else
    if (strcmp(comd, x2) == 0) seifdec(); else
    if (strcmp(comd, x3) == 0) calc(); else
    if (strcmp(comd, x4) == 0) days(); else
    if (strcmp(comd, x5) == 0) memory(); else
    command(true); //Return the error message, but only in the command() itself.
}

void seifenc()
{
    char x[300];   //The message
    int l, i;

    fflush(stdin); // Cleaning a null character for working with gets();

    cout << "Don't type more than 300 characters!\n-> ";
    gets(x);       //Reading the text.
    l = strlen(x); //Defining the text length.


    for (i=0; i<l; i++)
    {
        if (x[i]=='a') x[i]='o'; else   //Ammazing encryption, I know
        if (x[i]=='b') x[i]='g'; else
        if (x[i]=='c') x[i]='w'; else
        if (x[i]=='d') x[i]='a'; else
        if (x[i]=='e') x[i]='p'; else
        if (x[i]=='f') x[i]='q'; else
        if (x[i]=='g') x[i]='j'; else
        if (x[i]=='h') x[i]='n'; else
        if (x[i]=='i') x[i]='y'; else
        if (x[i]=='j') x[i]='b'; else
        if (x[i]=='k') x[i]='u'; else
        if (x[i]=='l') x[i]='h'; else
        if (x[i]=='m') x[i]='s'; else
        if (x[i]=='n') x[i]='r'; else
        if (x[i]=='o') x[i]='d'; else
        if (x[i]=='p') x[i]='c'; else
        if (x[i]=='q') x[i]='v'; else
        if (x[i]=='r') x[i]='x'; else
        if (x[i]=='s') x[i]='i'; else
        if (x[i]=='t') x[i]='z'; else
        if (x[i]=='u') x[i]='m'; else
        if (x[i]=='v') x[i]='t'; else
        if (x[i]=='w') x[i]='f'; else
        if (x[i]=='x') x[i]='k'; else
        if (x[i]=='y') x[i]='l'; else
        if (x[i]=='z') x[i]='e'; else
        if (x[i]=='0') x[i]='4'; else
        if (x[i]=='1') x[i]='8'; else
        if (x[i]=='2') x[i]='5'; else
        if (x[i]=='3') x[i]='1'; else
        if (x[i]=='4') x[i]='7'; else
        if (x[i]=='5') x[i]='0'; else
        if (x[i]=='6') x[i]='2'; else
        if (x[i]=='7') x[i]='9'; else
        if (x[i]=='8') x[i]='6'; else
        if (x[i]=='9') x[i]='3';
}
        cout << "\n-> ";
        for(i=0; i<l; i++)
        {
            cout << x[i];
        }
        cout << '\n';
        if (retry()) seifenc();
}

void seifdec()
{
    char x[300];   //The message
    int l, i;

    fflush(stdin); // Cleaning a null character entered from the keyboard for working with gets();

    cout << "Don't type more than 300 characters!\n-> ";
    gets(x);       //Reading the text.
    l = strlen(x); //Defining the text length.


    for (i=0; i<l; i++)
    {
        if (x[i]=='o') x[i]='a'; else
        if (x[i]=='g') x[i]='b'; else
        if (x[i]=='w') x[i]='c'; else
        if (x[i]=='a') x[i]='d'; else
        if (x[i]=='p') x[i]='e'; else
        if (x[i]=='q') x[i]='f'; else
        if (x[i]=='j') x[i]='g'; else
        if (x[i]=='n') x[i]='h'; else
        if (x[i]=='y') x[i]='i'; else
        if (x[i]=='b') x[i]='j'; else
        if (x[i]=='u') x[i]='k'; else
        if (x[i]=='h') x[i]='l'; else
        if (x[i]=='s') x[i]='m'; else
        if (x[i]=='r') x[i]='n'; else
        if (x[i]=='d') x[i]='o'; else
        if (x[i]=='c') x[i]='p'; else
        if (x[i]=='v') x[i]='q'; else
        if (x[i]=='x') x[i]='r'; else
        if (x[i]=='i') x[i]='s'; else
        if (x[i]=='z') x[i]='t'; else
        if (x[i]=='m') x[i]='u'; else
        if (x[i]=='t') x[i]='v'; else
        if (x[i]=='f') x[i]='w'; else
        if (x[i]=='k') x[i]='x'; else
        if (x[i]=='l') x[i]='y'; else
        if (x[i]=='e') x[i]='z'; else
        if (x[i]=='4') x[i]='0'; else
        if (x[i]=='8') x[i]='1'; else
        if (x[i]=='5') x[i]='2'; else
        if (x[i]=='1') x[i]='3'; else
        if (x[i]=='7') x[i]='4'; else
        if (x[i]=='0') x[i]='5'; else
        if (x[i]=='2') x[i]='6'; else
        if (x[i]=='9') x[i]='7'; else
        if (x[i]=='6') x[i]='8'; else
        if (x[i]=='3') x[i]='9';
      }
        cout << "\n-> ";
        for(i=0; i<l; i++)
        {
            cout << x[i];
        }
        cout << '\n';
        if (retry()) seifdec();

}

void calc() //НЕ РАБОТАЕТ ДЕСЯТИЧНАЯ ЧАСТЬ, мне лень исправлять!!!
{
    clrscr();

    char reg[30];         //сама строчка
    int l, i;             //длина строчки
    double x, y;          //два каких-то числа
    int x1, y1, x2, y2;   //количество цифр в числах x и y.
    double o;             //ответ

    int a;  /* 1 - +;
             * 2 - -;     //Присвоим операциям номера
             * 3 - *;
             * 4 - /; */

    cout << "Write your problem below, please.\n";

    cin >> reg;
    l=strlen(reg);

    x1=1; y1=1;       //Первоначальные значения
    x=0; y=0;
    x2=0.1; y2=0.1;

    for(i=0; i<l; i++)
    {
        if(reg[i]=='1') x=1+x*x1; else
        if(reg[i]=='2') x=2+x*x1; else
        if(reg[i]=='3') x=3+x*x1; else
        if(reg[i]=='4') x=4+x*x1; else
        if(reg[i]=='5') x=5+x*x1; else
        if(reg[i]=='6') x=6+x*x1; else
        if(reg[i]=='7') x=7+x*x1; else
        if(reg[i]=='8') x=8+x*x1; else
        if(reg[i]=='9') x=9+x*x1; else
        if(reg[i]=='0') x=0+x*x1; else
        if(reg[i]=='+') {a=1; goto y;} else
        if(reg[i]=='-') {a=2; goto y;} else
        if(reg[i]=='*') {a=3; goto y;} else
        if(reg[i]=='/') {a=4; goto y;} else
        if(reg[i]=='.') goto k; else
        {
            cout << "Inputed data was incorret!\n";

            //
            // Запустим retry();
            //

            goto r;
        }
        x1=x1*10;
        cout << x << '\n';
    }

      //
      //Считываем десятичную часть для числа x
      //
      k: for(i=(i+1); i<l; i++)
         {
            if(reg[i]=='1') x=x+1*x2; else
            if(reg[i]=='2') x=x+2*x2; else
            if(reg[i]=='3') x=x+3*x2; else
            if(reg[i]=='4') x=x+4*x2; else
            if(reg[i]=='5') x=x+5*x2; else
            if(reg[i]=='6') x=x+6*x2; else
            if(reg[i]=='7') x=x+7*x2; else
            if(reg[i]=='8') x=x+8*x2; else
            if(reg[i]=='9') x=x+9*x2; else
            if(reg[i]=='0') x=x+0*x2; else
            if(reg[i]=='+') {a=1; goto y;} else
            if(reg[i]=='-') {a=2; goto y;} else
            if(reg[i]=='*') {a=3; goto y;} else
            if(reg[i]=='/') {a=4; goto y;} else
            {
                cout << "Inputed data was incorret!\n" << reg[i] <<'\n';

                //
                // Запустим retry();
                //

                goto r;
            }
            x1=x1/10;
            cout << x << '\n';
        }

   y: for(i=(i+1); i<l; i++)
    {
        if(reg[i]=='1') y=1+y*y1; else
        if(reg[i]=='2') y=2+y*y1; else
        if(reg[i]=='3') y=3+y*y1; else
        if(reg[i]=='4') y=4+y*y1; else
        if(reg[i]=='5') y=5+y*y1; else
        if(reg[i]=='6') y=6+y*y1; else
        if(reg[i]=='7') y=7+y*y1; else
        if(reg[i]=='8') y=8+y*y1; else
        if(reg[i]=='9') y=9+y*y1; else
        if(reg[i]=='0') y=0+y*y1; else
        if(reg[i]=='.') goto e; else
        {
            cout << "Inputed data was incorret!\n";

            //
            // Запустим retry();
            //

            goto r;
        }
        y1=y1*10;
    }

    //
    //Считываем десятичную часть для числа x
    //
    e: for(i=(i+1); i<l; i++)
       {
          if(reg[i]=='1') y=y+1*y2; else
          if(reg[i]=='2') y=y+2*y2; else
          if(reg[i]=='3') y=y+3*y2; else
          if(reg[i]=='4') y=y+4*y2; else
          if(reg[i]=='5') y=y+5*y2; else
          if(reg[i]=='6') y=y+6*y2; else
          if(reg[i]=='7') y=y+7*y2; else
          if(reg[i]=='8') y=y+8*y2; else
          if(reg[i]=='9') y=y+9*y2; else
          if(reg[i]=='0') y=y+0*y2; else
          {
              cout << "Inputed data was incorret!\n";

              //
              // Запустим retry();
              //

              goto r;
          }
          y2=y2/10;
      }

    cout << x << ' ' << y <<'\n';

    if (a==1) o=x+y; else
    if (a==2) o=x-y; else
    if (a==3) o=x*y; else
    if (a==4) o=x/y;

    cout << name << ", your answer is " << o << '\n';
   r: if (retry()) calc();
}

void days()
{
    int d1, d2, m1, m2, y1, y2; //Параметры двух дат
    int oy, om, o;              //Ответы.

    cout << "Enter first date in format [D M Y]: ";
    cin >>  d1 >> m1 >> y1;

    cout << "Enter second date in format [D M Y]: ";
    cin >>  d2 >> m2 >> y2;

    o = 0;  //Это само количество дней

    for (oy=(y1+1); oy<y2; oy++)
    {
        o=o+365;
        if (abs(2012 - oy) % 4 == 0) o=o+1;
    }

    for (om = m1+1; om<m2; om++)
    {
        if (om<8){
            if (om==2) o=o+28; else
                if (om%2==0) o=o+30; else
                    o=o+31;
        } else {
            if (om%2==0) o=o+31; else
                o=o+30;
        }
    }

    if(d2>=d1) o=o+(d2-d1); else
    {
        if (om<8){
            if (om==2) o=o+28-d1+d2; else
                if (om%2==0) o=o+30-d1+d2; else
                    o=o+31-d1+d2;
        } else {
            if (om%2==0) o=o+31-d1+d2; else
                o=o+30-d1+d2;
        }
    }

    cout << "Between these dates was " << o;
    if (o==1) cout << " day.\n"; else cout << " days\n";

    if (retry()) days();
}

void memory()
{
    int c[100];      //Это случайные числа
    int result;      //В этой переменной результат.
    int i, j, s, z, m;
    char a[200];     //Ответ, введенный пользователем

    result = 0;      //Изначально, результат равен 0.

    for (i=1; i<101; i++)
    {
        cout << "You have 7 seconds to remember...\n";

        //
        //Генерируем случайные числа
        //

        for (j=0; j<i; j++)
        {
            c[j] = rand() % 10;
            cout << c[j] << ' ';

        }

        //
        //Начинаем отсчет времени под чертой.
        //

        cout << '\n' << "----------------\n";

        //Таймер на 7 секунд.(на самом деле дольше, хз почему)
        for (s=1; s<=7; s++)
        {
            Sleep(s*400);
            cout << s << '\n';
        }

        clrscr();  //Убираем все с экрана

        //
        //Приём значений пользователя
        //

        cout << "Write numbers here: ";
        fflush(stdin); //Подчишаем ввод с клавиатуры.
        gets(a);

        s=strlen(a);

        z=-1; //Если z=-1, то число не было считано

        m=0;  //Для итерации массива с изначальными значениями

        for (j=0; j<s; j++)
        {
            if (a[j]=='0') z=0; else
            if (a[j]=='1') z=1; else
            if (a[j]=='2') z=2; else
            if (a[j]=='3') z=3; else
            if (a[j]=='4') z=4; else
            if (a[j]=='5') z=5; else
            if (a[j]=='6') z=6; else
            if (a[j]=='7') z=7; else
            if (a[j]=='8') z=8; else
            if (a[j]=='0') z=9;

            if (z != -1) //Если число было считано...
            {
                if (z != c[m]) //...то проверим на совпадение
                {
                    cout << "Wrong! Game over! Your result is " << result << '\n';

                    goto gameover; //Спросим, хочет ли игрок, сыграть еще раз, через retry().
                }
                m++;
            }
            z=-1;
        }

        result++; //Успешеное прохождение этапа(+1 к виртуальному успеху)
    }


  gameover:  if (retry()) memory();
}
