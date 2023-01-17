#pragma once
#include<iostream> 
#include <string>
#include <fstream>
void excute_command (std::string _file_name = " " ,std::string command = " "){// a function to make other con_fun easer to be written as it just takes a file and a command and deal operations on them you can pass eather one
      std :: string  _command = command+_file_name;
        const char *__command= _command.c_str(); 
        std :: system(__command);
      }
#ifdef __unix__
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

std :: string sys_del="rm ", sys_run = "python ",sys_push = ">>";
namespace UXc {
  void add_file(std::string file_name){
     std:: fstream file ;
      file.open(file_name, std::ios ::out);
     }//end of add_file()
   
  void delete_file(std::string file_name , std :: string command = sys_del){ 
    excute_command(file_name,command);
  }
//end of file_delete
  void run_file (std::string file_name , std :: string command = sys_run){
    excute_command(file_name,command);
  }
  void push_t_file (std :: string file_name,std :: string code,std :: string command = sys_push){
    std :: string _command = "echo \""   + code + " \" " + command + file_name;
    const char *__command = _command.c_str();
    system (__command);
  }
}
#else//for windows file handdling
#include <Windows.h>
#endif
// noice in on see
