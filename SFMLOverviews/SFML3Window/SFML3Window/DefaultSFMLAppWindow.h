//
//  DefaultSFMLAppWindow.h
//  SFML3Window
//
//  Created by Arshad  Hussain on 05/03/25.
//  Copyright © 2025 Backstagepass. All rights reserved.
//
#include <SFML/Graphics.hpp>

#include <SFML/Audio.hpp>

// Here is a small helper for you! Have a look.
#include "ResourcePath.hpp"
int DefaultSFMLAppWindow()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window");

    // Set the Icon
    const sf::Image icon(resourcePath() / "icon.png");
    window.setIcon(icon);

    // Load a sprite to display
    const sf::Texture texture(resourcePath() / "background.jpg");
    sf::Sprite        sprite(texture);

    // Create a graphical text to display
    const sf::Font font(resourcePath() / "tuffy.ttf");
    sf::Text       text(font, "Hello SFML", 50);
    text.setFillColor(sf::Color::Black);

    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() / "doodle_pop.ogg"))
    {
        return EXIT_FAILURE;
    }

    // Play the music
    music.play();

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        while (const auto event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }

            // Escape pressed: exit
            if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>();
                keyPressed && keyPressed->code == sf::Keyboard::Key::Escape)
            {
                window.close();
            }
        }

        // Clear screen
        window.clear();

        // Draw the sprite
        window.draw(sprite);

        // Draw the string
        window.draw(text);

        // Update the window
        window.display();
    }
}
