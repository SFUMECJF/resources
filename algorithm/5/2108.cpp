#include <iostream>
#include <algorithm>
using namespace std;

//  100个数字啊， 100个参数。
// a[100]   a[0] a[1]  a[2] ...a[99]
// 用到了指针
//float*
void my_sort(int *begin, int *last) {//传的参数是地址
  for (int* i = begin; i < last; i++) {
    int* min_value = i; //i后面的所有元素的最小值
    for (int* j = i + 1; j < last; j++) {
      if(*j < *min_value)  min_value = j;
    }// 我听得到，同学听不到我？？
//    int temp = *min_value;
//    *min_value = *i;
//    *i = temp;
  swap(*min_value, *i);// 如何使用swap, 把两个值
//swap(2,1);
  }
}// 100个元素，   _   _   _  _

//void my_sort(int begin, int begin1,....,int bwgin99) {//传的参数是地址
//  cout << begin << endl;
//  cout << *begin;
//}
int main () {
  int a[100];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // sort(,,)
  //sort(a, a + n);// clion    会把形参也显示出来。
  my_sort(a, a + n);
//  my_sort(a[0], a[1], a[2],.....a[99]);


  cout << n << endl;
  for (int i =0; i < n; i++) {
    cout << a[i] << endl;
  }


}

//void sort(int* begin, int* last) {
//  last
//
//}