TARGET=sample

$(TARGET) : $(TARGET).c
	 gcc -g $^ -o $@

clean :
	 rm -f *.o $(TARGET)

