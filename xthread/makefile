TARGET = libxthread.so
OBJS = xthread.o
LDFLAGS = -shared
CXXFLAGS = -fPIC

$(TARGET):$(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

clean:
	$(RM) $(TARGET) $(OBJS)

