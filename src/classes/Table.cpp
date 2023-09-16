#include "Table.h"

Table::Table()
{
    this->a = ".-";
    this->b = "-...";
    this->c = "-.-.";
    this->d = "-..";
    this->e = ".";
    this->f = "..-.";
    this->g = "--.";
    this->h = "....";
    this->i = "..";
    this->j = ".---";
    this->k = "-.-";
    this->l = ".-..";
    this->m = "--";
    this->n = "-.";
    this->o = "---";
    this->p = ".--.";
    this->q = "--.-";
    this->r = ".-.";
    this->s = "...";
    this->t = "-";
    this->u = "..-";
    this->v = "...-";
    this->w = ".--";
    this->x = "-..-";
    this->y = "-.--";
    this->z = "--..";
    this->Zero = "-----";
    this->One = ".---";
    this->Two = "..---";
    this->Three = "...--";
    this->Four = "....-";
    this->Five = ".....";
    this->Six = "-....";
    this->Seven = "--...";
    this->Eight = "---..";
    this->Nine = "----.";
    this->Space = "/";
    this->Dot = "/-";
}

Table::~Table()
{
}

std::string Table::GetKeyFromVar(char letter)
{
    if (letter == ' ') {
        return Space;
    } else if (letter == '.' || letter == '?' || letter == '!') {
        return Dot;
    } else if (letter == '0') {
        return Zero;
    } else if (letter == '1') {
        return One;
    } else if (letter == '2') {
        return Two;
    } else if (letter == '3') {
        return Three;
    } else if (letter == '4') {
        return Four;
    } else if (letter == '5') {
        return Five;
    } else if (letter == '6') {
        return Six;
    } else if (letter == '7') {
        return Seven;
    } else if (letter == '8') {
        return Eight;
    } else if (letter == '9') {
        return Nine;
    } else if (letter == 'a' || letter == 'A') {
        return a;
    } else if (letter == 'b' || letter == 'B') {
        return b;
    } else if (letter == 'c' || letter == 'C') {
        return c;
    } else if (letter == 'd' || letter == 'D') {
        return d;
    } else if (letter == 'e' || letter == 'E') {
        return e;
    } else if (letter == 'f' || letter == 'F') {
        return f;
    } else if (letter == 'g' || letter == 'G') {
        return g;
    } else if (letter == 'h' || letter == 'H') {
        return h;
    } else if (letter == 'i' || letter == 'I') {
        return i;
    } else if (letter == 'j' || letter == 'J') {
        return j;
    } else if (letter == 'k' || letter == 'K') {
        return k;
    } else if (letter == 'l' || letter == 'L') {
        return l;
    } else if (letter == 'm' || letter == 'M') {
        return m;
    } else if (letter == 'n' || letter == 'N') {
        return n;
    } else if (letter == 'o' || letter == 'O') {
        return o;
    } else if (letter == 'p' || letter == 'P') {
        return p;
    } else if (letter == 'q' || letter == 'Q') {
        return q;
    } else if (letter == 'r' || letter == 'R') {
        return r;
    } else if (letter == 's' || letter == 'S') {
        return s;
    } else if (letter == 't' || letter == 'T') {
        return t;
    } else if (letter == 'u' || letter == 'U') {
        return u;
    } else if (letter == 'v' || letter == 'V') {
        return v;
    } else if (letter == 'w' || letter == 'W') {
        return w;
    } else if (letter == 'x' || letter == 'X') {
        return x;
    } else if (letter == 'y' || letter == 'Y') {
        return y;
    } else if (letter == 'z' || letter == 'Z') {
        return z;
    } else {
        return "";
    };
}