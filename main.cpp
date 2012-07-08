  // A simple c++ program to
  // illustrate basic encryption
  // and decryption
  #include<iostream>

  using namespace std;

  void encrypt(char *);
  void decrypt(char *);

  int main(void)
  {
   char str[29]="This is an English sentence.";

   cout<<"Original String:\n";
   cout<<str;
   cout<<endl<<endl;

   encrypt(str);

   cout<<"After Encryption:\n";
   cout<<str;
   cout<<endl<<endl;;

   cout<<"After Decryption:\n";
   decrypt(str);
   cout<<str;
   cout<<endl;
  }

  void encrypt(char *str)
  {
   while(*str!='\0')
   {
    *str^=18; //str = str ^ 18;ab
    str++;
   }
  }

  void decrypt(char *str)
  {
   while(*str!='\0')
   {
    *str^=18; //str = str ^ 18;
    str++;
   }
  }
