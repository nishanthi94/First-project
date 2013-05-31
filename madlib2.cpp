#include <iostream.h>
#include <string.h>
#include <stdlib.h>
struct StringData 
   {
    	char str[100];
   };
int main()
    {
        int choice;
       	StringData data[17];
       	cout<<"######MADLIBS#######"<<endl;
       	cout<<"Enter input:"<<endl;
       	cout<<"Verb ending with ""ing"":";
       	cin>>data[0].str;
       	cout<<"\nPlural noun:";
       	cin>>data[1].str;
       	cout<<"\nAdjective:";
       	cin>>data[2].str;
       	cout<<"\nPlural noun:";
       	cin>>data[3].str;
       	cout<<"\nPlural noun:";
       	cin>>data[4].str;
       	cout<<"\nPlural noun:";
       	cin>>data[5].str;
       	cout<<"\nPlural noun:";
       	cin>>data[6].str;
       	cout<<"\nNoun:";
       	cin>>data[7].str;
       	cout<<"\nNoun:";
       	cin>>data[8].str;
       	cout<<"\nPlural noun:";
       	cin>>data[9].str;
       	cout<<"\nNoun:";
       	cin>>data[10].str;
       	cout<<"\nBody part:";
       	cin>>data[11].str;
       	cout<<"\nAdverb:";
       	cin>>data[12].str;
       	cout<<"\nNumber:";
       	cin>>data[13].str;
       	cout<<"\nPlural noun:";
       	cin>>data[14].str;
       	cout<<"\nBody part:";
       	cin>>data[15].str;
       	cout<<"\nAdjective:";
       	cin>>data[16].str;
       	cout<<"The generated story is...\n";
       	cout<<"THE DANCE";
        cout<<"\nThe waltz, the merengue, swing, and ballroom ";
        cout<<data[0].str;
        cout<<" are making a comeback with kids of all ";
        cout<<data[1].str;
        cout<<". A recent study shows a/an";
        cout<<data[2].str;
        cout<<" percentage of students in elementary ";
        cout<<data[3].str;
        cout<<", middle ";
        cout<<data[4].str;
        cout<<", and even high ";
        cout<<data[5].str;
        cout<<" are dropping their phys ed ";
        cout<<data[6].str;
        cout<<" in golf, bowling, and ";
        cout<<data[7].str;
        cout<<"-pong to take up ";
        cout<<data[8].str;
        cout<<" dancing. Close dancing, in which partners hold each other's ";
        cout<<data[9].str;
        cout<<" and put their ";
        cout<<data[10].str;
        cout<<" around each other's ";
        cout<<data[11].str;
        cout<<" hand, is considered ";
        cout<<data[12].str;
        cout<<" cool these days. Sociologists predict that within the next ";
        cout<<data[13].str;
        cout<<" years, almost all teen ";
        cout<<data[14].str;
        cout<<" will once again be dancing cheek to ";
        cout<<data[15].str;
        cout<<" to the sound of a/an ";
        cout<<data[16].str;
        cout<<" band.";
        system("pause");    
     	return 0;
   } 
