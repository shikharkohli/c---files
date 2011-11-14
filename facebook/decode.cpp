#include<iostream>
#include<map>
#include<vector>
#include<cstdio>
#include<cstring>

using namespace std;

int finalmap[256];

void decoder(vector<string> input,map<int, vector<string> > dict,int map[],int word=0)
{
    if(word==input.size()) {
        memcpy(finalmap,map,sizeof(map));
        return;
    }
    int len = input[word].length();int k=0;
    for(int i=0;i<dict[len].size();i++) {
        for(int j=0;j<len;j++) {
            if(map[input[word][j]-'0']==0) {
                map[input[word][j]-'0']=dict[len][i][j];
            }
            else if(map[input[word][j]-'0']!=0 && map[input[word][j]-'0']==dict[len][i][j])
            {   }
            else {
                while(j--) {
                    map[input[word][j]]=0;
                }
                k++;
                break;
            }
        }
        decoder(input,dict,map,word+1);
   }
   if(k==len-1)
       return;
}


int main()
{
    freopen("input.txt","r",stdin);
    map<int, vector<string> > dict;
    vector<string> input;
    char ch;string temp;
    cin>>temp;temp="";
    while(temp!="//secret") {
        cin>>temp;
        if(temp!="//secret")
            dict[temp.length()].push_back(temp);
    }  
    temp="";getchar();
    while((ch=getchar())!='\n') {
        if(ch==' ') {
            if(temp.length()) {
                input.push_back(temp);
                temp="";
            }
        }
        else
        {
            temp+=ch;
        }
    }
    if(temp.length()) {
        input.push_back(temp);
    }
    for(map<int, vector< string > >::iterator i = dict.begin();i!=dict.end();i++) {
        cout<<i->first<<"->";
        for(int j=0;j<(i->second).size();j++)
            cout<<i->second[j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<input.size();i++)
        cout<<input[i]<<" ";
    int map[256];
    memset(map,0,sizeof(map));
    decoder(input,dict,map);
    for(int i=0;i<30;i++) {
        //if(finalmap[i]!=0)
            cout<<i<<"->"<<(char)map[i]<<endl;
    }
    return 0;
}
