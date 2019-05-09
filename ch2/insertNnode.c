#include <stdio.h>
#include <stdlib.h>

typedef char AirportCode[4];


//ADT Struct for Node:
typedef struct NodeTag
{
  AirportCode Airport;
  struct NodeTag *Link;
  
}NodeType;

NodeType *L, *M, *N;

void InsertNewFirstNode(char *A, NodeType *L)
{
  
}//end InsertNewFirstNode()

void InsertNewSecondNode(void)
{
  NodeType *N;

  N = (NodeType *)malloc(sizeof(NodeType));
  strcpy(N->Airport, "BRU");
  N->Link = L->Link;
  L-Link = N;
}//InsertNewSecondNode()


NodeType *ListSearch(char *A, NodeType *L)
{
  NodeType *N;

  N = L;

  while(N != NULL)
    {
      if(strcmp(N->Airport, A) == 0)
	{
	  return N;
	}
      else
	{
	N = N->Link;
	}
      
    }
  return N;
} // Function ListSearch()

void DeleteLastNode(**L)
{

  NodeType *PreviousNode, *CurrentNode;

  if(*L != NULL)
    {
      if((*L)->Link == NULL)
	{
	  free(*L);
	  *L = NULL;
	}
      else
	{
	  PreviousNode = *L;
	  CurrentNode = (*L)->Link;
	  
	  while(CurrentNode->Link != NULL)
	    {
	      PreviousNode = CurrentNode;
	      CurrentNode = CurrentNode->Link;
	    }

	  PreviousNode->Link = NULL;
	  free(CurrentNode);

	  
	}//end else
    }
  
}//end Function DeleteLastNode()


void InsertNewLastNode(char *A, NodeType **L)
{
  NodeType *N, *P;

  N = (NodeType *)malloc(sizeof(NodeType));
  strcpy(N->Airport, A);
  N->Link = NULL;


  if(*L == NULL)
    {
      *L = N;
    }
  else
    {
      P = *L;

      while(P->Link != NULL) P = P-Link;

      P->Link = N;
    }
  
}// end InsertNewLastNode()

void PrintList(NodeType *L)
{

  NodeType *N;

  
  printf("(");

  N = L;

  while(N != NULL)
    {
      printf("%s", N->Airport);
      N = N->Link;
      if(N != NULL) printf(",");
    }

  printf(")\n");
  
}//end Function PrintList()


int main(void)
{
  NodeType *L;

  L = NULL;
  
  //Test function
  InsertNewFirstNode("DUS", &L);

 

  
}//end main
 