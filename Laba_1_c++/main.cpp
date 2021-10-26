#include <iostream>
#include <conio.h>


using namespace std;

class MyFunc
{
  public:
        void CinArguments()
        {
           cout<<"Ââåäèòå ñâîé âàðèàíò: "<<endl;
           cin>>var;
           cout<<"Íà÷àëüíîå çíà÷åíèå àðãóìåíòà: "<<endl;
           cin>>x1;
           cout<<"Êîíå÷íîå çíà÷åíèå àðãóìåíòà: "<<endl;
           cin>>x2;
           cout<<"Êîëè÷åñòâî òî÷åê(1-âàðèàíò) / Øàã àðãóìåíòà(2-âàðèàíò)"<<endl;
           cin>>N;
        }
       void Dump()
       {
          cout<<"\t| "<<i<<"|\t |"<<x1<<"|\t |"<<x3<<"|\t"<<endl;
          cout<<"+----------+----------+----------+\n"<<endl;
       }
    void Set(int _x1,int _x2,int _N,int _var)
    {
         x1  = _x1;
         x2  = _x2;
         N   = _N;
         var = _var;
    }
       void Get()
       {
          cout<<"variant: "<<var<<endl;
          cout<<"x1: "<<x1<<endl;
          cout<<"x2: "<<x2<<endl;
          cout<<"N or delta: "<<N<<endl;
       }
    void Calc()
    {
        if(var==1)
         {
               cout<<"**********************************"<<endl;
               cout<<"\t* N * X * F(X) *\t"<<endl;
               cout<<"**********************************"<<endl;
               cout<<"+----------+----------+----------+\n"<<endl;
            for(i = 1 ; i<=N; i++)
          {
            x3=x1*2;
            //my function F(x)=x1*2
            Dump();
            x1++;
           }
         }
        else if(var==2)
        {
              cout<<"**********************************"<<endl;
              cout<<"\t* N * X * F(X) *\t"<<endl;
              cout<<"**********************************"<<endl;
              cout<<"+----------+----------+----------+\n"<<endl;
           for(i = 0; i<=x2; i++)
          {
            x3=x1*2;
            //my function F(x)=x1*2
            Dump();
            x1=x1+N;
          }
        }
    }
  protected:
    int x1,x2,N,var;
    int x3,i;
};


int main()
{
     setlocale(LC_ALL, "Russian");

     MyFunc Func;
     Func.CinArguments();
     Func.Get();
     Func.Calc();


    return 0;
}
