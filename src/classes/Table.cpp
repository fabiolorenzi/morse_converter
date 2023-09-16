#include "Table.h"

Table::Table()
{
    this->a = "._";
    this->b = "_...";
    this->c = "_._.";
    this->d = "_..";
    this->e = ".";
    this->f = ".._.";
    this->g = "__.";
    this->h = "....";
    this->i = "..";
    this->j = ".___";
    this->k = "_._";
    this->l = "._..";
    this->m = "__";
    this->n = "_.";
    this->o = "____";
    this->p = ".__.";
    this->q = "__._";
    this->r = "._.";
    this->s = "...";
    this->t = "_";
    this->u = ".._";
    this->v = "..._";
    this->w = ".__";
    this->x = "_.._";
    this->y = "_.__";
    this->z = "__..";
    this->Zero = "_____";
    this->One = ".___";
    this->Two = "..___";
    this->Three = "...__";
    this->Four = "...._";
    this->Five = ".....";
    this->Six = "_....";
    this->Seven = "__...";
    this->Eight = "___..";
    this->Nine = "____.";
    this->Space = "|";
    this->Dot = "|||";
}

Table::~Table()
{
}

std::string Table::GetKeyFromVar(std::string letter)
{
    if (letter == " ") {
        return Space;
    } else if (letter == "." || letter == "?" || letter == "!") {
        return Dot;
    } else if (letter == "0") {
        return Zero;
    } else if (letter == "1") {
        return One;
    } else if (letter == "2") {
        return Two;
    } else if (letter == "3") {
        return Three;
    } else if (letter == "4") {
        return Four;
    } else if (letter == "5") {
        return Five;
    } else if (letter == "6") {
        return Six;
    } else if (letter == "7") {
        return Seven;
    } else if (letter == "8") {
        return Eight;
    } else if (letter == "9") {
        return Nine;
    } else if (letter == "a" || letter == "A") {
        return a;
    } else if (letter == "b" || letter == "B") {
        return b;
    } else if (letter == "c" || letter == "C") {
        return c;
    } else if (letter == "d" || letter == "D") {
        return d;
    } else if (letter == "e" || letter == "E") {
        return e;
    } else if (letter == "f" || letter == "F") {
        return f;
    } else if (letter == "g" || letter == "G") {
        return g;
    } else if (letter == "h" || letter == "H") {
        return h;
    } else if (letter == "i" || letter == "I") {
        return i;
    } else if (letter == "j" || letter == "J") {
        return j;
    } else if (letter == "k" || letter == "K") {
        return k;
    } else if (letter == "l" || letter == "L") {
        return l;
    } else if (letter == "m" || letter == "M") {
        return m;
    } else if (letter == "n" || letter == "N") {
        return n;
    } else if (letter == "o" || letter == "O") {
        return o;
    } else if (letter == "p" || letter == "P") {
        return p;
    } else if (letter == "q" || letter == "Q") {
        return q;
    } else if (letter == "r" || letter == "R") {
        return r;
    } else if (letter == "s" || letter == "S") {
        return s;
    } else if (letter == "t" || letter == "T") {
        return t;
    } else if (letter == "u" || letter == "U") {
        return u;
    } else if (letter == "v" || letter == "V") {
        return v;
    } else if (letter == "w" || letter == "W") {
        return w;
    } else if (letter == "x" || letter == "X") {
        return x;
    } else if (letter == "y" || letter == "Y") {
        return y;
    } else if (letter == "z" || letter == "Z") {
        return z;
    } else {
        return "";
    };
}