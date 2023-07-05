#include <bits/stdc++.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#define size 31
using namespace std;
class Main
{
public:
    // random
    int random[6], random1[6], count = 0, count1 = 0;
    string converter, converter1, check, check1, define[6];
    // signup
    string name, email, password, gender, age, teacher = "Eng Titya", Class = "112";
    // sigin
    string Email, Password, Reset, yesno;
    // Printdelay
    void Printdelay(string values)
    {
        cout << "\n\t\t\t";

        for (int i = 0; i < values.length(); i++)
        {
            cout << values[i];
            Sleep(20);
        }
    }
    void SignUp()
    {

        Printdelay("\n\n\n\t\t\t=====Sign Up=====\n\n");
        Printdelay("Enter Email:");
        cin >> email;
        cout << endl;
        Printdelay("Enter Password:");
        cin >> password;
        cout << endl;

        Printdelay("Enter Name:");
        cin.ignore();
        getline(cin, name);
        cout << endl;
        Printdelay("Enter Gender:");
        cin >> gender;
        cout << endl;
        Printdelay("Enter Age:");
        cin >> age;
        cout << endl;
    };

    // login
    void Login()
    {

    a1:
        if (count == 3)
        {

            Printdelay("Please wait 5 seconds...");
            Sleep(5000);
            Printdelay(" Reset email and password(Y/N)?:");
            cin >> Reset;
            if (Reset == "Y" || Reset == "y")
            {
                SignUp();
            }
        }
        if (count >= 4)
        {

            Printdelay("Please wait 5 minutes...");
            Sleep(300000);
            Printdelay(" Reset email and password(Y/N)?:");
            cin >> Reset;
            if (Reset == "Y" || Reset == "y")
            {
                SignUp();
            }
        }
        Printdelay("\n\n\n\t\t\t=====Login=====\n\n");
        Printdelay("Enter Email:");
        cin >> Email;
        cout << endl;
    a2:
        Printdelay("Enter Password:");
        cin >> Password;
        cout << endl;
        if (Email != email && Password != password)
        {
            Printdelay("Incorrect Email and Password\n");
            count++;
            if (count == 1 || count == 2)
            {
                cout << "\t\t\t" << 3 - count << " more left\n";
            }
            goto a1;
        }
        if (Email != email)
        {
            Printdelay("Incorrect Email\n");
            count++;
            if (count == 1 || count == 2)
            {
                cout << "\t\t\t" << 3 - count << " more left\n";
            }
            goto a1;
        }
        if (Password != password)
        {
            Printdelay("Incorrect Password\n");
            count++;
            if (count == 1 || count == 2)
            {
                cout << "\t\t\t" << 3 - count << " more left\n";
            }
            if (count == 3)
            {

                Printdelay("Please wait 5 seconds...");
                Sleep(5000);
                Printdelay(" Reset email and password(Y/N)?:");
                cin >> Reset;
                if (Reset == "Y" || Reset == "y")
                {
                    SignUp();
                }
            }
            if (count >= 4)
            {

                Printdelay("Please wait 5 minutes...");
                Sleep(300000);
                Printdelay(" Reset email and password(Y/N)?:");
                cin >> Reset;
                if (Reset == "Y" || Reset == "y")
                {
                    SignUp();
                }
            }
            goto a2;
        }
    }
    // random code
    void Codesevice()
    {

        srand(time(0));
        Printdelay("Verifycation code :");
        for (int i = 0; i < 6; i++)
        {
            random[i] = (rand() % 9) + 1;

            define[i] = to_string(random[i]);

            converter += define[i];
        }
        Printdelay(converter);

        cout << endl;
    }
    // checking
    void Checkverify()
    {

    back:
        Printdelay("======Check Your Result======\n");
        Printdelay("Please enter code to verify:");
        cin >> check;
        if (check == converter)
        {
            Printdelay(" Success.........\n");
        }
    back11:
        Printdelay("======Check Your Result======\n");
        Printdelay("Please enter code to verify:");
        cin >> check1;
        if (check1 == converter1)
        {
            Printdelay(" Success.........\n");
        }
        else
        {
            Printdelay("Please try again\n");
            count1++;
            if (count1 >= 1)
            {
                Printdelay("Refresh code (Y/N)?:");
                cin >> yesno;
                if (yesno == "y" || yesno == "Y")
                {
                    srand(time(0));
                    Printdelay("Verifycation code :");
                    for (int i = 0; i < 6; i++)
                    {
                        random1[i] = (rand() % 9) + 1;
                        // cout << random[i];
                        define[i] = to_string(random1[i]);

                        converter1 += define[i];
                    }
                    Printdelay(converter1);

                    cout << endl;
                    Printdelay("Please wait 5 seconds...");
                    Sleep(15000);
                    goto back11;
                }
                goto back;
            }
            goto back;
        }
    }
};
class Signupandlogin : public Main
{
public:
    float n = 1, P = 0;
    int C = 0, i = 0, s[size];
    string B[size], True[size];
    void PutAnswer(string A)
    {
        string Q;
        cout << "\n\t\t";
        Printdelay("Answer:");
        cin >> Q;

        if (A == Q)
        {

            P++;
        }
        else
        {
            B[i] = Q;
            s[i] = n;
            True[i] = A;
            i++;
            C++;
        }
        n++;
    }
    void Printwrong()
    {
        Printdelay("Wrong answer:");
        cout << "\n\t\t\t";
        for (int i = 0; i < C; i++)
        {
            cout << s[i] << ".";
            cout << B[i] << endl;
        }
        Printdelay("Correct answer:");
        cout << "\n\t\t\t";
        for (int i = 0; i < C; i++)
        {
            cout << s[i] << ".";
            cout << True[i] << endl;
        }
    }
    float PrintScore()
    {
        float Score = P * 20 / size;
        return Score;
    }
};

int main()
{
    system("color DE");
    system("CLS");
    Signupandlogin Obj;
    Obj.SignUp();
    system("CLS");
    Obj.Login();

    system("CLS");
    Obj.Codesevice();
back12:
    // Testing
    Obj.Printdelay("\n\n\t\t\t========Testing========\n");
    // Q1

    Obj.Printdelay("1.What is a correct syntax to output  in C++?\n");
    Obj.Printdelay("A.print\tB.Console.Write\tC.System.out.println\tD.cout\n");
    Obj.PutAnswer("D");
    // Q2
    Obj.Printdelay("2.C++ is an alias of C#\n");
    Obj.Printdelay("A.True\tB.False\n");
    Obj.PutAnswer("B");
    // Q3
    Obj.Printdelay("3.How do you insert COMMENTS in C++ code?\n");
    Obj.Printdelay("A./*\tB.#\tC.//\n");
    Obj.PutAnswer("C");
    // Q4
    Obj.Printdelay("4.Which data type is used to create a variable that should store text?\n");
    Obj.Printdelay("A.Txt\tB.string\tC.MyString\tD.String\n");
    Obj.PutAnswer("B");
    // Q5
    Obj.Printdelay("5.How do you create a variable with the numeric value 5?\n");
    Obj.Printdelay("A.num x=5\tB.x=5;\tC.double x=5;\tD.int x=5;\n");
    Obj.PutAnswer("D");
    // Q6
    Obj.Printdelay("6.How do you create a variable with the floating number 2.8?\n");
    Obj.Printdelay("A.byte x=2.8\tB.double x=2.8;\tC.int x=2.8;\tD.x=2.8;\n");
    Obj.PutAnswer("B");
    // Q7
    Obj.Printdelay("7.Which method can be used to find the length of a string?\n");
    Obj.Printdelay("A.getLength()\tB.len()\tC.length()\tD.getSize()\n");
    Obj.PutAnswer("C");
    // Q8
    Obj.Printdelay("8.Which operator is used to add together two values?\n");
    Obj.Printdelay("A.The&sign\tB.The+sign\tC.The*sign\n");
    Obj.PutAnswer("B");
    // Q9
    Obj.Printdelay("9.The value of a string variable can be surrounded by single quotes.\n");
    Obj.Printdelay("A.True\tB.False\n");
    Obj.PutAnswer("B");
    // Q10
    Obj.Printdelay("10.Which header file lets us work with input and output objects?\n");
    Obj.Printdelay("A.#include<stream>\tB.#include<inputstr>\tC.#include<iosstring>\tD.#include<iostream>\n");
    Obj.PutAnswer("D");
    // Q11
    Obj.Printdelay("11.Which operator can be used to compare two values?\n");
    Obj.Printdelay("A.><\tB.=\tC.<>\tD.==\n");
    Obj.PutAnswer("D");
    // Q12
    Obj.Printdelay("12.To declare an array in C++, define the variable type with:\n");
    Obj.Printdelay("A.{}\tB.[]\tC.()\n");
    Obj.PutAnswer("B");
    // Q13
    Obj.Printdelay("13.Array indexes start with:\n");
    Obj.Printdelay("A.0\tB.1\n");
    Obj.PutAnswer("A");
    // Q14
    Obj.Printdelay("14.How do you create a function in C++?\n");
    Obj.Printdelay("A.functionName[];\tB.(functionName);\tC.functionName();\tD.functionName;\n");
    Obj.PutAnswer("C");
    // Q15
    Obj.Printdelay("15.Which keyword is used to create a class in C++?");
    Obj.Printdelay("A.class()\tB.Myclass\tC.className\tD.class\n");
    Obj.PutAnswer("D");
    // Q16
    Obj.Printdelay("16.What is the correct way to create an object called myObj of MyClass?\n");
    Obj.Printdelay("A.Myclass myObj;\tB.class myObj = new Myclass();\tC.class Myclass = new myObj();\tD.new myObj = Myclass();\n");
    Obj.PutAnswer("A");
    // Q17
    Obj.Printdelay("17.In C++, it is possible to inherit attributes and methods from one class to another.\n");
    Obj.Printdelay("A.True\tB.False\n");
    Obj.PutAnswer("A");
    // Q18
    Obj.Printdelay("18.Which method can be used to find the highest value of x and y?\n");
    Obj.Printdelay("A.maximum(x,y)\tB.max(x,y)\tC.largest(x,y)\tD.maxNum(x,y)\n");
    Obj.PutAnswer("B");
    // Q19
    Obj.Printdelay("19.Which operator is used to multiply numbers?\n");
    Obj.Printdelay("A.%\tB.*\tC.#\tD.x\n");
    Obj.PutAnswer("B");
    // Q20
    Obj.Printdelay("20.How do you start writing an if statement in C++?\n");
    Obj.Printdelay("A.if x > y then:\tB.if(x > y)\tC.if x > y\n");
    Obj.PutAnswer("B");
    // Q21
    Obj.Printdelay("21.How do you start writing a while loop in C++?\n");
    Obj.Printdelay("A.while x > y{\tB.while x > y:\tC.while (x > y)\tD.x > y while {");
    Obj.PutAnswer("C");
    // Q22
    Obj.Printdelay("22.Which keyword is used to return a value inside a method?\n");
    Obj.Printdelay("A.return\tB.get\tC.break\tD.void\n");
    Obj.PutAnswer("A");
    // Q23
    Obj.Printdelay("23.Which statement is used to stop a loop?\n");
    Obj.Printdelay("A.return\tB.stop\tC.break\tD.exit\n");
    Obj.PutAnswer("C");
    // Q24
    Obj.Printdelay("24.How do you create a reference variable of an existing variable?\n");
    Obj.Printdelay("A.With the * operator\tB.With the ref word\tC.With the & operator\tD.With the REF word\n");
    Obj.PutAnswer("C");
    // Q25
    Obj.Printdelay("25.Basic Operations Stack\n");
    Obj.Printdelay("A.4\tB.6\tC.5\tD.3\n");
    Obj.PutAnswer("C");
    // Q26
    Obj.Printdelay("26.Push(): Pushing (storing) an element on the stack.\n");
    Obj.Printdelay("A.True\tB.False\n");
    Obj.PutAnswer("A");
    // Q27
    Obj.Printdelay("27.Pop() : get the top data element of the stack, without removing it.\n");
    Obj.Printdelay("A.True\tB.False\n");
    Obj.PutAnswer("B");
    // Q28
    Obj.Printdelay("28.Queue : (First-In-Last-Out)\n");
    Obj.Printdelay("A.True\tB.False\n");
    Obj.PutAnswer("B");
    // Q29
    Obj.Printdelay("29.Stack : (First-In-First-Out)\n");
    Obj.Printdelay("A.True\tB.False\n");
    Obj.PutAnswer("B");
    // Q30
    Obj.Printdelay("30.There are 5 stacks\n");
    Obj.Printdelay("1.Push(10)\n\t\t\t2.Pop()\n\t\t\t3.Push(6)\n\t\t\t4.Pop()\n\t\t\t5.Push(8)\n");
    Obj.Printdelay("A.Stack: 10 6\tB.Stack: 6 8\tC.Stack: 8\tD.Stack: 10 6 8\n");
    Obj.PutAnswer("C");
    // Q31
    Obj.Printdelay("There are 5 queues\n");
    Obj.Printdelay("1.Enqueue(4)\n\t\t\t2.Enqueue(5)\n\t\t\t3.Enqueue(6)\n\t\t\t4.Enqueue(7)\n\t\t\t5.Enqueue(8)\n\t\t\t6.Dequeue()\n\t\t\t7.Enqueue(3)\n");
    Obj.Printdelay("A.Queue :3 4 5 6 8\tB.Queue :3 4 5\tC.Queue :3 4 5 6 7\tD.Queue : 3 5 6 7 8\n");
    Obj.PutAnswer("D");
    // check veritying
    system("CLS");
    Obj.Checkverify();

    system("CLS");
    Obj.Printdelay("\n\n\n\t\t\t========Your Result========\n");
    Obj.Printdelay("Name: ");
    cout << Obj.name << endl;
    Obj.Printdelay("Gender :");
    cout << Obj.gender << endl;
    Obj.Printdelay("Age:");
    cout << Obj.age << endl;
    Obj.Printdelay("Lecturer :");
    cout << Obj.teacher << "\t"
         << "Class :" << Obj.Class << endl;
    Obj.Printdelay("Your Score :");
    // PrintScore
    cout << Obj.PrintScore();
    cout << endl;
    Obj.Printdelay("Wrong answers :");
    cout << Obj.C;
    cout << endl;
    string op, OP;
    cout << "Show incorrect and correct answer (Y/N)?:";
    cin >> op;
    if (op == "y" || op == "Y")
    {
        cout << endl;
        if (Obj.C == 0)
        {
            Obj.Printdelay("Don't have ");
        }
        else
        {
            Obj.Printwrong();
        }
        cout << endl;
        // Back or close
        Obj.Printdelay("Do you want to play again (Y/N)?:");
        cin >> OP;
        if (OP == "y" || OP == "Y")
        {
            system("CLS");
            goto back12;
        }
        else
        {
            Obj.Printdelay("========Thanks========");
            return 0;
        }
    }
    else
    {
        cout << endl;
        // Back or close program
        Obj.Printdelay("Do you want to play  again (Y/N)?:");
        cin >> OP;
        if (OP == "y" || OP == "Y")
        {
            system("CLS");
            goto back12;
        }
        // close program
        else
        {
            Obj.Printdelay("========Thanks========");
            return 0;
        }
    }
    return 0;
}