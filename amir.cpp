#include<stdio.h>
#include<conio.h>
struct page{
    int process;
    int *address;
};


int main(){
    
    int ram[20],vram[20];
    int p,p_r,p_v,i,s_p,*add,top=0;
    struct page table[40];
    printf("\nEnter the number of process in ram");
    scanf("%d",&p_r);
    for(i=0;i<p_r;i++){
        printf("\nenter process::");
        scanf("%d",&p); 
        ram[i]=p;
        
    }
    
    printf("\nenter the number of process in vram");
    scanf("%d",&p_v);
    for(i=0;i<p_v;i++){
        printf("\nenter process::");
        scanf("%d",&p);
        vram[i]=p;
        
    }
    
  x:  printf("\nall processes in ram");
    for(i=0;i<p_r;i++){
        printf("\nprocess:: p[%d]",ram[i]);
    }
    
    
    printf("\nall processes in vram");
    for(i=0;i<p_v;i++){
        printf("\nprocess:: p[%d]",vram[i]);
    }
    
    
    
    
    for(i=0;i<p_r;i++){
        table[i].process=ram[i];
        table[i].address=&ram[i];
    }
    
    for(i=p_r;i<(p_r+p_v);i++){
    	int j=0;
         table[i].process=vram[j];
         table[i].address=NULL;
		j++;
    }
    for(i=0;i<p_r+p_v;i++){
        printf("\n%d::",table[i].process);
        printf("%d\n",table[i].address);
    }

    
    printf("\nenter process  you want in cpu::");
    scanf("%d",&s_p);
    for(i=0;i<p_r+p_v;i++){
    	
        if(s_p==table[i].process){
        	add=table[i].address;    	
        	break;
        }
    }

    if(add==0){
		for(i=0;i<p_v;i++){
			
        if(s_p==vram[i]){
        	int temp = ram[top];
        	
        	ram[top]=vram[i];
        	
        	vram[i]=temp;
        	top++;
        	goto x;
        	
        }
    }
    }else{
    	printf("\nprocess processed");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    getch();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    
}
