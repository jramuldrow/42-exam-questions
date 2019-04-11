/* 
Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
*/

// So were reprodcuing the function strcpy

char    *ft_strcpy(char *s1, char *s2)
  {
      int i;
 
      i = 0;
      while (s2[i])
      {
          s1[i] = s2[i]; // so this will make s1 = to whatever s2 is looping through the string
          i++;
      }
      s1[i] = s2[i];  // now that we are finsihing looping though s1[i] will equal s2[i]
      return (s1);
  }
  
 // adding a main function here try it out and see what happens

int main(void)
{
	char str1[] = "Flavio";
	char str2[] = "Gaucho";

	printf("%s\n", str1);   // displaying what str1 is before ft_strcpy is used on it
	ft_strcpy(str1, str2);  // calling out functtion ft_strcpy on the strings
	printf("%s\n", str1);  // str1 should now become str2
	return (0);
}
