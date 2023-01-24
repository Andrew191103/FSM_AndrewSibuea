void states(int s0, int s1, int b, int* S0, int* S1, int* o0, int* o1) {
    *S0 = (!s0) & b;
    *S1 = (!s0) &s1;
    *o0 =  (!s0) & b;
    *o1 = (!s0) &s1;
}
