#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace  std;
class A{
   char s1[100],s2[100];

   int i,j,k;

  public:
   void input(){
    cin>>s1>>s2;
   }
   void cal(){
    int a[26],b[26];
    for(i=0;i<26;i++)
     a[i]=b[i]=0;
   for(i=0;s1[i]!='\0';i++)
   {
     a[s1[i]-'a']++;
   }
   for(i=0;s2[i]!='\0';i++)
   {
     b[s2[i]-'a']++;
   }
   output(a,b);
  }

  void output(int a[],int b[]){
   int flag=0;

   for(i=0;i<26;i++)
   {
     if(a[i]==b[i]){
      flag=1;
      continue;
     }
     else{
      flag=0;
      break;
     }
   }
    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";
  }

};

int main()
{
  A obj;
  int cases;
  cin>>cases;
  while(cases--)
  {
    obj.input();
    obj.cal();


  }

return 0;
 }

