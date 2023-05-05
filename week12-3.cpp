char * frequencySort(char * s){
    int N=strlen(s);
    int H[62]={};//糶26糶26计10–常瞷0Ω
    char alphabet[62];//参璸计癸莱ダ
    for(int i=0;i<26;i++) alphabet[i] ='A'+i;
    for(int i=0;i<26;i++) alphabet[i+26] ='a'+i;
    for(int i=0;i<10;i++) alphabet[i+26+26] ='0'+i;
    //参璸–ダ瞷Ω计
    for(int i=0;i<N;i++){
        char c=s[i];
        if(c>='A' && c<='Z') H[c-'A']++;//Ω
        if(c>='a' && c<='z') H[c-'a'+26]++;//磷秨玡26糶
        if(c>='0' && c<='9') H[c-'0'+52]++;//磷秨玡26+26糶
    }//璶逼
    for(int i=0;i<62;i++){
        for(int j=i+1;j<62;j++){
            if(H[i]<H[j]){//辨┮オ娩碞璶ユ传
            int temp=H[i];
            H[i]=H[j];
            H[j]=temp;
            char c=alphabet[i];
            alphabet[i]=alphabet[j];
            alphabet[j]=c;
            }
        }
    }
    int len=0;
    for(int i=0;i<62;i++){
        for(int k=0;k<H[i];k++) s[len++]=alphabet[i];
    }
    return s;
}
