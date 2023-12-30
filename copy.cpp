#include<iostream>
// using namespace std;
#include<algorithm>

int main()
{
cout<<"Hello Brother !!\n GOOD MORNING ";

int Orginal_Array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// cout<<Orginal_Array[]<<endl;
int length = sizeof(Orginal_Array)/ sizeof(Orginal_Array[0]);
int copied_Array[length];

std :: copy(Orginal_Array, Orginal_Array + lenght, copied_Array);
// std :: cout<<copied_Array[];

for(int i = 0; i<length; ++i);
{
    std :: cout<< copied_Array[i]<<"";
}
return 0;
}