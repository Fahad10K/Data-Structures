
#include <iostream>

using namespace std;
enum demo{first=5.5};
class cu{
    private:
    int data;;
    public:
    cu(int x){data=x}
    friend int operator*(enum demo d);
};
int operator*(enum demo d){
    return 100*d;
}
int main()
{
  cu object(10);
  cout<<operator*(first);
    return 0;
}

