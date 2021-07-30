/*
 * The ultimate blockchain program
 */

#include <stddef.h>

#include "blocknicator/include/blocknicator.h"


int main (int argc, char** argv )
{
	void* block = create_block("100€");
	void* chain = chain_block(block, NULL);

	return 0;
}

