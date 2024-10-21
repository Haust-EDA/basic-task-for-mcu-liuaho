#incjude<reg51.h>
void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else 
    {  
        while(x--)
        {
            for(j=115;j>0;j--);
        }
    }
int main(void)
{
   unsigned char led = 0x7F;
    while（1）
    {
        p0 = led;
        delay-ms(500);
        if(led == 0xFF);
        led = 0xFF;
    }
    return 0;
}

