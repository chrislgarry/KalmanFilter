# A short, non-Quine Python script that self-replicates.

import sys, shutil, random, string
shutil.copy(sys.argv[0],'srepl'+''.join(random.choice(string.ascii_letters + string.digits) for x in range(10))+'.py')
