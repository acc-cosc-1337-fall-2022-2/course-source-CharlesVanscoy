//add include statements
#include "func.h"
//add function code here
double get_gc_content(const string &dna){
    double gc_cont = 0;
    int i = dna.length();
    int j = 0;
    while(i > 0){
        if(dna[i-1] == 'C' || dna[i-1] == 'G'){
            gc_cont++;
        }
        i--;
    }
    return gc_cont/dna.length();
}

string get_dna_complement(string dna){
    string dna_comp;
    int i = 0;
    while(i < dna.length()){
        switch(dna[i]){
            case 'G':
                dna_comp += 'C';
                break;
            case 'C':
                dna_comp += 'G';
                break;
            case 'A':
                dna_comp += 'T';
                break;
            case 'T':
                dna_comp += 'A';
                break;
        }
        i++;
    }
    dna_comp = reverse_string(dna_comp);
    return dna_comp;
}

string reverse_string(string dna){
    string revy;
    int i = 0;
    int j = dna.length() - 1;
    while(i < dna.length()){
        revy += dna[j];
        i++;
        j--;
    }
    return revy;
}