/**
 * *_strcpy - copy content from the source to the destination
 * Description:  Copies the content of *src to *dest including the '0\'
 * @dest: where content is copied to
 * @src: where content is copied from
 * Return: pointer to the destination
 */


char *_strcpy(char *dest, char *src)
{
int c = 0;
while (src(c) != '\0')
{
dest(c) = src(c);
c++;

}
return (dest);
}
