#include<stdlib.h>
#include<ctype.h>

struct list
{
	int data;
	char cdata;
	float fdata;
//	double ddata;
//	long int ldata;
	struct list *next;
};

struct list* createList()
{
	struct list *start;
	
	start = (struct list*)malloc(sizeof(struct list));
	
	start->next=NULL;
	
	return(start);
}

void insertInt_last(struct list* start, int num)
{
     struct list *temp;
     struct list *node;
     
     node = createList();
     
     temp=start;
	 
	 while(temp->next!=NULL)
	{
	   	temp = temp->next;
	}
	 
	 temp->next=node;
	 node->data=num;
	 node->next=NULL;
}

void insertChar_last(struct list* start, char c)
{
     struct list *temp;
     struct list *node;
     
     node = createList();
     
     temp=start;
	 
	 while(temp->next!=NULL)
	{
	   	temp = temp->next;
	}
	 
	 temp->next=node;
	 node->cdata=c;
	 node->next=NULL;
}

void insertFloat_last(struct list* start, float f)
{
     struct list *temp;
     struct list *node;
     
     node = createList();
     
     temp=start;
	 
	 while(temp->next!=NULL)
	{
	   	temp = temp->next;
	}
	 
	 temp->next=node;
	 node->fdata=f;
	 node->next=NULL;
}

//void insertLast_double(struct list* start, double d)
//{
//     struct list *temp;
//     struct list *node;
//     
//     node = createList();
//     
//     temp=start;
//	 
//	 while(temp->next!=NULL)
//	{
//	   	temp = temp->next;
//	}
//	 
//	 temp->next=node;
//	 node->ddata=d;
//	 node->next=NULL;
//}
//
//void insertLast_long(struct list* start, long int i)
//{
//     struct list *temp;
//     struct list *node;
//     
//     node = createList();
//     
//     temp=start;
//	 
//	 while(temp->next!=NULL)
//	{
//	   	temp = temp->next;
//	}
//	 
//	 temp->next=node;
//	 node->ldata=i;
//	 node->next=NULL;
//}

void insertInt_first(struct list* start, int num)
{
    struct list *node;
    
    node = createList();
     
    node->next=start->next;
    start->next=node;
    node->data=num;
     
}

void insertChar_first(struct list* start, char c)
{
    struct list *node;
     
    node = createList();
     
    node->next=start->next;
    start->next=node;
    node->cdata=c;
}

void insertFloat_first(struct list* start, float f)
{
     struct list *node;
     
     node = createList();
     
     node->next=start->next;
     start->next=node;
     node->fdata=f;
}

//void insertFirst_double(struct list* start, double d)
//{
//     struct list *node;
//     
//     node = createList();
//     
//     node->next=start->next;
//     start->next=node;
//     node->ddata=d;
//}
//
//void insertFirst_long(struct list* start, long int i)
//{
//     struct list *node;
//     
//     node = createList();
//     
//     node->next=start->next;
//     start->next=node;
//     node->ldata=i;
//}

void display_int(struct list* start)
{
	struct list *temp;
	temp=start->next;
	
	
	while(temp!=NULL)
    {
    	printf("%d\t",temp->data);
    	temp=temp->next;
	}
	
}

void display_char(struct list* start)
{
	struct list *temp;
	temp=start->next;
	
	
	while(temp!=NULL)
    {
    	printf("%c\t",temp->cdata);
    	temp=temp->next;
	}
	
}

void display_float(struct list* start)
{
	struct list *temp;
	temp=start->next;
	
	
	while(temp!=NULL)
    {
    	printf("%f\t",temp->fdata);
    	temp=temp->next;
	}
	
}

//void display_double(struct list* start)
//{
//	struct list *temp;
//	temp=start->next;
//	
//	
//	while(temp!=NULL)
//    {
//    	printf("%lf\t",temp->ddata);
//    	temp=temp->next;
//	}
//	
//}

//void display_long(struct list* start)
//{
//	struct list *temp;
//	temp=start->next;
//	
//	
//	while(temp!=NULL)
//    {
//    	printf("%ld\t",temp->ldata);
//    	temp=temp->next;
//	}
//	
//}


int count_list(struct list* start)
{
	int count=0;
	
	struct list* temp;
	temp=start->next;
	
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	
	return(count);
	
}


void replaceInt_at(struct list* start, int index, int num)
{
	int c=count_list(start);
	
	int count=0;
	
	if(c<index-1)
	printf("\nERROR:ArrayIndexOutOfBounds\n");
	
	else
	{
		struct list* temp;
		temp=start->next;
		
		while(count!=index)
		{
			temp=temp->next;
			count++;
		}
		
		temp->data=num;
	}
}

void replaceChar_at(struct list* start, int index, char ch)
{
	int c=count_list(start);
	
	int count=0;
	
	if(c<index-1)
	printf("\nERROR:ArrayIndexOutOfBounds\n");
	
	else
	{
		struct list* temp;
		temp=start->next;
		
		while(count!=index)
		{
			temp=temp->next;
			count++;
		}
		
		temp->cdata=ch;
	}
}

void replaceFloat_at(struct list* start, int index, float f)
{
	int c=count_list(start);
	
	int count=0;
	
	if(c<index-1)
	printf("\nERROR:ArrayIndexOutOfBounds\n");
	
	else
	{
		struct list* temp;
		temp=start->next;
		
		while(count!=index)
		{
			temp=temp->next;
			count++;
		}
		
		temp->fdata=f;
	}
}

void insertInt_at(struct list* start, int index, int num)
{
	int c=count_list(start);
	
	int count=0;
	
	if(index>c)
	printf("\nERROR:ArrayIndexOutOfBounds\n");
	
	else
	{
		if(index==0)
		insertInt_first(start, num);
		
		else if(index==c)
		insertInt_last(start, num);
		
		else
		{
			struct list* node=createList();
			
			struct list* temp;
			temp=start->next;
		
			while(count!=index-1)
			{
				temp=temp->next;
				count++;
			}
		
			node->next=temp->next;
			temp->next=node;
			node->data=num;
		}
	}
}


void insertChar_at(struct list* start, int index, char ch)
{
	int c=count_list(start);
	
	int count=0;
	
	if(index>c)
	printf("\nERROR:ArrayIndexOutOfBounds\n");
	
	else
	{
		if(index==0)
		insertChar_first(start, ch);
		
		else if(index==c)
		insertChar_last(start, ch);
		
		else
		{
			struct list* node=createList();
			
			struct list* temp;
			temp=start->next;
		
			while(count!=index-1)
			{
				temp=temp->next;
				count++;
			}
		
			node->next=temp->next;
			temp->next=node;
			node->cdata=ch;
		}
	}
}


void insertFloat_at(struct list* start, int index, float f)
{
	int c=count_list(start);
	
	int count=0;
	
	if(index>c)
	printf("\nERROR:ArrayIndexOutOfBounds\n");
	
	else
	{
		if(index==0)
		insertFloat_first(start, f);
		
		else if(index==c)
		insertFloat_last(start, f);
		
		else
		{
			struct list* node=createList();
			
			struct list* temp;
			temp=start->next;
		
			while(count!=index-1)
			{
				temp=temp->next;
				count++;
			}
		
			node->next=temp->next;
			temp->next=node;
			node->fdata=f;
		}
	}
}
