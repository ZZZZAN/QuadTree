#include"stdlib.h"
#include"treeStructure.h"
#ifndef WRITETREE_H
#define WRITETREE_H
void writeTree( Node *head );
// recursively visit the leaf nodes

void writeNode( FILE *fp, Node *node );

// write out the (x,y) corners of the node

void printOut( FILE *fp, Node *node );

void destroyTree(Node *node);

void removeChildren( Node *parent );
#endif