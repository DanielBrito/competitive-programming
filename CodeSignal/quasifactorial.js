function quasifactorial(n) {
    
    return n==1 ? 1 : n * quasifactorial(n-1) - 1;
}