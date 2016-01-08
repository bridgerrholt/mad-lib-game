#include "get_lowered.h"
#include "get_stripped_input.h"
#include "rand_range.h"

#include "file_selector.h"
#include "manager.h"

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
	FileSelector fileSelector("stories/");

	// If there are inputs, set them to be the input story text files.
	if (argc > 1) {
		for (int i = 1; i < argc; ++i) {
			fileSelector.pushFileName(argv[i]);
		}
	}
	// If no inputs, set to the default files.
	else {
		fileSelector.pushFileName("story_000.txt");
		fileSelector.pushFileName("story_001.txt");
	}

	std::string nextFile = fileSelector.getRandomFileName();

	// The main game loop, breaks upon request.
	while (true) {
		// Load a file again every loop.
		Manager manager(nextFile);

		// Ask the questions and print the story.
		manager.run();

		// Break if user is done playing.
		std::cout << "Play [A]nother, the [S]ame, or [Q]uit? ";
		std::string questionInput = getLowered(getStrippedInput());
		if (questionInput == "s" || questionInput == "same") {

		}
		else if (questionInput == "q" || questionInput == "quit") {
			break;
		}
		else {
			nextFile = fileSelector.getRandomFileName();
		}
		std::cout << std::endl;
	}

	// Exit.
	return 0;
}