//860. Lemonade Change

int main(){

int bills[5], caixa[5], c=0, total=0;

for(int i=0; i<=5; i++){

printf (  "Valor recebido: "  );
scanf (  "%d", & bills[i]  );
printf (  "\n"  );

}

if(bills[c]>5)
printf("False.\n");              //teste primeiro
else{

do{ 

c++;
if(bills[c] == 5)
caixa[c] = 5;
else{
    
    for(int i=0; i<=c; i++)
    total= total+ caixa[i];
    
    if(total - bills[c]<0)
    printf("False.\n");


} 
} while(c<=5);


}
}
