char * getHint(char * secret, char * guess){
    int a1[10]={0};
    int a2[10]={0};
    int bull=0,cow=0;
    for(int i=0;i<strlen(secret);i++){
        if(secret[i]==guess[i]){
            bull++;
        }
        else{
            a1[secret[i]-'0']++;
            a2[guess[i]-'0']++;
        }
    }
    int temp=0;
    for(int i=0;i<10;i++){
        if(a1[i]!=0 && a2[i]!=0){
            temp=a1[i]<a2[i]?a1[i]:a2[i];
            cow=cow+temp;
        }
    
    }
    char *arr=(char*)malloc(sizeof(char)*10);
    char bulls[4],cows[4];
    sprintf(bulls,"%d",bull);
    sprintf(cows,"%d",cow);
    
    int j=0;
    for(int i=0;i<strlen(bulls);i++){
        arr[j++]=bulls[i];
    }
    arr[j++]='A';
    for(int i=0;i<strlen(cows);i++){
        arr[j++]=cows[i];
    }
    arr[j++]='B';
    arr[j++]='\0';
    return arr;

}
