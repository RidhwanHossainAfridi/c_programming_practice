//Ridhwan Hossain Afridi
//1822074043
//String Conversion Assignment

 #include<stdio.h>

 int main(){
     int i;
     char str1[10000];

     printf("Please enter your input: ");
     gets(str1);

     for(i=0;str1[i]!='\0';i++){
        if(str1[i]>='a' && str1[i]<='z'){
            str1[i]=str1[i]-32;
        }
        else if(str1[i]>='A' && str1[i]<='Z'){
            str1[i]=str1[i]+32;
        }
        else if(str1[i]=='.'){
            str1[i]='/';
        }
        else if(str1[i]=='/'){
            str1[i]='.';
        }
        else if(str1[i]=='?'){
            str1[i]=',';
        }
        else if(str1[i]==','){
            str1[i]='?';
        }
        else{
            str1[i]=str1[i];
        }
     }
     printf("Your converted text is: ");
     puts(str1);
     return 0;
 }
