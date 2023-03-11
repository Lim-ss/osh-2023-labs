#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::vector<std::string> spilt(std:: string s,const std::string& d)
{
    int compare_position = 0;
    string temporary_string;
    std::vector<std::string> target_vector;
    for(int i =0; i < s.length(); i++)
    {
        if(s.substr(i,1) != d.substr(compare_position,1))//未匹配
        {
            temporary_string.append(s.substr(i,1));
            compare_position = 0;
        }
        else
        {
            if(compare_position + 1 < d.length())//匹配，但还没匹配到最后一个字符
            {
                temporary_string.append(s.substr(i,1));
                compare_position++;
            }
            else//完成匹配成功
            {
                target_vector.push_back(temporary_string);
                temporary_string.clear();
            }
        }
    }
    if(temporary_string.length()!=0)//补上最后一串
    target_vector.push_back(temporary_string);
    return target_vector;
}
int main()
{
    string test ="1,2,3,4,.5,6";
    vector a = spilt(test,",.");
    for(auto p = a.begin();p != a.end();p++)
    {
        cout << *p << endl;
    } 
    return 0;
}
