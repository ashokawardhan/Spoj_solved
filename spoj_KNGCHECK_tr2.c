#include <stdio.h>
int main()
{
          int px[8],py[8],xh[2],yh[2],i,j,pw,h,x1,y1,x2,y2,test;
          char temp[2],che;
          scanf("%d",&test);
          while(test--){
                      x2=0;
                      y2=0;
                      pw=0;
                      h=0;
                      for(i=0;i<8;i++){
                         for(j=0;j<8;j++){
                               scanf("%s",temp);
                               if(!strcmp(temp,"BK")){
                                                      x1=i;
                                                      y1=j;
                               }else if(!strcmp(temp,"WK")){
                                                            x2=i;
                                                            y2=j;
                               }else if(!strcmp(temp,"WH")){
                                                            xh[h] = i;
                                                            yh[h] = j;
                                                            h++;
                               }else if(!strcmp(temp,"WP")){
                                                            px[pw]=i;
                                                            py[pw]=j;
                                                            pw++;
                               }
                         }
                      }
                      int flag=0;
                      if(x2!=0 || y2!=0){
                                 if((((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))==1)||(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))==2)){
                                       flag=1;
                                    //   continue;
                                 }
                      }
                      if(!flag){
                      for(i=0;i<h;i++){
                                      if (((xh[i]-x1)*(xh[i]-x1)+(yh[i]-y1)*(yh[i]-y1))==5){
                                               flag=1;
                                               break;
                                      }
                      }
                      }
                      if(!flag){
                                for(i=0;i<pw;i++){
                                                   if((y1-py[i])==1){
                                                                     if(((x1-px[i])==1)||((px[i]-x1)==1)){
                                                                                                          flag=1;
                                                                                                         break;
                                                                     }
                                                   }
                                }
                      }
                      if(flag) printf("Check\n");
                      else printf("Not Check\n");
                      fflush (stdin);


          }
          return 0;
}
