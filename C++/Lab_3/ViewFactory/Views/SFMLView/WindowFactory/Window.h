//
// Created by Bayramov Nidjat on 21.11.18.
//

#ifndef LAB_3_WINDOW_H
#define LAB_3_WINDOW_H

#include <ncurses.h>
#include <SFML/Graphics/RenderWindow.hpp>
#include "../../../../BattleShipModel.h"

//Abstract class
//We can't create an object of type SFMLWindow
//Class SFMLWindow can have properties
//The methods of class SFMLWindow can have defined methods bodies
class Window {
        private:
            sf::RenderWindow *main_window = nullptr;

        public:

            void setMainWindow(sf::RenderWindow *main_window) {
                    Window::main_window = main_window;
            }

            sf::RenderWindow *getMainWindow() const {
                    return main_window;
            }

            virtual void render(BattleShipModel *battleShipModel) = 0;
};

#endif //LAB_3_WINDOW_H
