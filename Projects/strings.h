int str_len(char a[])
{
int i=0;
while(a[i]!='\0')
 {
  i++;
 }
return i;
}

char* str_cpy(char a[],char b[])
{
int i,len;
len = str_len(a);
for(i=0;i<=len;i++)
 {
  b[i]=a[i];
 }
b[i]='\0';
return b;
}

char* str_ncpy(char a[],char b[],int n)
{
int i,len;
len = n;
for(i=0;i<n;i++)
 {
  b[i]=a[i];
 }
b[i]='\0';
return b;
}

int str_cmp(char a[],char b[])
{
int i,len,count=0;
len = str_len(a);
for(i=0;i<=len;i++)
 {
  if(a[i]==b[i])
   {
    count=0;
   }
  else
   {
    count++;
    break;
   }
 }
if(count==0)
 {
  return 0;
 }
 else
 {
  return 1;
 }
}

int str_ncmp(char a[],char b[],int n)
{
int i,len,count=0;
len = n;
for(i=0;i<n;i++)
 {
  if(a[i]==b[i])
   {
    count=0;
   }
  else
   {
    count++;
    break;
   }
 }
if(count==0)
 {
  return 0;
 }
 else
 {
  return 1;
 }
}

char* str_cat(char a[],char b[])
{
int i,l1,l2;
l1=str_len(a);
l2=str_len(b);
for(i=0;i<=l2;i++)
{
 a[l1+i]=b[i];
}
return a;
}

char* str_ncat(char a[],char b[],int n)
{
int i,l1,l2;
l1=str_len(a);
l2=str_len(b);
for(i=0;i<n;i++)
{
 a[l1+i]=b[i];
}
return a;
}

int str_chr(char a[],char b)
{
int i,count=0;
for(i=0;i<str_len(a);i++)
 {
 if(b==a[i])
  {
  count++;
  break;
  }
 }
if(count>0)
 {
 return i;
 }
else
 {
 return 0;
 }
}

int str_str(char a[],char b[])
{
int i,j,pos,count=0,l1,l2;
l1=str_len(a);
l2=str_len(b);
for(i=0;i<l1;i++)
 {
 if(a[i]==b[0])
  {
  pos=i;
  for(j=0;j<l2;j++)
   {
    if(a[i+j]==b[j])
    {
     count++;
    }
   }
  }
 }
if(count>0)
{
return pos;
}
else
{
return 0;
}
}

char* str_tok(char a[])
{
int i,j,len;
char b[30];
len=str_len(a);
for(i=0;i<=len;i++)
 {
  if(((a[i]>=32&&a[i]<=47)||(a[i]>=58&&a[i]<=64)||(a[i]>=91&&a[i]<=96)||(a[i]>=123&&a[i]<=127)))
  {
   for(j=i;j<len;j++)
   {
    a[j]=a[j+1];
   }
   len--;
  }
 }
return a;
}

