#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int money[] = {2000,500,100,200,50,20,10,5,2,1};
    sort(money, money+10);
    int withdrwal;
    cin>>withdrwal;

    for (int i = 0; i < 10; i++)
    {
        if(withdrwal>=2000){
            
            int notes_of_2000 = withdrwal/2000;
            for (int i = 0; i < notes_of_2000; i++)
            {
                cout<<"2000 ";
            }
            withdrwal = withdrwal%2000;
            
        }

        if(money[i]>withdrwal && withdrwal > 0){
            cout<<money[i-1]<<" ";
            withdrwal = (withdrwal - money[i-1]);
            i = 0;
        }

    }
    
    return 0;
}