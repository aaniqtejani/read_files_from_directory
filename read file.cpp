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
	string file_name=""//file name should be entered in this varable 
    listFile(file_name);
    fstream file; 
    string word, t, q; 
  	
    // filename of the file
    //filename = "file.txt"; 
  
    // opening file 
     
  
    // extracting words from the file 
    for(i=0;i<60;i++){						// in this function every file location checked one by one and then every single word for every file is printed on the console
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

//Function listFile will save the location of all the files in an string array which will then be check one by one in the main code
void listFile(string file_name){
	int x=0;
        DIR *pDIR;
        struct dirent *entry;
        if( pDIR=opendir(file_name) ){
                while(entry = readdir(pDIR)){
                        if( strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0 )
                        array[x]=file_name;
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
