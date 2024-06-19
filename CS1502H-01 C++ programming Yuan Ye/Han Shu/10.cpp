int magic(int m){
    int a,b,c;
    for(int i=100;i<=999;i++){
        a=i/100;
        b=i/10%10;
        c=i%10;
        if(m==100*a+10*c+b+100*b+10*a+c+100*b+10*c+a+100*c+10*a+b+100*c+10*b+a) return i;
    }
    return -1;
}
