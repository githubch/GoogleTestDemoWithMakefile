#include<iostream>
#include<string>
class TestA{
   public:
   TestA(){
      std::cout<<"hello test"<<std::endl;
   }
   explicit TestA(int i){
      std::cout<<"hello Test(i)"<<std::endl;
   }
   public:
   int sum(int a, int b);
};
