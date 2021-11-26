#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//darbu pildija Veronika Kantane 11.g

int main()
{
    int a, b, sum;
    cout << "Ievadiet 2 skaitlus kas ir lielaki par 5 un mazaki par 7" << endl;
    cin >> a;
    cin>>b;
    if (a==6 && b==6){ cout << "malacis" <<endl;
    }
    else{
    cout << " jusu skaitli neatbilst kriterijiem" <<endl;

    a=6;
    b=6;
    }
    int mas [a][b];

    srand (time(0));

    for (int i = 0; i<a; i++) {
        for (int j = 0; j<b; j++){
                mas [i][j] = rand ()% 10;
            cout << mas [i] [j]<< " ";
            sum = sum +mas [i][j];
        }
            cout<<endl;
        }
        cout<<"summa ir " <<sum;
    return 0;
}
