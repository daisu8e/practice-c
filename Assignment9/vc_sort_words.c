/**
 * File              : vc_sort_words.c
 * Author            : Gui & Daisuke
 * Date              : Thu 14 Feb 2019
 */

static int compare_strings(char *str1,char *str2, int i){
  if (str1[i] == '\0'){
    return 1;
  }else if (str2[i] == '\0'){
    return 0;
  }
  else if (str1[i] > str2[i]){
    return 0;
  }else if (str1[i] < str2[i]){
    return 1;
  }else{
    return compare_strings(str1,str2,++i);
  }
}

static void vc_swap(char **s1, char **s2) {
  char *temp = *s1;
  *s1 = *s2;
  *s2 = temp;
}

static int vc_words_size(char **words) {
  int i = 0;
  while (words[i] != '\0') {
    i++;
  }
  return i;
}

void vc_sort_words(char **words) {
  int size = vc_words_size(words);
  for(int i = 0; i < size; i++){
    for (int j = i+1; j < size; j++) {
      if (compare_strings(words[i],words[j],0) == 0){
        vc_swap(&words[i],&words[j]);
      }
    }
  }
}

