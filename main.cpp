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
        void QueryUser(Operations&);
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

//  ========================================
    Fraction Add(Fraction fA, Fraction fB) {

        int a, b, c, d;
        Fraction fC;

        a = fA.num; b = fA.den;
        c = fB.num; d = fB.den;

        fC.num = a * d + b * c;
        fC.den = b * d;

        return fC;
    } // Function Add()
//  ===================

//  ========================
    Fraction GetFraction() {
        Fraction f;

        cout << "Enter a numerator ==> ";
        cin >> f.num;
        cout << "Enter a denominator ==> ";
        cin >> f.den;

        return f;

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

//  ==========================
    void Print (Operations op,
                Fraction fA, Fraction fB, Fraction fC) {

            if (op == Addition)
                cout << fA.num << "/" << fA.den << " + "
                     << fB.num << "/" << fB.den << " = "
                     << fC.num << "/" << fC.den << endl;

        } // Function Print()
    //  =====================

//  ==========================
    void ProcessCommand(Operations& choice) {

        Fraction fA, fB, fC;

        if (choice == Quit)
            cout << "Terminating execution." << endl;
        else {
            fA = GetFraction();
            fB = GetFraction();

            switch (choice) {
                case Addition: fC = Add(fA, fB);       break;
//                case Subtraction: fC = Add(fA, fB);    break;
//                case Multiplication: fC = Add(fA, fB); break;
//                case Division: fC = Add(fA, fB);       break;
                default: cout << "Error condition detected." << endl;
            }  // switch
        } // else

        Print(choice, fA, fB, fC);

    } // Function ProcessCommand()
//  ==============================

//  =================================
    void QueryUser(Operations& op) {

        int choice;

        cout << endl;
        cout << "Enter your choice ==> ";
        cin >> choice;

            switch (choice) {
            case 1: op = Addition;       break;
            case 2: op = Subtraction;    break;
            case 3: op = Multiplication; break;
            case 4: op = Division;       break;
            case 5: op = Quit;           break;
            default: cout << "Input Error condition";
            } // switch
    } // Function QueryUser()
//  =========================