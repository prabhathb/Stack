#include <stdio.h>
#include <stdlib.h>

void push(char data);
char pop();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node{
	char c;
	struct node* next;
};

struct node* top;
unsigned short int count = 0;

int main(int argc, char *argv[]) {
	
	char d;
	printf("Top end is %d\n",top);
	push('1');
	printf("Count is %d\n",count);
	push('2');
	printf("Count is %d\n",count);	
	push('3');
	printf("Count is %d\n",count);	
	push('4');
	printf("Count is %d\n",count);	
	push('5');
	printf("Count is %d\n",count);
	push('6');
	printf("Count is %d\n",count);
	push('7');
	printf("Count is %d\n",count);	
	push('8');
	printf("Count is %d\n",count);	
	push('9');
	printf("Count is %d\n",count);	
	push('0');
	printf("Count is %d\n",count);	
		
	d = pop();
	printf("Character is %c\n",d);
	d = pop();
	printf("Character is %c\n",d);
	d = pop();
	printf("Character is %c\n",d);
	d = pop();
	printf("Character is %c\n",d);
	d = pop();
	printf("Character is %c\n",d);
	d = pop();
	printf("Character is %c\n",d);
	d = pop();
	printf("Character is %c\n",d);
	d = pop();
	printf("Character is %c\n",d);
	d = pop();
	printf("Character is %c\n",d);
	d = pop();
	printf("Character is %c\n",d);	
	d = pop();
	printf("Character is %c\n",d);
	
	printf("Top end is %d\n",top);
	return 0;
}

void push(char data){
	if(count == 0){
		struct node *n = malloc(sizeof(struct node));
		n->c = data;
		n->next = NULL;
		top = n;
		count++;
	}
	else {
		struct node *n = malloc(sizeof(struct node));
		n->c = data;
		n->next = top;
		top = n;
		count++;		
	}
}

char pop(){
	char ret;
		
	if(count == 0){
		ret = '\0';
		printf("Empty Stack\n");		
	}
	else {
		ret = top->c;
		struct node *temp = top;
		top = top->next;
		free(temp);
		count--;
	}	
	return ret;
}
