# first make
# CXX = complier tool, 使用系统编译工具，而不是人工指定，可以解决跨平台编译问题
# $^ = 不重复的依赖项
# $@ = 目标
# 在命令前加@表示不打印该指令到console, eg. @echo "build success!"
# 在命令前加-表示尽管指令执行失败，但仍可以往下执行, eg. -rm test
TARGET = first_make # 变量赋值
LIBS = -lpthread
OBJS = first_make.o XData.o # 需要的依赖，会自动推导
CXXFLAGS=-I../test_gcc #用于不再当前目录下的文件，例如我需要../test_gcc/下的test.h, 就需要添加-I
$(TARGET): $(OBJS)
	@#-@rm test
	$(CXX) $^ -o $@ $(LIBS)
	@echo "build $(TARGET) success!"

clean:
	$(RM) $(TARGET) $(OBJS)
.PHONY: clean *clean
