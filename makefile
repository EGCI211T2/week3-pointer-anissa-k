DEPS= test
compile: main.cpp 
	 g++ main.cpp -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS) $(vars)

clean: $(DEPS)
	 rm $(DEPS)
