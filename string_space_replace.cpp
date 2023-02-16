//so there is a string with spaces now we have to replace each space with phrase "meow" 

#include<iostream>
#include<cstring>
using namespace std;

void meow(char *str)
{
    int space_count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            space_count+=1;
        }
    }
    int last_place=strlen(str)+3*space_count;
    str[last_place]='\0';
    for(int x=strlen(str)-1;x>=0;x--)
    {
        if(str[x]==' ')
        {
            str[last_place-1]='w';
            str[last_place-2]='o';
            str[last_place-3]='e';
            str[last_place-4]='m';
            last_place=last_place-4;
        }
        else
        {
            str[last_place-1]=str[x];
            last_place--;
        }
    }
}
int main()
{
    char input[1000];
    cin.getline(input,1000);
    meow(input);
    cout<<input;
    return 0;
}
