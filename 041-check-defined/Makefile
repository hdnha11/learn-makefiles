# ifdef does not expand variable references; it just sees if something is defined at all

bar =
foo = $(bar)

all:
ifdef foo
	echo "foo is defined"
endif
ifdef bar
	echo "but bar is not"
endif
