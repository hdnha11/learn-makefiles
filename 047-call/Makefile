# Syntax: $(call variable,param,param,...)
#         $(0) = variable, $(1) = param 1, $(2) = param 2,...

sweet_new_fn = Variable Name: $(0) First: $(1) Second: $(2) Empty Variable: $(3)

all:
	# Outputs "Variable Name: sweet_new_fn First: go Second: tigers Empty Variable: "
	@echo $(call sweet_new_fn, go, tigers)
