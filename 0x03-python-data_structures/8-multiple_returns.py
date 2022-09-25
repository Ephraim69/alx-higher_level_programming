#!/usr/bin/python3
def multiple_returns(sentence):
    n = len(sentence)
    if n == 0:
        return (0, None)
    return (n, sentence[0])


sentence = "At school, I learnt C!"
length, first = multiple_returns(sentence)
print("Length: {:d} - First character: {}".format(length, first))
