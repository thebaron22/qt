DIRS := $(shell find . -maxdepth 1 -not -path "./.git" -not -path "." -type d)

.PHONY: all clean

all clean:
	for dir in $(DIRS); do \
          $(MAKE) -C $$dir clean; \
        done

