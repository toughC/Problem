#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    if(0 < n < 21)
    {
        for(int i = 0; i < n; i++)
        {   
            string str = {0,};
            str.reserve(201);
            cin >> str;  

            int a = str.find("A");
            int f = str.find("F");
            int c = str.find("C");
            int ra = str.rfind("A");
            int rf = str.rfind("F");
            
            bool dap = false;
            if ((str.at(str.length()-1) == 'A') || (str.at(str.length()-1) == 'F') || (str.at(str.length()-1) == 'C'))
            {
                if(a < f && f < c && a < c)
                {
                    if((ra == f-1) && (rf == c-1))
                     dap = true;
                }
            }
            if(dap) cout << "Infected!" << endl;
            else cout << "Good" << endl;

                
            

        }
    }
  
   
    return 0;
}