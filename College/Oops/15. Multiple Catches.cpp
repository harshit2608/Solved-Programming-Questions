#include <bits/stdc++.h>
using namespace std;

void test(int x) {
    try {
        if (x > 0)
            throw x;
        else
            throw 'x';
    } catch (int x) {
        cout << "Catch a integer and that integer is :\n" << x;
    } catch (char x) {
        cout << "\nCatch a character and that character is :\n" << x;
    }
}

int main() {
    cout << "Testing multiple catches : \n";
    test(10);
    test(0);
    cout<<"\n\n\n";
    return 0;
}
