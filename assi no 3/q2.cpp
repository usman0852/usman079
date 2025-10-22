#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int main(){
char input[200];
cout<<"Enter a string: ";
cin.getline(input,200);
char words[50][50];
int wordCount=0;
char *token=strtok(input," ");
while(token!=NULL){
strcpy(words[wordCount],token);
wordCount++;
token=strtok(NULL," ");
}
for(int i=0;i<wordCount;i++){
cout<<"Q"<<i+1<<" = ";
queue<char> q;
int len=strlen(words[i]);
for(int j=0;j<len;j++){
q.push(words[i][j]);
}
while(!q.empty()){
cout<<q.front();
q.pop();
if(!q.empty()) cout<<" -> ";
}
cout<<endl;
}
return 0;
}

