#include<bits/stdc++.h>
using namespace std;
//主函数，做循环和数据的遍历
//子函数对每一个数据，做和题意有关的操作
/*
 * 具体到本题，就是。如何取到一个数的每一位，先余10，后除10。
 * 对整个遍历都没有符合条件的情况，用flag做判断。
 * main函数里的一个for循环。
 */
bool is_lucky(int val)
{
  while(val > 0)
  {//777664
    if(val % 10 == 7)
    {
      return true;
    }

    //val = val / 10;
    val /= 10;

  }

  return false;


}

int main() {//主函数里是对数据的循环处理，遍历题目要求的数据
  int L, R;
  bool Flag = false;//作为是否找到幸运数字的判断。
  assert(is_lucky(77) == true);
      assert(is_lucky(88) == false);
  //int number = 68;
  // 68 /2 = 34;
  // 68 % 2 = 0;
  // 68 /10 = 6;//某个数/10，是舍弃掉个位。
  // 68 % 10 = 8;//某个数 %10，是获得个位。
  //一个数不断%10再/10，是什么操作？
  // i = number % 10; number = number / 10;
  // 我听到你了。同学，你那边可以用zoom做一下测试嘛？
  //34657   7
  //3456    6
  // 345    5
  //34    4
  //3    3
  //0
  //return 0;
  cin >> L >> R;

  for (int i = L; i <= R; i++) {
     //cout <<i;
     if(is_lucky(i)){
       cout << i <<endl;
       Flag = true;
     }

  }

  if(Flag == false)//同学，我听得到你。你听不到我？稍等 3分钟哈。同学，你那边是耳机？那扬声器，不用耳机，能听到不
    cout << "None";
  return 0;
}
