#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>

void swap(int a[],int b,int c) //a is array,b is number to find,c(0 or 1) is direction to swap
{
    int count;
    int length=28;//length of array
    for(count=0;count<length;count++)
    {
        if(a[count]==b && b==27 && c==0)//if swaping is with beneath
        {
            if(count<27)
            {
                int e=a[count];
                a[count]=a[count+1];
                a[count+1]=e;
                break;
            }
            else
            {
                int e=a[count];
                a[count]=a[0];
                a[0]=e;
                break;
            }
        }
        if(a[count]==b && b==28 && c==0)//if swaping with beneath
        {
            if(count<26)
            {
            int e=a[count];
            a[count]=a[count+1];
            a[count+1]=a[count+2];
            a[count+2]=e;
            break;
            }
            else if(count==26)
            {
                int e=a[count];
                a[count]=a[count+1];
                a[count+1]=a[0];
                a[0]=e;
                break;
            }
            else
            {
                int e=a[count];
                a[count]=a[0];
                a[0]=a[1];
                a[1]=e;
                break;
            }
        }
        if(a[count]==b && b==27 && c==1)//if swaping is with above
            {
            if(count>0)
            {
                int e=a[count];
                a[count]=a[count-1];
                a[count-1]=e;
                break;
            }
            else
            {
                int e=a[count];
                a[count]=a[27];
                a[27]=e;
                break;
            }
        }
        if(a[count]==b && b==28 && c==1)//if swaping with above
        {
            if(count>1)
            {
            int e=a[count];
            a[count]=a[count-1];
            a[count-1]=a[count-2];
            a[count-2]=e;
            break;
            }
            else if(count==1)
            {
                int e=a[count];
                a[count]=a[0];
                a[0]=a[27];
                a[27]=e;
                break;
            }
            else
            {
                int e=a[count];
                a[0]=a[27];
                a[27]=a[26];
                a[26]=e;
                break;
            }
        }
    }
}
/********************************************************************************************************/
int cor_alpha(char a[])
{
    int length=strlen(a);//length of string
    int index=0;//index of new array
    char new_array[500];
    int i;//for loop counter
    for(i=0;i<length;i++)
    {
        if(a[i]>='A' && a[i]<='z')
        {
            new_array[index]=a[i];
            index++;
        }
    }
    int j=0;//while loop counter
    printf("Cleaned Message.\t");
    while(new_array[j]>='A' && new_array[j]<='z')
    {
     printf("%c\t",toupper(new_array[j]));
        j++;


    }
    j=0;//while loop counter
    printf("\nLetters to Numbers.\t");
    while(new_array[j]>='A' && new_array[j]<='z')
    {
     printf("%d\t",toupper(new_array[j])-64);
     a[j]=toupper(new_array[j])-64;
        j++;


    }

return j;
}

/********************************************************************************************************/
void step_4(int a[])
{
    int last=a[27];
    int b[last];//first elements by seeing last number
    int k[27-last];//with elements after 'b' and before last element
    int final[28];//after placing before last card
    int c=0;
    for(c;c<last;c++)
    {
        b[c]=a[c];
    }
    int d=last;
    int e=0;
    for(d;d<27;d++)
    {
        k[e]=a[d];
        e++;
    }
    int f=0;
    int g=0;
    for(f;f<27;f++)
    {
        if(f<(27-last))
        {
            final[f]=k[f];
        }
        else
        {
            final[f]=b[g];
            g++;
        }
    }


    final[27]=a[27];
int kj=0;
    for(kj;kj<28;kj++)
    {
        a[kj]=final[kj];
    }
        /***************************************************/
}
/***********************************************************************************************************************/

void step3(int array1[])
{
int i;//for loop counter
int j=28;
for(i=0;i<j;i++)
{
    if(array1[i]==27 || array1[i]==28)
        break;
}
            //i is the index of first joker
int k=i+1;
for(k;k<j;k++)
{
    if(array1[k]==27 || array1[k]==28)
        break;
}
            // k is the index of second joker
int arr1[i]; //array before first joker
int x1=k-i+1;
int arr2[x1]; //array between the joker
int x2=27-k;
int arr3[x2]; //array after the second joker

int l;
for(l=0;l<i;l++)
{
    arr1[l]=array1[l];

}
int m=0;
l=l;
for(l;l<=k;l++)
{
    arr2[m]=array1[l];
    m++;
}
int n=0;
l=l;
for(l;l<j;l++)
{
    arr3[n]=array1[l];
    n++;
}
/********************************************************************/
/********************************************************************/
int v_=0;
int v_1=0;
int v_2=0;
for(v_;v_<28;v_++)
{
    if(v_<x2)
        array1[v_]=arr3[v_];
    else if(v_<(x2+x1))
            {
            array1[v_]=arr2[v_1];
            v_1++;
            }
    else if(v_<x2+x1+i)
        {

            array1[v_]=arr1[v_2];
            v_2++;
        }
}
}



/***********************************************************************************************************************/
int step5(int a[])
{
    int b=a[0];
    int c=a[b];
    return c;
}

/***********************************************************************************************************************/
int task2(int a,int b)//a is cor-alpha and b is keystream value
{
    int c;
    c=(a+b);
    if(c>26)
        c=c-26;

    return c;
}
/***********************************************************************************************************************/
int step6(int a[])
{
    int b=a[0];
    int c=a[b];
    return c;//c is keystreams value
}
/***********************************************************************************************************************/
void step7(int a[])
{
   int b=a[27];
   int c[b];
   int i=0;
   int d=b;
   for(i;i<b;i++)
   {
       c[i]=a[27-d];
       d--;
   }

   int f[27-b];
   i=0;
   for(i;i<27-b;i++)
   {
       f[i]=a[i];
   }
   i=0;
   int j=0;
   for(i;i<27;i++)
   {
       if(i<b)
           a[i]=c[i];
       else
       {
        a[i]=f[j];
        j++;
       }

   }
   }
   /***********************************************************************************************************************/
int rev2(int a,int b)
{
    int g;
    if(a<=b)
       {
           a=a+26;
           }
    g=a-b;
    return g;

}
/***********************************************************************************************************************/
int main()
{
    int dec1[]={26 ,2 ,5, 8, 13, 19, 16, 22, 25,28 , 3 ,6 ,9, 12, 15, 18 ,21, 24, 27, 4, 7, 10 ,11, 14, 17, 20, 23, 1 };
    char st[500];
    printf("+---------------------+\n");
    printf("| Solitaire Algorithm |\n");
    printf("+---------------------+\n");
    printf("\nInput Message.");
    gets(st);
    printf("\n\nENCRYPTION PASS ...\n\n");

    int stlength=cor_alpha(st);//length of passed string
    int i=0;
    int keyvalue[stlength];
    for(i;i<stlength;i++)
    {
        swap(dec1,27,0);
        swap(dec1,28,0);
        step3(dec1);
        step_4(dec1);
        step5(dec1);
        keyvalue[i]=step5(dec1);
    }

printf("\n");
i=0;
printf("Generated Keystreams.\t");
while(i<stlength)
{
    printf("%d\t",keyvalue[i]);
    i++;
}
i=0;
char enumber[stlength];
for(i;i<stlength;i++)
{
    enumber[i]=task2(st[i],keyvalue[i]);
}
printf("\nEncoded Numbers.\t");
i=0;
for(i;i<stlength;i++)
{
    printf("%d\t",enumber[i]);
}

i=0;
printf("\nEncoded Message.\t");
for(i;i<stlength;i++)
{
    printf("%c\t",enumber[i]+64);
}

/*************************************************************************************decryption**********/
int a=stlength;
char st1[a];
i=0;
for(i;i<a;i++)
{   if((enumber[i]+64)>='A'&&(enumber[i]+64)<='z')
    st1[i]=enumber[i]+64;
}
printf("\n\n\nDECRYPTION PASS ...\n\n");
i=0;
printf("\nEncoded Message.\t");
for(i;i<a;i++)
{
    printf("%c\t",st1[i]);
}
printf("\nLetters to Numbers.\t");
i=0;
for(i;i<stlength;i++)
{
    printf("%d\t",st1[i]-64);
}
printf("\nGenerated Keystreams.\t");
i=0;
int keyvalue1[a];
int c;
for(i;i<a;i++)
{
     c=step6(dec1);

     keyvalue1[i]=c;
    step7(dec1);
    step3(dec1);
    swap(dec1,28,1);
    swap(dec1,27,1);

}
i=a-1;
for(i;i>=0;i--)
{
    printf("%d\t",keyvalue1[i]);
}
printf("\nDecoded Numbers.\t");
i=a-1;
int d;
int e=0;
int z[a];
for(i;i>=0;i--)
{
    d=rev2(st1[e]-64,keyvalue1[i]);
    printf("%d\t",d);
    z[e]=d;
    e++;

}
printf("\nDecoded Message.\t");
i=0;
for(i;i<a;i++)
{
 printf("%c\t",z[i]+64);
}
}
