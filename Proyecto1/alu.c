
#include "alu.h"

int8_t ADD(int8_t Rd,int8_t Rr)
{
    Rd=Rd+Rr;//suma 2 registros
    return Rd;
};

int8_t SUB(int8_t Rd,int8_t Rr)
{
    Rd=Rd-Rr;//resta 2 registros
    return Rd;
};

int8_t INC(int8_t Rd)
{
    Rd=Rd+1;//incrementa el registro
    return Rd;
};

int8_t DEC(int8_t Rd)
{
    Rd=Rd-1;//decrementa el registro
    return Rd;
};

int8_t AND(int8_t Rd,int8_t Rr)
{
    Rd=Rd&Rr;//and entre los registros
    return Rd;
};

int8_t OR(int8_t Rd,int8_t Rr)
{
    Rd=Rd|Rr;//or entre los registros
    return Rd;
};

int8_t EOR(int8_t Rd,int8_t Rr)
{
    Rd=Rd^Rr;//xor entre los registros
    return Rd;
};

int8_t MOV(int8_t Rd, int8_t Rr)
{
    Rd=Rr;
    return Rd;
};
