

//Swarna Dasrao


#include <iostream>
#include <string.h>
#include <string>
#include <cstring>

using namespace std;


class LazyString{
    char *str;
    int len;
    
    
    public:
    LazyString(){
        str = NULL;
        len = -1;
    }
    
    
   char *getString() {
   return str;
   }
    
    
      int length(){
        if(this->len == -1){
            this->len = 0;
            char *tmp = str;
            while(*tmp) {
                this->len++;
                tmp++;
            }
        }
        return this->len;
    }


     LazyString(char *str){
        this->str = str;
        this->len = -1;
    }


    LazyString operator=(char *s){
        if(s == NULL)
        {
            this->str = NULL;
            this->len = -1;
        }
        else{
            this->str = new char[strlen(s) + 1];
            int i=0;
            for(i=0; i<strlen(s); i++){
                this->str[i] = s[i];
            }
            this->str[i] = '\0';
            this->len = -1;
        }
        return *this;
    }

   
    bool operator<(LazyString &s){
        if(this->length() < s.length()){
            return true;
        }
        return strcmp(this->str , s.getString()) < 0;
    }
};

class EagerString{
    char *str;
    int len;

public:
    EagerString(){
        this->str = NULL;
        this->len = -1;
    }

    
    char *getString(){
    return this->str;
   }

    int length(){
        return this->len;
    }

   EagerString(char *str){
        this->str = str;
        this->len = strlen(str);
    }
    
    EagerString operator=(char *s){
        if(s == NULL){
            this->str = NULL;
            this->len = -1;
        }
        else{
            this->str = new char[strlen(s) + 1];
            int i = 0;
            for(i=0; i<strlen(s); i++){
                this->str[i] = s[i];
            }
            this->str[i] = '\0';
            this->len = strlen(s);
        }
        return *this;
    }

    
    bool operator<(EagerString &s){
        if(this->length() < s.length()){
            return true;
        }
        return strcmp(this->str , s.getString()) < 0;
    }
};




int main(){
    EagerString e1 = "eager1";
    EagerString e2;
    e2 = "eager2";
    cout << (e1 < e2) << endl;

    LazyString l1 = "lazy1";
    LazyString l2;
    l2 = "lazy2";
    cout << (l1 < l2) << endl;

    return 0;
}
