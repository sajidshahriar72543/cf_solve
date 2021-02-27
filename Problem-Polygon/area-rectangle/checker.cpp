#include "testlib.h"

int main(int argc, char * argv[]) {
	registerTestlibCmd(argc, argv);
	
	int oufq = ouf.readInt();
	int ansq = ans.readInt();
	
	if (ansq > 20)	
		quitf(_fail, "Limit is %d, but main solution have made %d queries", 20, ansq);

	if (oufq > 20)	
		quitf(_wa, "Limit is %d, but solution have made %d queries", 20, oufq);

	quitf(_ok, "all okka great job!");
}

