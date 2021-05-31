#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int computer()
{
    srand(time(nullptr));
    return rand() % 3;
}
int main()
{
    int your_ans;
    int computer_ans;
    int score = 100;
    cout << "这是一个猜拳游戏，0是石头，1是剪刀，2是布" << endl;
    while (true)
    {
        cout << "你的分数是" << score << endl;
        cout << "你要出什么:" << flush;
        cin >> your_ans;
        cout << endl;
        computer_ans = computer();
        if (your_ans == 0)
        {
            if (computer_ans == 1)
            {
                cout << "你赢了，分数加十" << endl;
                score++;
            }
            else if (computer_ans == 2)
            {
                cout << "你输了，分数减十" << endl;
                score--;
            }
            else
            {
                cout << "打平了" << endl;
            }
        }
        if (your_ans == 1)
        {
            if (computer_ans == 2)
            {
                cout << "你赢了，分数加十" << endl;
                score++;
            }
            else if (computer_ans == 0)
            {
                cout << "你输了，分数减十" << endl;
                score--;
            }
            else
            {
                cout << "打平了" << endl;
            }
        }
        if (your_ans == 2)
        {
            if (computer_ans == 0)
            {
                cout << "你赢了，分数加十" << endl;
                score++;
            }
            else if (computer_ans == 1)
            {
                cout << "你输了，分数减十" << endl;
                score--;
            }
            else
            {
                cout << "打平了" << endl;
            }
        }
    }
}


