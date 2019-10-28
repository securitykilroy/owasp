#include <iostream>
#include <fstream>
#include <string.h>

using namespace std; 

typedef struct person {
    char name[50];
    char street[100];
    char city[50];
    char state[50];
    int id;
} person_t;

int main (int argc, char **argv)
{
    ifstream infile("people.dat", ios::binary);
    person_t personinst;

    infile.read((char *)&personinst, sizeof(personinst));

    cout << personinst.name << endl;
    
    return 0;
}