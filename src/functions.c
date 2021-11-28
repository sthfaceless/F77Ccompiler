//
// Created by danil on 29.11.2021.
//

#include "functions.h"

char* cast_type(char* name){
    if(strcmp(name, "integer") == 0){
        return "int";
    }else if(strcmp(name, "real") == 0){
        return "double";
    }else if(strcmp(name, "logical") == 0){
        return "byte";
    }else if(strcmp(name, "string") == 0){
        return "char *";
    }else{
        return name;
    }
}
