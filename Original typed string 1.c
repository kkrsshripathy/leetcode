int possibleStringCount(char* word) {
    int n=strlen(word),ans=1;
    for(int i=1;i<n;i++){
        if(word[i-1]==word[i]){
            ans++;
        }
    }return ans;
}