//
//  SimpleSFML3AppWindow.h
//  SFML3Window
//
//  Created by Arshad  Hussain on 05/03/25.
//  Copyright © 2025 Backstagepass. All rights reserved.
//

#include <SFML/Window.hpp>

int simpleSFML3AppWindow()
{
    sf::Window window(sf::VideoMode({800, 600}), "Simple SFML 3.0.0 Window ");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                window.close();
        }
    }
}
