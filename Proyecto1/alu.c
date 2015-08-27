
#include "alu.h"

void ADD(int8_t Rd,int8_t Rr)
{
    Rd=Rd+Rr;//suma 2 registros
    return Rd;
};

void SUB(int8_t Rd,int8_t Rr)
{
    Rd=Rd-Rr;//resta 2 registros
    return Rd;
};

void INC(int8_t Rd)
{
    Rd=Rd+1;//incrementa el registro
    return Rd;
};

void DEC(int8_t Rd)
{
    Rd=Rd-1;//decrementa el registro
    return Rd;
};

void AND(int8_t Rd,int8_t Rr)
{
    Rd=Rd&Rr;//and entre los registros
};

void OR(int8_t Rd,int8_t Rr)
{
    Rd=Rd|Rr;//or entre los registros
};

void EOR(int8_t Rd,int8_t Rr)
{
    Rd=Rd^Rr;//xor entre los registros
};

void MOV(int8_t Rd, int8_t Rr)
{
    Rd=Rr;
};
