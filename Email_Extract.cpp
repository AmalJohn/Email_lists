
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

vector<string> split_string(string);



int main()
{
    string string_buf;
    ifstream Email("email.txt");
    ofstream List("mailing_list.dat");
    vector<string> names;

    while(getline(Email, string_buf)){
         //Check if mail or not using the .com at the end you can add more checks also
        string key(".com");
        size_t found = string_buf.rfind(key);

        if(found !=  string::npos)
        {
            names.push_back(string_buf);
            //cout << found << endl;


        }

    }

    sort(names.begin(), names.end());

    for(int i = 0; i < names.size(); i++){
            List << names[i] << ",";

    }

    return 0;
}
