//  ====================
     #include <iostream>
    using namespace std;
//  ====================


//  ================
//  Enumerated Types
//  =======================================================
    enum Operations {Addition, Subtraction, Multiplication,
                     Division, Quit};
//  =================================


//  ==========
//  Structures
//  ==========
    struct Fraction {
        int num;
        int den;
    }; // Structure Fraction
//  ========================


//  ===================
//  Function Prototypes
//  ===================
    Fraction Add(Fraction, Fraction);
    Fraction GetFraction();
        void Menu();
        void Print(Operations, Fraction, Fraction, Fraction);
        void ProcessCommand(Operations&);
        void QueryUser(Operations&)
//  ====================

//  ===============
//  Function main()
//  ===============
    int main() {

        Operations choice = Quit;
        
        do {
            Menu();
            QueryUser(choice);
            ProcessCommand(choice);
        } while (choice != Quit);

        return 0;

    } // Function main()
//  ====================


//  ========================
    Fraction GetFraction() {
        Fraction f;

        cout << "Enter a numerator ==> " << endl;
        cin >> f.num; 
        cout << "Enter a denominator ==> " << endl;
        cin >> f.den;
    } // Function GetFraction()
//  ===========================

//  ==============
    void Menu() {
    cout << endl;
    cout << "=====================" << endl;
    cout << "1) Add        2) Subtract" << endl;
    cout << "3) Multiply   4) Divide" << endl;
    cout << "5) Quit" << endl;
    cout << "=======" << endl;
    } // Function Menu()
//  ====================

//  =================================
    void QueryUser(Operations& op) {
            case 1: op = Add;       break;
            case 2: op = Subtract;  break;
            case 3: op = Multiply;  break;
            case 4: op = Divide;    break;
            case 5: op = Quit;      break;d
            default: cout << "Input Error Condition";
        } // switch
    } // Function QueryUser()
//  =========================