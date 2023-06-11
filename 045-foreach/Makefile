# Syntax: $(foreach var,list,text)

foo := who are you
# For each "word" in foo, output that same word with an exclamation after
bar := $(foreach word,$(foo),$(word)!)

all:
	# Output is "who! are! you!"
	@echo $(bar)
