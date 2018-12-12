#include "treeStructure.h"
#ifndef BUILDTREE_H
#define BUILDTREE_H
Node *makeNode( double x, double y, int level );
// split a leaf nodes into 4 children

void makeChildren( Node *parent );
void growTree( Node *node );
#endif