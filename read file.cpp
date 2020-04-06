#include<stdio.h>
#include<cstdlib>
#include<iostream>
#include<string.h>
#include<fstream>
#include<dirent.h>
#include <bits/stdc++.h>
using namespace std;
string array[100];
void listFile();

int main(){
	int i=0;
    listFile();
    fstream file; 
    string word, t, q; 
  
    // filename of the file 
    //filename = "file.txt"; 
  
    // opening file 
     
  
    // extracting words from the file 
    for(i=0;i<60;i++){
    	file.open(array[i].c_str());
    	cout<<"abc"<<endl;
    	while (file >> word){ 
    	    // displaying content 
    	    cout << word << endl; 
    	}
    	i=i+1;
	}
  
    return 0; 
}

void listFile(){
	int x=0;
        DIR *pDIR;
        struct dirent *entry;
        if( pDIR=opendir("./Trump Speechs/Trump Speechs") ){
                while(entry = readdir(pDIR)){
                        if( strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0 )
                        array[x]="./Trump Speechs/Trump Speechs/";
                        array[x].append(entry->d_name);
                		x=x+1;
				}
                closedir(pDIR);
        }
        for(int i=0;i<100 ;i++){
        	if(array[i] != ""){
        		cout<<array[i]<<endl;
			}
			else{
				
			}
		}
}
