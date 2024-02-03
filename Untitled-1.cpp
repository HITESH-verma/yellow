#include<iostream>
#include<vector>
using namespace std;
void interact(vector<string>&ss)
{
    if(ss.size()==0)
    {
        return;
    }
    cout<<ss[ss.size()-1];
    ss.pop_back();
    interact(ss);
}
int main(){
   vector<string> ss= {"h","e","l","l","o"};
    interact(ss);


}