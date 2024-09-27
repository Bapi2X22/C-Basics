# include <iostream>
# include <string>
using namespace std;

int main(){


for (int n=10; n>0; n-=2)
{
    cout<< n<<","<< " " ;
    if (n==3){
        cout << "Countdown aborted!";
        break;
    }

}
}

