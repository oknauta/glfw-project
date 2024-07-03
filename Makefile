build:
	@ echo Compiling...
	g++ $(FILES) $(LIBRARIES) -o app/$(OUTPUT)

LIBRARIES = -l glfw -l GL
OUTPUT    = app.out
FILES     = ./src/*.cpp