#include <iostream>
#include <SFML/Graphics.hpp>
#include <fmt/core.h> // Include the {fmt} library
#include <string>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Handwritten Text with {fmt}");

    // 1. Load the handwritten font from a file
    sf::Font handwrittenFont;
    if (!handwrittenFont.loadFromFile("path/to/your/handwritten_font.ttf")) {  // ye path change kar liyo
        // Error handling
        return -1;
    }

    // --- Changes for {fmt} are here ---

    // Variables to include in our string
    std::string author = "Aryan and Kavya";
    int fontSize = 48;

    // 2. Create the string using fmt::format
    std::string message = fmt::format("this is text to hand written by two noobs who did'nt know anythiny about framework ", author, fontSize);

    // 3. Create a text object
    sf::Text text;
    text.setFont(handwrittenFont);
    text.setString(message); // Use the formatted string
    text.setCharacterSize(fontSize); // in pixels
    text.setFillColor(sf::Color::Black);
    text.setPosition(50.f, 250.f);

    // --- End of changes ---

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        // 4. Draw the text to the window
        window.draw(text);
        window.display();
    }

    return 0;
}
