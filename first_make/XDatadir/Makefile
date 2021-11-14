TARGET = libxdata.so
OBJS = XData.*
CXXFLAGS = -fPIC -shared
$(TARGET):$(OBJS)
	$(XCC) $^ -o $@

clean:
	$(RM) ${TARGET} ${OBJS}
.PHONY: clean
