const char STR_NULL[STRLEN] = { CH_NULL };
const char *OPERATORS = "^/%*+-";
const char *VALID_CHARS = "0123456789( .^/%*+-)";

char EXPRESSION[STRLEN] = { CH_NULL };
char STR_TOKENS[TOKENS][STRLEN] = { { CH_NULL } };

byte OP_QUEUE[QUEUE_LEN] = { CH_NULL };
double NUM_QUEUE[QUEUE_LEN] = { 0.0 };
