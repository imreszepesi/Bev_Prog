#include "std_lib_facilities.h"

int main()
{
    try
    {
        cout << "Success!\n";

        ///////////////////


        cout << "Success!\n";


        ///////////////////

        cout << "Success"
             << "!\n";
        ///////////////////


        cout << "Success"
             << "!\n";

        ///////////////////

        int res = 7;

        vector<int> v(10);
        v[5] = res;
        cout << "Success!\n";

         ///////////////////

        v[5] = 7;

        if (v[5] == 7)
            cout << "Success!\n";
        if (true)
            cout << "Success!\n";
        else
            cout << "Fail!\n";


         ///////////////////


        bool c = false;
        if (!c)
            cout << "Success!\n";
        else
            cout << "Fail!\n";

         ///////////////////



        string s = "ape";
        c = "fool" < s;
        if (!c)
            cout << "Success!\n";


         ///////////////////


        s = "ape";
        if (s != "fool")
            cout << "Success!\n";

         ///////////////////


        s = "ape";
        if (s != "fool")
            cout << "Success!\n";


         ///////////////////


        s = "ape";
        if ("fool")
            cout << "Success!\n";


         ///////////////////


        vector<char> v1(5);
        
        for (int i = 0; i < v1.size(); ++i)
        {
            cout << "Success!\n";
        }



         ///////////////////


        vector<char> vv(5);
        
        for (int i = 0; i <= vv.size(); ++i)
        {
            cout << "Success!\n";
        }


         ///////////////////


        s = "Success!\n";
       
        for (int i = 0; i < s.size(); ++i)
            cout << s[i] << " ";

        if (true)
        {
            cout << "Success!\n";
        }
        else
        {
            cout << "Fail!\n";
        }


         ///////////////////

        int x = 2000;
        int xc = x;
        if (xc == 2000)
        {
            cout << "Success!\n";
        }


         ///////////////////


        string s1 = "Success!\n";
       
        for (int i = 0; i < s1.size(); ++i)
        {
            cout << s1[i] << " ";
        }


         ///////////////////


        vector<int> v4(5);
      
        for (int i = 0; i <= v4.size(); ++i)
        {
            cout << "Success!\n";
        }


         ///////////////////


        int i = 0;
        int j = 9;
        while (i < 10)
        {
            ++i;
            if (j < i)
            {
                cout << "Success!\n";
            }
        }


         ///////////////////


        int x2 = 2;
        double d = 5 / (x2 / 2);

        if (d == 2 * (x2 + 0.5))
        {
            cout << "Success!\n";
        }


         ///////////////////


        string ssss = "Success!\n";
        
        for (int i = 0; i <= ssss.size(); ++i)
        {
            cout << ssss[i] << " ";
        }


         ///////////////////


        int iii = 0;
        
        while (iii < 10)
        {
            ++iii;
            if (iii)
            {
                cout << "Success!\n";
            }
        }


         ///////////////////


        int xx = 4;
        double dd = 5.0 / (xx-2);
      
        if (dd == xx-2 + 0.5)
        {
            cout << "Success!\n";
        }

         ///////////////////

        cout << "Success!\n";

        keep_window_open();
        return 0;
    }
    catch (exception &e)
    {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch (...)
    {
        cerr << "Oops: Unknown exception!\n";
        keep_window_open();
        return 2;
    }
}