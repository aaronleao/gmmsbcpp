CC =g++
#CC =clang++

SRCPATH 	=../src
BINPATH		=../build
#CFLAGS		=-std=c++11 -Wall -O3 -D__CL_ENABLE_EXCEPTIONS -Wno-deprecated-declarations -Wno-ignored-attributes -I../src -c

# CFLAGS		=-std=c++11 -Wall -O3 -I../src -c -fopenmp
# CFLAGS		=-std=c++11 -Wall -g -pg -I../src -c -O3 -fopenmp

CFLAGS		=-std=c++11 -Wall -O3 -I../src -c -fopenmp 
# CFLAGS		=-std=c++11 -Wall -g -pg -I../src -c -O3 -fopenmp
# LFLAGS		=-fopenmp -lOpenCL -g -pg
LFLAGS		=-fopenmp -lOpenCL -O3
TARGET		=dockthor_soa
SRCS		=Options.cpp Molecule.cpp Ligand.cpp Receptor.cpp Messages.cpp Time.cpp ForceFieldMMFF94s.cpp Rand.cpp Chromossome.cpp Grid.cpp ocl.cpp Log.cpp SteadyState.cpp main.cpp
OBJS		=$(SRCS:.cpp=.o)

OCLFLAGS    =-D__CL_ENABLE_EXCEPTIONS -Wno-deprecated-declarations -Wno-ignored-attributes
#OCLSRCS     =Grid.cpp ocl.cpp main.cpp
OCLOBJS     =$(OCLSRCS:.cpp=.o)


all: $(TARGET)


$(TARGET): $(OCLOBJS) $(OBJS) $(BINPATH)
	$(CC) $(OBJS) $(LFLAGS) -o $(TARGET)
#	$(CC) $(OBJS) $(OCLOBJS) $(LFLAGS) -o $(TARGET)

%.o: $(SRCPATH)/%.cpp 
	$(CC) $(CFLAGS) $(OCLFLAGS) $< -o $@


$(BINPATH):
	@mkdir $@

clean:
	rm -rf $(TARGET) $(OCLOBJS)  $(OBJS) 
