#include <iostream>

using namespace std;

int main()
{
   cout << "Ile masz lat?" << endl;
   int w;
   cin >> w;
   
   if(w>=18) cout<<"Jestes pelnoletni";
   else cout<<"Jestes nipelnoletni";
   
   cout<<endl;
   return 0;
}

