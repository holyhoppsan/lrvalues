
// Rvalue references solves at least two problems
// 1. Implementing move semantics
// 2. Perfect forwarding

int testGlobal = 4;

int &foo()
{
    return testGlobal;
}

int foobar()
{
    return 4;
}

int main()
{
    // L-value == an expression e that may appear on the left or right hand side of an assignment.
    // R-value == an expression e that can only appear on the right hand side of an assignment

    int a = 42;
    int b = 43;

    // a and b are both l values
    a = b;     // ok
    b = a;     // ok
    a = a * b; // ok

    // a * b is an rvalue
    int c = a * b; // ok, rvalue on the right hand side of assignment
    //a * b = 42;     // yeilds an error, rvalue on left hand side of assingment

    // The definition above does not fit with C++ as it may not apply for some user
    // defined types.

    // Alternative definition:
    // An lvalue is an expression that refers to a memory location and allows us
    // to take the address of that memory location using the & operator.

    // An Rvalue is not an lvalue.

    // lvalues:
    int i = 42;
    i = 43;      // ok, i is an lvalue
    int *p = &i; // ok i is an lvalue

    foo() = 42;       // ok foo() is an lvalue
    int *p1 = &foo(); // ok, foo() is an lvalue

    // rvalues:
    int foobar();
    int j = 0;
    j = foobar(); // ok, foobar() is an rvalue
    //int *p2 = &foobar(); // error, cannot take the address of an rvalue
    j = 42; // ok, 42 is an rvalue
    return 0;
}