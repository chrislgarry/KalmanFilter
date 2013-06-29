#!/usr/bin/python
# Parse text dump of email address from Horde into an email list

import re, sys

text = open(str(sys.argv[1]))
matches=re.findall(r'\<(.+?)\>',text.read())
print(",".join(matches))
