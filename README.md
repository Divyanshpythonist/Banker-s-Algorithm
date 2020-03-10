# Banker-s-Algorithm
Banker's algorithm is a deadlock avoidance algorithm. It is named so because this algorithm is used in banking systems to determine whether a loan can be granted or not.
Consider there are n account holders in a bank and the sum of the money in all of their accounts is S. Everytime a loan has to be granted by the bank, it subtracts the loan amount from the total money the bank has. Then it checks if that difference is greater than S. It is done because, only then, the bank would have enough money even if all the n account holders draw all their money at once.
Banker's algorithm works in a similar way in computers.
Whenever a new process is created, it must specify the maximum instances of each resource type that it needs, exactly.
The banker’s algorithm is a resource allocation and deadlock avoidance algorithm that tests for safety by simulating the allocation for predetermined maximum possible amounts of all resources, then makes an “s-state” check to test for possible activities, before deciding whether allocation should be allowed to continue.

To know more about Bankers Algorithm refer to the link below:
https://www.youtube.com/watch?v=7gMLNiEz3nw
