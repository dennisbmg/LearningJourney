void main()
{
char c;
int n=0,d=1,_[2]={0};


while(read(0,&c,1))

c>57?d=(d+(c&2)+3)%4:c>47?n=n*10+(c&15):n>0?_[d%2]+=d%3>0?
n:-n,n=0:0;

for(d=0;d<2;d++)
n+=_[d]<0?-_[d]:_[d];d=10000000;

while(!(n/d)&&(d/=10));
do{
    c=n/d+48;write(1,&c,1);
    }while(n%=d,d/=10);
}