nt main() {

   int h ;
   int m ;
   int s ;
   scanf("%d%d%d",&h,&m,&s);
   s++;
   int rem = s/60;
   s = s%60;
   m += rem;
   rem = m/60;
   m = m%60;
   h += rem;
   h = h%24;
   
    return 0;
}
