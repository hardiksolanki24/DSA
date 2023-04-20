string getCompressedString(string &input) {
    // Write your code here.
    int count_arr[26] = {0};

    for (int i = 0; input[i] != '\0'; i++) {
      count_arr[input[i] - 97] += 1;
    }

    char ch = input[0] ;
    string ans = "" ;
    int k = 0;

    for(int i = 0; input[i]!='\0'; i++) 
    {
        if (i == 0 || input[i] != ch) 
        {
          ans   += input[i];
        else if ((count_arr[input[i] - 97]) > 1) 
        {
        ans += char(count_arr[input[i] - 97]);
        k += 2;
        }
        else 
        {
          k++ ;
        }
        ch = input[i] ;
      }
    }
    ans  += '\0';

    // int i = 0;

    input = "" ;

    // for (; ans[i] != '\0'; i++) {
    //   input[i] = ans[i] ;
    // }
    // input[i] = '\0' ; 
}
