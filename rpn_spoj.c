#include<stdio.h>
#include<string.h>


#define SIZE 80

char norm[SIZE], rpn[SIZE], stac[SIZE];
int top=-1;
int prec(char ch);
char pop();
char topele();
void push(char ch);

int main(){
    char ele, elem;
    int z, i, t, prep, pre, popped, j=0, chk=0, top=0 ;
    printf("Enter the no. of times you would like to get postfix:");
    scanf("%d", &t);

    for(z=0; z<t; z++){
            j=0;
        strcpy(rpn," ");

        printf("Enter the expression:");
        scanf("%s", norm);

        for(i=0; norm[i]!='\0'; i++){
            if(norm[i]!='(' && norm[i]!=')'&& norm[i]!='*' && norm[i]!='^' && norm[i]!='/' && norm[i]!='+' && norm[i]!='-')
                rpn[j++]=norm[i];
            else if (norm[i]=='('){
                        elem=norm[i];
                        push(elem);
            }
            else if(norm[i]==')'){
                while((popped=pop())!='('){
                        rpn[j++]=popped;
                }
            }
            else{
                elem=norm[i];
                pre=prec(elem);
                ele=topele();
                prep=prec(ele);
                if(pre>prep)
                    push(elem);
                else{
                    while(prep>=pre){
                        if(ele=='#')
                            break;
                        ele=topele();
                        rpn[j++]=popped;
                        prep=prec(ele);
                    }
                    push(elem);
                }
            }
        }
            while((popped=pop())!='#')
                rpn[j++]=popped;
            rpn[j]='\0';
            printf("\n Reverse Polish Notation: %s", rpn);
    }
    return 0;
}

int prec(char ch){
    switch(ch){
        case '^' : return 5;
        case '/' : return 4;
        case '*' : return 4;
        case '+' : return 3;
        case '-' : return 3;
        default  : return 0;
    }
}

char pop(){
    char ret;
    if(top!=-1){
        ret=stac[top];
        top--;
        return ret;
    }
    else
        return '#';
}

char topele(){
    char ch;
    if(top!=-1)
        ch=stac[top];
    else
        ch='#';
    return ch;
}

void push(char ch){
    if(top!=SIZE-1){
        top++;
        stac[top]=ch;
    }

}
