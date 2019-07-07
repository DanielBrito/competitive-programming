# https://app.codesignal.com/arcade/python-arcade/slithering-in-strings/Rzf4YKMk69Jm3gNnm

import textwrap

def feedbackReview(feedback, size):
    return textwrap.wrap(feedback, size)

print(feedbackReview("This is an example feedback", 8))