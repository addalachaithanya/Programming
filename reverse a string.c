void reverse(char *string){
    int i,j;
    char temp;
    int len = strlen(string);
    printf("%d\n",len);
    for(i = 0,j=len - 1; i < j ; i++,j--){
    temp = string[i];
    string[i] = string[j];
    string[j] = temp;         
    }
   
}
 
int main(){
char str[10] = "charan";
 reverse(str);
 printf("%s\n",str); 
return 1;
}

