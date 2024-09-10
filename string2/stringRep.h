#ifndef STRING_REP_H
#define STRING_REP_H

class StringRep
{
friend class String;    // handle class -->
private:
    char *str_;
    char len_;
    int rc_;         // 레퍼런스 변수

    StringRep();
    StringRep(const char *s);
    StringRep(const StringRep& rhs);
    
    ~StringRep();

};

#endif
