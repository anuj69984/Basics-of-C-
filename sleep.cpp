#include <bits/stdc++.h>
using namespace std;

int main()
{
	system("color 0F");
   for (int i = 1; i <= 5; ++i)
   {
      cout << i << " "<<endl;
      this_thread::sleep_for(chrono::seconds(1));
   }
   return 0;
}