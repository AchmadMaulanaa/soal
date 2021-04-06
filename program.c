/// Segitiga Terbalik 
int main()
{
    int a,b,c,n;
    //input
    printf("masukkan berapa n? : ");scanf("%d",&n);
    printf("\n");
    //rumus
    for(a=0;a<=v;a++)
    {
        for(b=0;b<=a;b++)
        {
        printf(" ");
        }
        for(c=0;c>=(a-v);c--)
        {
        printf("*");
        }
        for(c=0;c<(v-a);c++)
        {
        printf("*");
        }
    printf("");
    }
    }
    return(0);
}

///Array
int main(){
    printf("masukkan berapa n? : ");scanf("%d",&n);
    printf("masukkan berapa m? : ");scanf("%d",&m);
    int array[] = {};
    
    int length = sizeof(array) / sizeof(*array);
    for (int i = 0; i < length; i++){
        printf("Nilai ke-1: %d\n", nilai[i]);
    }
}

///Boolean
int main() {
  int data[100], cari, i, n;
 
  printf("Masukkan banyaknya jumlah data : ");
  scanf("%d", &n);
 
  printf("Input setiap data integer sebanyak %d :\n", n);
 
  for (i = 0; i < n; i++){
    scanf("%d", &data[i]);
  }
 
  printf("Input data yang ingin dicari: ");
  scanf("%d", &cari);
  if(true){
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
        printf("%d berada di indeks ke %d.\n", cari, i+1);
        break;
        }
    }
  }
  if(false){
    if (i == n){
        printf("%d tidak ada.\n", cari);
    }
  }
  return 0;
}

/// Matrik Sama
int main()
{
    int matrik1[3][2] = {{a,b},{c,d},[e,f]};
    int matrik2[3][2] = {{g,h},{i,j},[k,l]};

    //Matrik 1
    printf("masukkan berapa nilai matrix[0][0] : ");scanf("%d",&a);
    printf("masukkan berapa nilai matrix[1][0] : ");scanf("%d",&c);
    printf("masukkan berapa nilai matrix[2][0] : ");scanf("%d",&e);
    
    printf("masukkan berapa nilai matrix[0][1] : ");scanf("%d",&b);
    printf("masukkan berapa nilai matrix[1][1] : ");scanf("%d",&d);
    printf("masukkan berapa nilai matrix[2][1] : ");scanf("%d",&f);

    printf("%d %d \n", a, b);
    printf("%d %d \n", c, d);
    printf("%d %d \n", e, f);

    // Matrik 2
    printf("masukkan berapa nilai matrix[0][0] : ");scanf("%d",&g);
    printf("masukkan berapa nilai matrix[1][0] : ");scanf("%d",&i);
    printf("masukkan berapa nilai matrix[2][0] : ");scanf("%d",&k);
    
    printf("masukkan berapa nilai matrix[0][1] : ");scanf("%d",&h);
    printf("masukkan berapa nilai matrix[1][1] : ");scanf("%d",&j);
    printf("masukkan berapa nilai matrix[2][1] : ");scanf("%d",&l);

    printf("%d %d \n", g, h);
    printf("%d %d \n", i, j);
    printf("%d %d \n", k, l);

    if(a==g && b==h && c==i && d==j && e==k && f==l)
    {
        printf("Matrik Sama");
    }
    else
    {
        printf("Matrik Tidak Sama");
    }

}