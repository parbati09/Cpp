#include<stdio.h>
#include<conio.h>
main()
{
int a[10], b[10], c[10],m,n,k,k1,i,j,x;
clrscr();
printf("\n\tPolynomial Addition\n");
printf("\t===================\n");
printf("\n\tEnter the no. of terms of the polynomial:");
scanf("%d", &m);
printf("\n\tEnter the degrees and coefficients:");
for (i=0;i<2*m;i++)
scanf("%d", &a[i]);
printf("\n\tFirst polynomial is:");
k1=0;
if(a[k1+1]==1)
printf("x^%d", a[k1]);
else
printf("%dx^%d", a[k1+1],a[k1]);
k1+=2;
while (k1<i)
{
printf("+%dx^%d", a[k1+1],a[k1]);
k1+=2;
}
printf("\n\n\n\tEnter the no. of terms of 2nd polynomial:");
scanf("%d", &n);
printf("\n\tEnter the degrees and co-efficients:");
for(j=0;j<2*n;j++)
scanf("%d", &b[j]);
printf("\n\tSecond polynomial is:");
k1=0;
if(b[k1+1]==1)
printf("x^%d", b[k1]);
else
printf("%dx^%d",b[k1+1],b[k1]);
k1+=2;
while (k1<2*n)
{
printf("+%dx^%d", b[k1+1],b[k1]);
k1+=2;
}
i=0;
j=0;
k=0;
while (m>0 && n>0)
{
if (a[i]==b[j])
{
c[k+1]=a[i+1]+b[j+1];
c[k]=a[i];
m--;
n--;
i+=2;
j+=2;
}
else if (a[i]>b[j])
{
c[k+1]=a[i+1];
c[k]=a[i];
m--;
i+=2;
}
else
{
c[k+1]=b[j+1];
c[k]=b[j];
n--;
j+=2;
}
k+=2;
}
while (m>0)
{
c[k+1]=a[i+1];
c[k]=a[i];
k+=2;
i+=2;
m--;
}
while (n>0)
{
c[k+1]=b[j+1];
c[k]=b[j];
k+=2;
j+=2;
n--;
}
printf("\n\n\n\n\tSum of the two polynomials is:");
k1=0;
if (c[k1+1]==1)
printf("x^%d", c[k1]);
else
printf("%dx^%d", c[k1+1],c[k1]);
k1+=2;
while (k1<k)
{
if (c[k1+1]==1)
printf("+x^%d", c[k1]);
else
printf("+%dx^%d", c[k1+1], c[k1]);
k1+=2;
}
getch();
return 0;
}
/*Results of polynomial addition
Addition of polynomials when the no. of terms and degrees of corresponding terms are equal
Addition of polynomials when the no. of terms and degrees of corresponding terms are equal

Radhika

Addition of polynomials when the no. of terms and corresponding degrees differ

Radhika

© 2013 Radhika Sreekanth

Comments
sanjay paudel on December 25, 2018:

your idea is really awesome author ..

How can i follow ask other question??

العالمية كلين from Saudi Arabia on December 18, 2016:

hey radhikasree

Great blog.Really looking forward to read more. Cool.

Radhika Sreekanth (author) from Mumbai,India on November 23, 2016:

Thanks Ryan Dsouza for that golden comment. Your comment is inspiring me to create more such content.

Ryan Dsouza on October 14, 2016:

Dear author,

The explanation you have provided is simply golden.... Amazing clarity, precise explanation and an easy to follow explanation..

Thanks your creating such quality content. :)

sangeetha on August 30, 2016:

Thank you mam.

Radhika Sreekanth (author) from Mumbai,India on May 24, 2015:

Hi dharam,

Nice to hear that you own a blog about computer programming. I"ll visit it for sure. Thanks for commenting.

Radhika Sreekanth (author) from Mumbai,India on May 22, 2015:

Hi Garima,

Declare a structure named poly and let a[] and b[] be the data members storing degrees and co-efficients of the polynomials respectively. Then if x and y are two variables of struct 'poly' type, do the addition by accessing the variables as x.a[], x.b[], y.a[] and y.b[]. Hope you got it.

dharam on May 19, 2015:

Thank you very much for this article... I really enjoy reading your articles. I am a software engineer with 7+ years of experience and I author a blog which is for computer programming students. I really got inspiration from your blog. Here is a link to my blog please have a look http://techieme.in

I was trying to explore the possibility of getting few links to my blog from here. Please let me know if you are open to that..

Thanks a tonne.

Garima on May 19, 2015:

how can we do the same using both arrays and structures

Radhika Sreekanth (author) from Mumbai,India on April 21, 2015:

Hi Priyanka,

Without seeing the program I can't answer your query. They are not keywords and hope they are inserted in '//' to describe the relevant step of the program.

priyanka on April 20, 2015:

hello mam,

here i have a doubt

why we are using match,proceed words in add of poly program

and what these words represents

plz give reply to my quest

Radhika Sreekanth (author) from Mumbai,India on November 16, 2014:

Hi Sourath,

Appreciate your question.

A program is one that is crafted according to some particular requirements and it works best for that criteria only. So if the program asks you to input degree in decreasing order, you should feed it in that manner itself to get results. Else the program may crash as it is not programmed according to your likes.

If you wish, a validation can be included that says, "Input data don't match the program format".

Sourath on November 15, 2014:

What happens if someone doesn't inputs the polynomial degree in decreasing order.I mean if someone enters the polynomial as both increasing and decreasing order of degree

1st polynomial as : 3x^6+5x^4+2x^2+1

2nd polynomial as :2+7x^2+3x^4+2x^6

mammootty on March 01, 2014:

thank u polynomial addition is very simple written than me.any ways thanks a lot.

Radhika Sreekanth (author) from Mumbai,India on September 21, 2013:

Thanks jeni!

jeni... on September 17, 2013:

this program is very easily to study.....

Radhika Sreekanth (author) from Mumbai,India on September 13, 2013:

@Himanshu

Algorithm for multiplication would take time to develop as the entire logic is different. Give me some time, then I'll post it.

Himanshu on September 12, 2013:

HOW to multiply of polynomial equation , plz include c code with algo...

Radhika Sreekanth (author) from Mumbai,India on March 06, 2013:

Thanks atein for reading and voting. Yes, we can do it using structures simply or even by using linked lists. That may shorten the code length too.

atein on March 06, 2013:

Good hub . Voted up . Nice Flowchart/ Algo . We could have done the same using structures . I mean we can also use structures in C to add polynomials . Right ?

Radhika Sreekanth (author) from Mumbai,India on March 05, 2013:

Hi Ruby,

Yes, this is going to be useful for students of Computer programming. I've worked as a Faculty with Aptech Computer Education Centre in the past. Thanks for reading and trying it. Take care.

Ruby Jean Richert from Southern Illinois on March 05, 2013:

I am sure this is useful to many who study this type of mathematics, but for me, i am lost, but i have a hard time with any kind of math. I was able to work out one part after you explained the technique. Thank's for sharing. Are you a teacher? Cheers.

BY RADHIKA SREEKANTH


Around the Web
[Gallery] Always Put A Plastic Bottle On Your Tires When Parked, Here's Why
[Gallery] Always Put A Plastic Bottle On Your Tires When Parked, Here's Why
Novelodge | Sponsored
[Pics] Here’s What 30 Historical Figures Actually Looked Like
[Pics] Here’s What 30 Historical Figures Actually Looked Like
Gloriousa | Sponsored
Retirement Villages Near Kolkata Might Have Seniors Packing Their Bags
Retirement Villages Near Kolkata Might Have Seniors Packing Their Bags
Senior Living | Sponsored Listings | Sponsored
Modern Home Transformations: From Frigid To Welcoming
Modern Home Transformations: From Frigid To Welcoming
Mansion Global | Sponsored
Living in Kolkata? Don't Buy Hearing Aids Before Reading This
Hear.com | Sponsored
5 Scariest Prisoners of All Time
5 Scariest Prisoners of All Time
Priscilla Presley plastic surgery pictures - before & after
Priscilla Presley plastic surgery pictures - before & after
Where Do The Richest Americans Live?
Where Do The Richest Americans Live?
Mansion Global | Sponsored
[Pics] Prince Harry Has Been Told His Fate Once Charles Becomes King
[Pics] Prince Harry Has Been Told His Fate Once Charles Becomes King
Novelodge | Sponsored
Doctors Baffled: Japanese Method Sucks Toxins Out Of The Body(Watch!)
Doctors Baffled: Japanese Method Sucks Toxins Out Of The Body(Watch!)
tech4-you.com | Sponsored
[Pics] The Most Embarrassing Holiday Photos That Didn't Go As Planned
[Pics] The Most Embarrassing Holiday Photos That Didn't Go As Planned
Gloriousa | Sponsored
Here's How These Viral Shorts Look (and Feel) on 11 Different Bodies
Here's How These Viral Shorts Look (and Feel) on 11 Different Bodies
Outdoor Voices | Sponsored
What Happens To Us When We Die?
What Happens To Us When We Die?
Trump Derangement Syndrome - Part III
Trump Derangement Syndrome - Part III
[Pics] Royal Family Confirms Unfortunate News
[Pics] Royal Family Confirms Unfortunate News
xfreehub | Sponsored
[Gallery] Mom Kicked Out Of Water Park For Her Bikini
[Gallery] Mom Kicked Out Of Water Park For Her Bikini
Cleverst | Sponsored
Doctors Baffled: Simple Tip Relieves Years of Joint Pain and Arthritis (Try Tonight)
Doctors Baffled: Simple Tip Relieves Years of Joint Pain and Arthritis (Try Tonight)
Health News Worldwide | Sponsored
[Pics] This Is What The  Perfect  Female Body Looked Like 100 Years Ago (and every decade since)
[Pics] This Is What The Perfect Female Body Looked Like 100 Years Ago (and every decade since)
Tiparents | Sponsored
[Photos] Confirmed: This is The Deadliest Snake on Earth
[Photos] Confirmed: This is The Deadliest Snake on Earth
Articlesvally | Sponsored
Related Articles

CHRISTMAS
National Ugly Sweater Day Is December 17, 2021
BY VYNYL POPSJUST NOW
PARENTING SKILLS, STYLES & ADVICE
How Can Poke'mon Go Encourage and Aid Children with Autism to Socialise, Strengthen Relationships and Explore
BY ANGELA LANCASTER42 SECONDS AGO
GARDENING
How I Got Tiger Orchid or Grammatophyllum Speciosum Plant To Bloom
BY MAZLAN A48 SECONDS AGO
ADOPTION
Do You Know My Name?
BY JACKEE ASHWIN27 MINUTES AGO
HISTORY & ARCHAEOLOGY
The Life and Death of Rasputin: The Mad Monk
BY MARK CARUTHERS50 MINUTES AGO
COMMERCIAL & CREATIVE WRITING
A Word to the Wise
BY PAM MORRIS1 HOUR AGO
MARKETING & SALES
Is SMM a 24/7 job or 25/8?
BY JULIA1 HOUR AGO
PARENTING SKILLS, STYLES & ADVICE
Self Belief and Inner Strength: Our Most Valuable Assets
BY CHITRANGADA SHARAN2 HOURS AGO
FOREIGN LANGUAGES
Japanese Words in Taiwanese
BY PAUL RICHARD KUEHN2 HOURS AGO
TEAM SPORTS
Playing Baseball as a Kid
BY PAUL RICHARD KUEHN2 HOURS AGO
CHRISTIANITY, THE BIBLE & JESUS
THE RAPTURE PRINCIPLE: Is It Before, During, or After?
BY JACK JENN2 HOURS AGO
MUSIC
100 Best Bollywood Sad Songs
BY ANSEL PEREIRA3 HOURS AGO
MARKETING & SALES
Create Ads and Videos
BY RYAN JARVIS CORNELIUS3 HOURS AGO
MUSIC
Top 10 Best Guitar Solos I Ever Heard...
BY JAMESWRITESBEST3 HOURS AGO
FASHION ACCESSORIES
Unique Headbands
BY ERIN BOWER3 HOURS AGO

SEE MORE
Privacy Policy
Terms of Use
About Us
Copyright
© 2021 Maven Media Brands, LLC and respective content providers on this website. HubPages® is a registered trademark of Maven Coalition, Inc. Other product and company names shown may be trademarks of their respective owners. Maven Media Brands, LLC and respective content providers to this website may receive compensation for some links to products and services on this website.
